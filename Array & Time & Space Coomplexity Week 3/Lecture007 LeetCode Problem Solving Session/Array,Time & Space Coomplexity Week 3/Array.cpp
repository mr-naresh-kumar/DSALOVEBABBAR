#include<iostream>
#include<limits.h>

using namespace std;

// void printArraay(int arr[], int size){
//     for(int i =0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout<< endl;

// }
// present -> true 
// absent -> false


// linear search 

// bool linearSearch( int arr[], int size, int target){
//     for(int i =0; i<size; i++){
//         if(arr[i] == target){

//             // found 
//             return true;
//         }
//     }

    // not found 
//     return false;
// }

// void countZeroOne(int arr[], int size){
//     int zeroCount = 0;
//     int oneCount = 0;
//     for(int i=0; i<size; i++){
//         if(arr[i] == 0){
//             zeroCount++;
//         }
//         if(arr[i]==1 ){
//             oneCount++;
//         }
//     }
//     cout<< "ZeroCount: " << zeroCount<< endl;
//      cout<< "OneCount: " << oneCount<< endl;
     

// }
// int findMinArray(int arr[], int size){
//     // ans store val
//     int minAns = INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]<minAns){
//             minAns = arr[i];
//         }
//     }
//     return minAns; 

// }
 
//  void reverseArray(int arr[], int size){
//     int left = 0;
//     int right = size-1;
//     while(left<=right){
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
//     // printing the array 
//     for(int i = 0; i<size; i++){
//         cout<< arr[i] << " ";
//     }
//  }

void extremePrint(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left<=right){
        if(left ==right){
            cout<< arr[left] << endl;;
        }
        else{
        cout<< arr[left]<<endl;
        cout<< arr[right]<<endl;

        }
        left++;
        right--;
    }
}


int main(){
// reverse an array 
int arr[5] = {10,2,30,40,50};
int size =5;
// reverseArray(arr, size);

extremePrint(arr,size);
// min no of array 


// int arr[] ={10,8,31,4,3,-51,51};
// int size =7;

// int minimum  = findMinArray(arr,size);
// cout << "Minimum number is:" << minimum << endl;

// -2 to the power 31 
// cout << INT_MIN << endl;
// // 2 to the power 31 -1 
// cout << INT_MAX << endl;


    // int arr[] ={0,0,0,1,1,0,1,0,1,0,1,1,1,1,0,};
    // // zero ->7
    // // one -> 8
    // int size =15;
    // countZeroOne(arr, size);


    // int arr[5] ={2,4,6,8,10};
    // int size = 5;
    // // printArraay(arr, size);
    // int target = 10; 
    // bool ans = linearSearch(arr, size, target);

    // if(ans == 1){
    //     cout<< "Target found " << endl;
    // }
    // else{
    //     cout << "Target not found" << endl;
    // }
    // array creation 

    // int arr[101];
    // char ch[102];
    // bool flags[233];
    // long num[900];
    // short snum[1000];
    // cout << "Array creation successfully" << endl;

    // int arr[100];
    // int a =5 ;
        // cout << "Address of a :" <<&a << endl;
        // cout << "Size of a:" <<sizeof(a) << endl;

    //     int arr[10];
    // cout << "Address of arr :" <<arr<< endl;


    // int arr[]= {2,3,4 ,45,5};

    // int  brr[5] = {3,4,5,6,6,};
    // int crr[5] = {2,3};

    // error 
    // int drr[2] ={2,3,4,45,4,4};


    // int arr[5] = {4,4,6,5,1};

    // int n  = 5;
    // for(int i =0; i<n; i++){
    //     cout <<arr[i] << endl;
    // }
    // cout << arr [0] << endl;
    //   cout << arr [1] << endl;
    //     cout << arr [2] << endl;
    //       cout << arr [3] << endl;
    //         cout << arr [4] << endl;

// taking input in array

// int arr[5];
// int n  = 5 ;
// for(int i= 0 ; i<n; i++){
//     cout << " Enter the vallue of index"<< endl;
//     cin>> arr[i] ;
//     }

//     // printing the array  
//     cout << "print the array" << endl;

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }


// creating array 
// int arr[10];

// // input in array 
// int n = 10;
// for(int i =0; i<n;i++){
// cin >> arr[i];

// }
// cout << "printing after taking input" << endl;
// // print 
// for(int i=0; i<n; i++){
//     cout << arr[i] << " " << endl;
// }
// // double in array 
// // cout << "Double :" << endl;
// for(int i =0; i<n; i++ ){
//     arr[i] = 2*arr[i];
// }

// // print  

// cout<< "Printing after taking double" << endl;
// for(int i =0; i<n; i++){
//     cout << arr[i] << "  ";
// }


// int arr[5];
// // intput 
// int n = 5;
// cout << "Enter the input";
// for(int i = 0; i < n; i++){
//     cin>> arr[i];
// }

// int sum =0 ;
// // sum of the array 
// for(int i = 0; i<n; i++){
//     sum = sum+arr[i];

// }
// // print sum  

// cout  << "printing the sum " << sum <<endl;



// int arr[5] = {2, 4, 6, 8,10};
// int n  =5;

// bool flag = 0;
// // 0 -> not found 
// // 1 -> found 

// int target = 4;
// for(int i=0; i<n; i++){
//     if(arr[i] ==target){
//         // found
//         flag =1;
//         break;
//     }
// }
// if(flag ==1){
//     cout<< "target found";
// }
// else{
//     cout << "target not found " << endl;
// }



    return 0;
}