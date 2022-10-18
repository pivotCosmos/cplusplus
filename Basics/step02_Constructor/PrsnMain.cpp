#include <iostream>
#include <windows.h>
#include "Person.h"
using namespace std;
#pragma execution_character_set( "utf-8" )

int main() {
    SetConsoleOutputCP(65001);
    Person* p1 = new Person("naon", "koyangsi");
    Person* p2 = new Person("나옹", "고양시");
    p1->print();
    p2->print();
    cout << endl << "주소 변경 : ";
    p2->chAddr("대전시 서구");
    p2->print();
    delete p1;
    delete p2;
    return 0;
}
