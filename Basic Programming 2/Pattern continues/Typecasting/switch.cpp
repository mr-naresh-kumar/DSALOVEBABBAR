#include <iostream>
using namespace std;

int main ( ) {
    float  a, b;
    cout << "Enter the Number " << endl;

    cin>> a  >> b;

    int op;

    cout << " What operation you want to do ?" << endl;
    cin>> op;
float ans = 0;
    // op -> 0 add , 1 -> sub, 2 -> * , 3-> divide , invalid operation 


switch (op){
    case 0 : 
    ans = a + b;
break;
    case 1:
    ans = a - b;
    break;
    case 2: 
    ans = a * b;
    break;
    case 3:
    ans = a/b;
    break;
    
    default:
    cout << " Invalid operation "<< endl;
    return 0;

}
  cout << "Your ans is Final" << ans << endl;
    return 0;
    // if ( op == 0){
    //     ans  = a+b; 
    // }
    // else if(op ==1 ){
    //     ans  = a -b;
    // }
    
    // else if ( op == 2){
    //     ans  = a *b;

    // }
    // else if ( op == 3){
    //     ans  = a/b;

    // }
    // else{
    //     cout << " Invalid  Operation " << endl;
    //     return  0;

    // }
    // cout << "Your ans is Final" << ans << endl;
    // return 0;

}