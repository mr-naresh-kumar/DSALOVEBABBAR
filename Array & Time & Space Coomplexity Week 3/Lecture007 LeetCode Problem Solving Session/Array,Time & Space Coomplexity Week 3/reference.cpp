#include<iostream>
using namespace  std;


int incrementBy1(int n){
    n = n+1;
    return n;

}
int main(){

    // int  n = 5; // noraml integer variable main name 
    // int &k =n; // its is reference var 
    // int &c =n;  // its reference is var
    // cout<< "n:" << n<< endl;
    //  cout<< "k:" << k<< endl;
    //   cout<< "c:" << c<< endl;


    int n ;
    cin>>n;
    n = incrementBy1(n);
    cout<< "n:" << n<< endl;
}