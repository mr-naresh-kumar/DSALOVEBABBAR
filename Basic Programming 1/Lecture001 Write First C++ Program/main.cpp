#include <iostream>
using namespace std;
// it is micro 
#define AUTHOR "Naresh"
int main(){


// for (int i= 10; i<=12; i= i+1){
// cout << "monika my darling" <<endl;
// }


for (int i =0; i<3; i= i+1){
    cout<<"outer loop" << i <<endl;
    for (int j=0; j<3; j= j+1){
        cout<<"inner loop"  << j << endl;
    }
}
// int a;
// std::cin>>a;
// a= a*a;
// std::cout<<"square of a: " <<a << std::endl;
// cout << "Written By:" << AUTHOR <<endl;



// return 0;

}
