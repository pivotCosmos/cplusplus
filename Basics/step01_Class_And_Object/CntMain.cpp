#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
    Counter cnt; //Coutner 객체 정의
    //cnt.value = 0; //클래스 선언문 밖에서 private 멤버에 직접 접근 불가
    cnt.reset(); //알 수 없는 값이 들어 있는 상태이므로 초기화 해 준다.
    cout << "value : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "value : " << cnt.getValue() << endl;
    return 0;
}