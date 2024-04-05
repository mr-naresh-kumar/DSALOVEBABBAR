#include<iostream>
using namespace std;

int x =2; // global variable 


void fun(){
    int x = 60;
    cout<<x<< endl;
    ::x = 40;
     cout<<::x<< endl;
}
int main() {
 x = 4;    //global x
 int x = 20;  // local to main funciton 
cout << x <<endl;
cout<<::x << endl; // accessing global with :: 

{
    int x =50;
    cout<< x << endl;
}

fun();
    return 0;
}