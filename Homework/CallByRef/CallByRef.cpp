#include <iostream>
using namespace std;
const float PI = 3.14159265f;
struct Circle {
    float radius, cx, cy;
};

//Circle�� ������ ���� �Ű����� c�� ���� ���� ������ �Է�
void inputData(Circle& c)
{
    cout<<"���� ������ : ";
    cin>>c.radius;
    cout<<"�߽���ǥ(x) : ";
    cin>>c.cx;
    cout<<"�߽���ǥ(y) : ";
    cin>>c.cy;
}

//Circle�� ������ ���ĸŰ����� c�� ���� ���޵� ������ ���
void prData(Circle& c)
{
    cout << "������ = " << c.radius << endl;
    cout << "�߽���ǥ = {" << c.cx;
    cout << ", " << c.cy << "}" << endl;
}

//Circle�� ������ ���ĸŰ����� c�� ���� ���޵� ���� ���� ���
float area(Circle& c)
{
    return PI * c.radius * c.radius;
}

int main()
{
    Circle circle;
    inputData(circle);
    cout << "�Էµ� ���� ����" << endl;
    prData(circle);
    cout<<"���� ���� : " << area(circle) << endl;
}