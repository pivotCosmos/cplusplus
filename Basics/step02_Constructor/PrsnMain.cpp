#include <iostream>
#include <windows.h>
#include "Person.h"
using namespace std;
#pragma execution_character_set( "utf-8" )

int main() {
    SetConsoleOutputCP(65001);
    Person* p1 = new Person("naon", "koyangsi");
    Person* p2 = new Person("나옹", "고양시");
    Person p3("러버덕", "석촌호수"); //동적 할당 X. 객체 변수처럼 선언한 경우.
    //(*p1).print(); //원래 모양
    p1->print(); //포인터로 멤버에 엑세스 할 경우 -> 를 사용 가능
    p2->print();
    p3.print();
    cout << endl << "주소 변경 : ";
    p2->chAddr("대전시 서구");
    p2->print();
    delete p1;
    delete p2;
    //p3은 delete 하지 않는다. return 0하면 바로 없어진다.
    return 0;
}
