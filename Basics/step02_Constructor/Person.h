#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED


class Person {
    //가시성 지시를 안 하면 private
    char* name; //이름 저장
    char* addr; //주소 저장
public :
    Person(const char* name, const char* addr); //생성자. 원형만 선언했다. 상수 멤버로 매개 변수로 받는다.
    ~Person(); //소멸자
    void print() const; //값을 바꾸지 않으니까 const
    void chAddr(const char* newAddr); //주소 변경
};


#endif //PERSON_H_INCLUDED