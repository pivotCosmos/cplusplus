#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 100;
    int* ptr = &a;

    cout<<"ptr�� ����Ű�� ���� �� : "<<*ptr<<endl; //ptr�� ����Ű�� ���� ��
    *ptr = 20; //ptr�� ����Ű�� ���� �� 20�� ����
    cout<<"���� a�� �� : "<<*ptr<<endl;
    return 0;
}
