#include <iostream> //print()에 쓸 출력 기능
#include <cstring> //문자열 복사, 길이 구하기 등
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) {
    //이름 저장할 공간 할당
    this->name = new char[strlen(name)+1];
    //데이터멤버 name에 이름을 복사
    strcpy(this->name, name);

}