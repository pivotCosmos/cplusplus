#include <iostream>
using namespace std;
//클래스 선언
class CppBeginner {
public :
    void hello() const {
        cout<<"나의 첫 번째 C++ 프로그램" <<endl;
    }
};

int main() {
    CppBeginner me; // CppBeginner 객체 정의
    me.hello(); // 멤버함수 호출
}