#include <iostream>
#include <limits>
using namespace std;

double maximum(double arr[], int len)
{
    double max = arr[0];
    for (int i = 1; i < len; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int main()
{
    double data[10] = {10, 23, 5, 9, 22, 48, 12, 10, 55, 31};

    cout<<"데이터 : ";
    for(int i=0; i<10;i++)
        cout<<data[i]<<" ";
    cout<<endl<<endl;
    cout<<"최댓값 : "<<maximum(data, 10)<<endl;
}