#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    cout<< sizeof(a) << endl;
    int n = sizeof(a) / sizeof(int);
    cout<< "size of array" << n << endl;
    return 0;
}