#include <iostream>
using namespace std;
const float PI = 3.14159265f;
struct Circle {
    float radius, cx, cy;
};

//Circle의 참조형 형식 매개변수 c를 통해 원의 데이터 입력
void inputData(Circle& c)
{
    cout<<"원의 반지름 : ";
    cin>>c.radius;
    cout<<"중심좌표(x) : ";
    cin>>c.cx;
    cout<<"중심좌표(y) : ";
    cin>>c.cy;
}

//Circle의 참조형 형식매개변수 c를 통해 전달된 데이터 출력
void prData(Circle& c)
{
    cout << "반지름 = " << c.radius << endl;
    cout << "중심좌표 = {" << c.cx;
    cout << ", " << c.cy << "}" << endl;
}

//Circle의 참조형 형식매개변수 c를 통해 전달된 원의 면적 계산
float area(Circle& c)
{
    return PI * c.radius * c.radius;
}

int main()
{
    Circle circle;
    inputData(circle);
    cout << "입력된 원의 정보" << endl;
    prData(circle);
    cout<<"원의 면적 : " << area(circle) << endl;
}