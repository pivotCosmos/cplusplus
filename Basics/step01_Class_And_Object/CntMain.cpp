#include <iostream>
#include "Counter.h"
using namespace std;
void constTest(const Counter& c); //함수 원형

int main() {
    Counter cnt; //Coutner 객체 정의
    //cnt.value = 0; //클래스 선언문 밖에서 private 멤버에 직접 접근 불가
    cnt.reset(); //알 수 없는 값이 들어 있는 상태이므로 초기화 해 준다.
    cout << "value : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "value : " << cnt.getValue() << endl;

    /**
     * 객체에 const를 지정하면
     *   1. 멤버변수를 변화시키는 작업이 불가능하다.
     *   2. 똑같이 const 지정된 함수만 사용 가능하다.
     *   3. 멤버변수 초기화가 돼 있어야 한다.(생성자로 해도 됨)
     * 
     * 함수에 const를 지정하려면
     *   1. 멤버변수 값이 변화하지 않아야 한다.
    */
    const Counter c; //const 지정. 멤버변수 초기화 필요(Counter.h에서 int value = 0;로 초기화한 상태)
    int n = c.getValue();
    //c.count(); //count()는 멤버변수를 변화시키므로 에러 발생.

    return 0;
}

/**
 * const 지정
 *   데이터 값이 바뀌지 않는 함수에는 const 지정해 주는 게 좋다.
 *   객체를 const 매개변수로 전달하다보면 문제가 생길 수 있기 때문이다.
*/
void constTest(const Counter& c) { //const지정, 참조형(값호출이어도 에러는 발생)
    //c.count(); //값이 바뀌기 때문에 에러 발생.
    cout << c.getValue() << endl; //실제로는 값이 안 바뀌지만, getValue()에 const를 지정해 두지 않으면 에러 발생.
}