#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100;
    int* ptr = &a;

    cout<<"ptr이 가리키는 곳의 값 : "<<*ptr<<endl; //ptr이 가리키는 곳의 값
    *ptr = 20; //ptr이 가리키는 곳에 값 20을 저장
    cout<<"변수 a의 값 : "<<*ptr<<endl;
    return 0;
}
