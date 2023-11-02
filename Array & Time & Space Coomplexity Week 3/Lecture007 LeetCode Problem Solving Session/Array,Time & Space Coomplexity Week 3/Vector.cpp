#include<iostream>
#include<vector>
using namespace std;
// void fun(int a[], int n){
//     cout<< " Array elements are "<< endl;
//     for(int i =0; i<n; i++){
//         cout << a[i] << endl;
//     }
// }


// void print(vector<int>v){
//     cout<< "Printing  as vector" << endl;
//     int size =v.size();
//     for(int i=0; i<size; i++){
//         // cout<< v[i] << " " << endl;
//         cout<< v.at(i) << endl;

//     }
// }


void print2(vector<int>v){
    cout<< "Printing  as vector" << endl;
    for(auto it:v){
      cout<< it << " " ;

    }
    cout<< endl;
}

int main(){

// static memory allocation of array 
//     int arr[5] = {1,2,3,4,5};
//     fun(arr, 5);


// dynamic memory allocation of arrya 

// int n;
// cin>>n;
// int *arr =new int[n]; // each element would be 0 or garbage
// for(int i=0; i<n; i++){
//     int data;
//     cin>> data;
//     arr[i] = data;
// }
// fun(arr, n);




// in vector donot tell size of vector 
//  just keep inserting  i will manazing the  allovcation 

// insert 
// vector<int>v;

// while(1){
//     int d; cin>>d;
//     v.push_back(d);
//     cout<< "capacity:" << v.capacity()<<"Size:" << v.size()<< endl;

// }

// insert 

// int n; cin>>n;
// for(int i =0; i<n; i++){
//     int d; 
//     cin>>d;
//     v.push_back(d);
// }
// print(v);
// for(int i =0 ; i<10; i++){
//     v.push_back(80);
// }


//  i want to clear the vector 
// v.clear();
// v.push_back(50);
// print(v);
 vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
print2(v);

// pop -> delete -> End 

// v.pop_back();
// print(v);

// vector<int>arr;
// vector<int>arr2(5,-2);
// arr2.push_back(50);
// print(arr2);

// vector<int>arr3 = {1,2,3,4,5};
// arr3.pop_back();
// print(arr3);
// vector<int>arr4{1,2,3,4,5};
// print(arr4);

// how to copy vector 
// vector<int> arr5 = {1,2,3,4,5};
// vector<int>arr6(arr5);
// print(arr6);

}