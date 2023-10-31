
#include<iostream>
using namespace std;



// maximum number 
//  void printMaxmum(int num1, int num2, int num3){

// if(num1>=num2 && num1>=num3){
//     cout << " Maximum is : " << num1 << endl;

// }
// else if (num2 >= num1 && num2 >= num3){
//     cout << " Maximum is :" << num2 << endl;
// }
// else {
// cout << "Maximum is : " << num3 << endl;
// }
// }
// int printMaxmum( int n1, int n2, int n3){
//     int ans1 = max(n1, n2);
//     int finalAns = max(ans1, n3);
//     // cout<< " final Ans is: " << finalAns << '\n';
//     return finalAns;

// }



// print to one to n number 

// void printCounting(int n){
//     for(int i=1; i<=n; i++ ){
//         cout << i << endl;
//     }
// }

// check even or odd

// void checkEvenOdd(int num){
//     if((num ^2 ) == (num+1)){
//         cout << "Even number  "  << endl;

//     }
//     else{
//         cout << "Odd number " << endl;
//     }
// }


// find one to n sum  

// void findSumUptoN(int n){
//     int sum =0;
//     for(int i = 1; i<=n; i++ ){
//         sum = sum+i;


//     }
//     cout << " final sum " << sum << '\n';
// }


// one to n all even no of sum

// void findSumofEven(int n){
//     int sum =0;
//     for(int i = 2; i<=n; i = i +2){
//         sum = sum+i;


//     }
//     cout << " final sum " << sum << '\n';
// }



// prime number or not 


bool prinPrimeorNot(int n){
    for(int i =2; i<n; i++){
        if(n%i == 0){
            // remmainder  = 0 -> perfectly divisible  not a prime number 
            return false;
        }
    }
    // yaha par m kha skta hu 
    // k[ 2, ,3 4, 5, -----n-1 ], koi bhi N ko perfectly divide nhi kar paya hoga
    // it means N is prime number 
    return true;


}
int main (){

    // printCounting(10);
    // checkEvenOdd(5);
    // findSumUptoN(10);
    // findSumofEven(10);
   bool prime=  prinPrimeorNot( 1);
   if(prime){
    cout<< "its a prime number" << endl;
   }
   else{
    cout<< "its not a prime number" << endl;
   }


    // int maximum = printMaxmum(1, 30,03);
    // cout << "Maxmum number " << maximum << '\n';


}
 