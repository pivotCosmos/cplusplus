#include <iostream>
using namespace std;

int main() {
    int data[10] = {10,23,5,9,22,48,12,10,55,31};
    int max = data[0];

    cout<<"������ : "<<max;
    for (int i=1; i<10; i++){
        cout<<" "<<data[i];
        if (max < data[i])
            max = data[i];
    }
    cout<<"\n\n�迭�� �ִ� : "<<max<<endl;
    return 0;
}
