#include<iostream>
#include<limits.h>
using namespace std;



// int main(){
//  Numeric Hollow  half pyramid 

    // int n ;
    // cin >> n;

    // for(int row = 0;  row<n; row++){
    //     for(int col = 0 ; col<=row;  col ++){
    //         if(col==0||col ==row ||row ==n-1){
    //             cout << col + 1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<< endl;
    // }





    //  Numeric Hollow inverted  half pyramid 


    //  int n ;
    // cin >> n;

    // for(int row = 0;  row<n; row++){
    //     for(int col = row+1; col<=n;  col++){
    //         // if()
            

    //         if(col==row+1||col ==n || row== 0){
    //         cout << col;
    //             // cout << col + 1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<< endl;
    // 


// Numeric Palindeome Equilateral Pyramid 

// int k = n;
// for(int i = 0; i<n; i++){
//     int c = 1;
//     for(int j = 0; j<k; j++){
//         if(j<n-i-1){
//             cout << " ";
//         }
//         else if(j<=n-1){
//             cout << c;
//             c++;
//         }
//         else if(j==n){
//             c =c-2;
//             cout << c;
//             c--;

//         }
//         else{
//             cout<< c;
//             c--;
//         }

//     }
//     k++;
//     cout << endl;
// }





// Solid half diamond 



// for(int row  = 0; row<n; row++){
//     for(int col = 0; col<row+1; col++){
//         cout << "*";
//     }
// cout<< endl;
// }
//  for(int row  = 0; row<n; row++){
//     for(int col =0; col<n-row-1; col++){
//         cout<< "*";

//     }
//     cout << endl;
//  }



// Phancy Pattern 

// for(int i = 0; i<n; i++){
//     for(int j =0; j<2*n-i-2; j++){
//         cout<< "*";
//     }
//     cout<< endl;

// }

// phancy patter no 2 

// int c =1;
// for(int i = 0; i<n; i++){
//     for(int j =0; j<=i; j++ ){
//         cout<< c;
//         c++;
//         if(j<i){
//             cout<<"*";


//         }
//     }
//     cout<< endl;
// }
// // cout << "C:" << c << endl;
// // shrinking phase i
// int start = c-n;
// for(int i = 0; i<n; i++){
//     int k =start;
//     for(int j = 0; j<=n-i-1; j++){
//         cout <<k;
//         k++;
//         if(j<n-i-1){
//             cout<<"*";


//         }
//     }
//     start = start -(n-i-1);
//     cout<< endl;
// }

// Fancy Pattern #3 


// for(int i =0; i<n; i++){
//     int cond = i <= n/2 ? 2*i : 2*(n-i-1);

//     for(int j =0; j<=cond; j++){
// if( j <= cond/2){
//     cout<<j+1;

// }
// else{
//     cout << cond - j +1;
// }
//         // cout<< "*";

//     }
//     cout<< endl;

// }


// floyd trianlgle

// int c  =1;

// for(int i =0; i <n; i++){
//     for(int j =0; j<=i; j++){
//         cout << c ;
//         c++;
//     }
//     cout<< endl;

// }



// pascals triangle pattern 

// pascas triangle binomail cofficent 

// c = c*(i-j)/j;
// i=[1, operator new[]
// j= [1,i]

// for(int i =1; i<n; i++){
//     int C =1;
//     for(int j =1; j<=i; j++){
//         cout << C <<" ";
//         C =C * (i-j)/j;

//     }
//     cout << endl;
// }


// butterfly pattern 


// for(int i =0; i<2*n; i++){
//     int cond = i<n ? i: n +(n-i-1);
//     int space_count = i<n ? 2*(n-cond-1) :i - cond -1;
//     for(int j = 0; j<2*n; j++){
//         if(j<=cond){
//             cout << "*";
//         }
//         else if(space_count > 0){
//             cout<< " ";
//             space_count--;

//         }
//         else{
//             cout << "*";
//         }
//     }
//     cout << endl;
// }

// }



// function tondisplay area of circle 

// float circle_area(float radius){
//     float area =3.14 * radius* radius;
//     return area;
// }
// int main(){
//     float radius;
//     cin>>radius;

//     float area = circle_area(radius);
//     cout << "Area of circle of is :" << area << endl;

// }


// function to input to even/odd 
// bool checkEven(int n){
//     if((n & 1) == 0){
//         return true ;
//     }
//     else {
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     bool isEven =checkEven(n);

//     if(isEven){
//         cout<< n << "is Even Number .\n";
//     }
//     else{
//         cout << n << "is odd number . \n";
//     }
// }




// factroial of a no -> function ()



// long long int fact(long long n){
//     long long int fact =1;
//     for(int i = 1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     cin>>n;
//    long long int ans = fact(n);
//     cout<< "Factorial of:" <<n <<" "<< "is:" << ans<< endl;
// }



// check given no is prime or not  one ot n all prime
// bool checkPrime(int n){
//     int i =2;
//     for( i=2; i<n; i++){
//         if(n%i ==0){
//             return false;
//         }

//     }
//     return true;
// }


// int main (){
//     int n;
//     cin>>n;
    // bool isPrime =checkPrime(n);
    
    // if(isPrime){
    //     cout <<"Prime\n";
    // }
    // else{
    //     cout << "not a prime\n";
    // }

//     for(int i = 2; i<=n; i++){
//         bool isiPrime = checkPrime(i);
//         if(isiPrime){
//             cout << i << " ";
//         }
//     }
// }




// km to miles 


// 1km = 0.62137
// float KMtoMiles(float km){
//     float _1kmMIles = 0.62137;
//     float miles = km * _1kmMIles;
//     return miles;
// }


// int main(){
//     float km;
//     cout << "Tell me Km" << endl;
//     cin>>km;


//     float miles = KMtoMiles(km);
//     cout<< "Miles = "<< miles<<endl;
// }

//  leet code 7 reverise integer 



// int reverse(int x, int rem){
//     bool isNeg =false;

//     if(INT_MIN){
//         return 0;
//     }
//     if(x<0){
//         isNeg =true;
//         x =-x;
//     }
//     int ans =0;
//      rem=0;
//     while(x>0){
//         int digit = x%10;
//         ans = ans*10 +digit;
//         x =x/10;
//     }
//     return isNeg ? -ans:ans;
// }



// set kth bit 


// convert to tempature 

// double k = celsius + 273.15;
// double f = celsius  * 2.80 + 32.00;

// vector<double> ;
// v.push_back(k);
// v.push_back(f);
// return v;









// degug Excise 

// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	int area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }


int countSetBit(int n){
    int count =0;
    while(n>0){
        int bit = n%2;
        if(bit ==1)
        count++;
        n = n/2;

    }
    return count;
}

 int main (){
    int n ; cin>>n;
    int setBitCount = countSetBit(n);
    cout<< setBitCount << endl;
 }