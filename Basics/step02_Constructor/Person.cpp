#include <iostream> //print()에 쓸 출력 기능
#include <cstring> //문자열 복사, 길이 구하기 등
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) {
    /**
     * 이름 저장할 공간 할당
     *   this->name 은 Person 의 멤버 데이터
     *   new 로 동적 메모리 할당
     *   C++에서는 문자열 끝을 알리는 null string, 0이라는 코드를 가진 char 가 들어간다.
     *   따라서 strlen(name)+1만큼 공간 할당.
     * */
    this->name = new char[strlen(name)+1];
    //데이터멤버 name에 이름을 복사
    strcpy(this->name, name);
    //주소 저장할 공간 할당
    this->addr = new char[strlen(addr)+1];
    //데이터멤버 addr에 주소를 복사
    strcpy(this->addr, addr);
    cout << "Person 객체 생성함(" << name << ")" << endl;
}

Person::~Person() {
    cout << "Person 객체 제거함(" << name << ")" <<endl;
    delete [] name; //이름 저장 공간 반납
    delete [] addr; //주소 저장 공간 반납
}

void Person::print() const {
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char *newAddr) {
    //this->addr = addr;
    delete [] addr; //기존 공간 반납
    //새로운 주소에 맞는 공간 할당
    addr = new char[strlen(newAddr)+1];
    strcpy(addr, newAddr); //데이터멤버 addr에 새로운 주소를 복사
}