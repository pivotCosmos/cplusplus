#include <iostream>
using namespace std;

int main() {
    char* sPtr;
    int maxSLen; //�Է��� �ܾ��� �ִ� ����
    cout<<"�ܾ��� �ִ� ���̸� �Է��Ͻÿ� : ";
    cin>>maxSLen;
    sPtr = new char[maxSLen]; //maxSLen���� ���ڸ� ������ �޸� �Ҵ�
    cout<<"�ܾ �Է��Ͻÿ� : ";
    cin>>sPtr;
    int len{0}; //�ܾ��� ���� ��
    for (char* p = sPtr; *p; p++) //p�� �̿��Ͽ� sPtr�� ���ۺ��� ������ �ݺ�
        len++;
    cout<<sPtr<<"�� ���� ��: "<<len<<endl;
    delete [] sPtr; //�޸� ��ȯ
}