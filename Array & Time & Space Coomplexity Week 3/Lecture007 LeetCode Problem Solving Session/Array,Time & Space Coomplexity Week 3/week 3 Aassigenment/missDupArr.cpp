#include<iostream>
using namespace std;

void findMissing(int *a, int n){
    // visited method 

    for(int i =0; i<n; i++){
        int index = abs(a[i]);
        if(a[index -1 ] >0){
            a[index-1] *= -1;
        }
    }
    for(int i =0; i<n; i++){
        // cout<< a[i] <<  " ";
    }

    // all positive indexes are missing  

    for(int i =0; i<n; i++){
        if(a[i] >0)
        cout<<  i+1 << " ";
    }
}


int main(){
    int n;
    int a[] = {1,3,3,3, 3};
    n = sizeof(a)/sizeof(int);
    findMissing(a, n);
    return 0;


}