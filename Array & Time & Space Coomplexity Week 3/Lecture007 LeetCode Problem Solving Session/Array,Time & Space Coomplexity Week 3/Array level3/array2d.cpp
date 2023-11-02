#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;



void printArray(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j] << " " ;
        }
        cout<< endl;
    }
}

void printArray1(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<< arr[j][i] << " " ;
        }
        cout<< endl;
    }
}

int findMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];

            }
        }
    }
    return maxAns;
}

void rowWiseSum(int arr[][4], int row, int col){
    for(int i =0; i<row; i++)
    {
        int sum =0;
        for(int j =0; j<col; j++){
        sum = sum + arr[i][j];
    }
     cout<< sum << endl;

    }

  
}

void  transpose(int arr[][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j =i; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }

    }
}
int main(){

//  create a 20 array 

// int arr[3][3];


// initialse 

// int arr[3][4] = {
// {1,2,3,4},
// {5,6,7,8},
// {9,20,1,11},

// };

// int brr[] = {1,2,3,4};

// int crr[][4] = {
//    {1,2,3,4},
// {5,6,7,8},
// {9,20,1,11},
// };

// int drr[3][] = {
//    {1,2,3,4},
// {5,6,7,8},
// {9,20,1,11},
// };


// int arr[3][4] = {
// {1,2,3,4},
// {5,6,7,8},
// {9,20,1,11},

// };
// int row =3;
// int col = 4;
// printArray(arr, row, col);
// printArray1(arr, row, col);

// int arr[3][3];
// int row =3;
// int col =3;

// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){

//         cout<< "Enter the input for row index"<< i<<"column index " <<j << endl;
//         cin>> arr[i][j];
//     }

// }

// Find max array 


// int arr[4][4] = {
// {1,2,3,4},
// {5,6,7,8},
// {9,20,1,11},
// {12, 24,46,89},

// };
// int row =4;
// int col = 4;
// cout<< endl<< "Printing before transpose" << endl;
//   printArray(arr, row, col);

//   cout<< endl<< "Doing transpose"<< endl;
//  transpose(arr, row,col);

//  cout << endl << "Printing after transpose"<< endl;
//  printArray(arr, row, col);


// rowWiseSum(arr,row,col);
// cout<< "Printing the max No. :" << findMax(arr, row, col) << endl;


// vector 

// int arr[5];
// vector<int>v(5);
// cout<< "size of vector" <<v.size();

// cout<<endl << "Printing vector "  << endl;

// for(int i=0;i<v.size(); i++){
//     cout<< v[i] << " " ;


// }
// cout<< endl;

// vector<int>arr;

// arr.push_back(4);
// arr.push_back(12);
// arr.push_back(34);
// arr.push_back(32);
// arr.push_back(42);

// cout << arr.size() << endl;


// cout<< arr.empty() << endl;

// 2 D vector 

// vector<vector<int> > arr(5, vector<int>(10,0));

// // row size -> arr.size

// for(int i =0; i<arr.size(); i++){
//     for(int j =0; j< arr[i].size(); j++){
//         cout<< arr[i][j] << " ";
//     }
//     cout<< endl;

// }

// jaked array of vector 

vector<vector<int>> brr;

vector<int> vec1(10,0);
vector<int> vec2(5,1);
vector<int> vec3(7,0);
vector<int> vec4(18,1);
vector<int> vec5(20,0);

brr.push_back(vec1);
brr.push_back(vec2);
brr.push_back(vec3);
brr.push_back(vec4);
brr.push_back(vec5);

for(int i =0; i<brr.size(); i++){
    for(int j =0; j< brr[i].size(); j++){
        cout<< brr[i][j] << " ";
    }
    cout<< endl;

}






return 0;
}