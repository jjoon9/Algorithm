#include <opencv/cv.h>
#include <opencv\cxcore.h>
#include <opencv\highgui.h>
#include "bloblabeling.h"
#include <iostream>


void main() {
	const char *classifer = "C://opencv248//sources//data//haarcascades//haarcascade_frontalface_alt_tree.xml";
	char * filesrc = "c://FERET//TEST//";
	char * tarsrc = "c://FERET//RESULT//";
	char * fullpathsrc;
	char * fullpathtarget;
	char string[5];
	int n;
	printf("input number : ");
	scanf("%d", &n);
	CvHaarClassifierCascade* cascade = 0;
	cascade = (CvHaarClassifierCascade*)cvLoad(classifer, 0, 0, 0);
	if (!cascade) {
		std::cerr<<"error: cascade error!!"<<std::endl;
		return;
	}
	int i=0;
	IplImage * target = cvCreateImage(cvSize(145, 145), IPL_DEPTH_8U, 1);
	while (1) {
		i++;
		_itoa(i, string, 10);
		CvMemStorage* storage = 0;
		storage = cvCreateMemStorage(0);
		fullpathsrc = (char *)calloc(50, 1);
		strcat(fullpathsrc, filesrc);
		strcat(fullpathsrc, string);
		strcat(fullpathsrc, ".tif");


		fullpathtarget = (char *)calloc(50, 1);
		strcat(fullpathtarget, tarsrc);
		strcat(fullpathtarget, string);
		strcat(fullpathtarget, ".jpg");
		if (!storage) {
			std::cerr<<"error: storage error!!"<<std::endl;
			return;
		}
		IplImage *frame = cvLoadImage(fullpathsrc, 0);
		//얼굴 검출  
		CvSeq *faces = cvHaarDetectObjects(frame, cascade, storage, 1.4, 1, 0);
		//검출된 얼굴 Rectangle 그리기  


		if (faces->total !=0) {
			CvRect *r = 0;
			r = (CvRect*)cvGetSeqElem(faces, 0);
			cvRectangle(frame, cvPoint(r->x, r->y), cvPoint(r->x+r->width, r->y+r->height), cvScalar(0, 255, 0), 3, CV_AA, 0);
			cvSetImageROI(frame, *(r));
			cvResize(frame, target);
			cvSaveImage(fullpathtarget, target);
		}
		cvShowImage("haar example (exit = esc)", frame);
		cvWaitKey(5);
		cvReleaseMemStorage(&storage);
		cvReleaseImage(&frame);
		free(fullpathsrc);
		free(fullpathtarget);
		if (n==1)
			break;
		n--;

	}


	cvReleaseHaarClassifierCascade(&cascade);
	cvDestroyWindow("haar example (exit = esc)");
	return;


}