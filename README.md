# Algorithm
##1주차
-별찍기는 각 기호별로 함수만들면 가독성좋아짐.
-배열의 마지막값 처리 꼭 생각하기.
-한문장 {} 안할수있지만 수정시 실수조심하기.
-sizeof는 메모리에 잡힌 전체길이.
-strlen는 문자열의 길이.
-(i%10 == 9) <=> ((i+1)%10 ==0)
-필요한 부분이 있으면 걔 범위까지 구해야지(for 문돌릴때 =도 넣어서.)
-set쓸수도있지만, 있는지 배열을 하나 만들어 놓을수도.
`#include<cstdio>
bool visit[42] = { false, };
int main() {
	for (int i = 0; i < 10; i++) {
		int n;  scanf("%d", &n);
		visit[n % 42] = true;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (visit[i] == true) cnt++;
	}
	printf("%d", cnt);
}`


-받아놓고 처리할수도있지만
-걍 받으면서 바로처리해서 계산해낼수도.(소수찾기처럼)
-유클리드 호제법 : 16이랑 12의 공배수는
12, 16을 12로 나눈 나머지(4)
4, 12를 4로 나눈 나머지(0)
해서 뒤에께 0이되면 앞에거가 공배수.
'0', 0 잘처리 구분...
-pow 실수 / 정수 ??

-출력형식에 %d하고 \n안하면 틀린걸로 볼수도있네... 출력형식 꼭확인.
-strlen 쓸거면 char배열 ""로 초기화꼭하기!! & \0위치박아넣기.
-#include <queue> using namespace std; 해줌.
-queue<int> queue;
-사망연산자ㅎㅎ test ? expression1 : expression2

---

##2주차
-if(0) if (1) 비교해보자@@
-bool변수에 넣는순간 false,true로 오토타입캐스팅됨. !도 물론적용잘됨.
-strcmp쓸때는 잘되더라도 cstring include 하자

-functional include하고
sort(b, b + 10,greater<int>());

-런타임오류는 대개 배열크기 충분치못해서.
-cstring 하고 memset(res, -1, sizeof(res));

-최솟값은 다른상황존재가능! 예외처리꼭.

-결과 다 저장시키고 돌려서 출력해도되지만, 결과내면서 포문내포문하나끝날때 출력할수도있음.


`#include <string> <iostream>
cin>>str;
std::string.length()`


-그냥 숫자 그값이 인덱스 자체로 할수도.

-1234567
=> a[1] a[2]...


-음수에mod안먹는다 제수 더해주고 먹이자.


`#include <list>
list<char> list<int> li;
li.push_back(char~);
list<char>::iterator it;
it = l.begin() ->첫번째 원소를 가리킴.(push_front으로 넣으면 여기 앞에 들어감)
it = l.end()->마지막원소의 다음을가리킴(push_back으로 넣으면 여기위치에 딱 들어감)
it--; it++; *it
li.erase(it) `


-F9로 중단점 설정하고 볼 값 넣고(cf. 별it) F5로 디버깅


-역방향을 정방향으로 바꾸는 개같은짓따위하지말고
-걍 역방향 잘 갈생각하자.
-그 매핑 공식은 섣부르게 판단하지말자.
-몇개해보고 딱하지말고 수많은 예시를 생각해보자. (논리적으로 타당한지도 꼭확인)
-최댓값일때 문제생기는거 생각해보자.
-기준이 되는수를 함부로정하지말자...


-각 자리수 합 구하기
`while (temp>0) {
  sum+= temp % 10;
  temp /= 10;
}`


-아무리 재귀라도 필요없는부분까지 다보면 시간초과나서 터짐.
-이경우 필요없는부분을 최대한 간단히 계산할수 있는 방법 찾자.

-Z문제처럼 그냥 그 개수 더해주는것처럼.


-재귀나 반복에서 첫조건잘잡으면(미리빼줘서넘긴다든지) 
-조건처리 덜복잡해질수있음!
-조건을 첨에 잘잡자!

`char str[2][4]
-> 
abc'\0'
def'\0'`

-bool함수에서 else return false 안하면 true로 리턴될수도있덩!



-printf로 디버깅할때 \n안붙이고 3자리숫자를 4자리숫자로 착각하지말자.


/////////////////////////	
it++;
if (it==li.end()) it = li.begin();
/////////////////////////							
if (it==li.begin()) it = li.end();
it--;
/////////////////////////





















