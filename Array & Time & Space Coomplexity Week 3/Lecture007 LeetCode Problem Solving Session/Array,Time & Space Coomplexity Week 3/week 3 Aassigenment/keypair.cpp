// debug excerise 

// 1  Debug the code. Sum of array.
// #include<iostream>

// using namespace std;

// int main(){
//     int n;
//     int sum =0;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }

//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }




// 2 Debug the code. Linear Search.

// #include<iostream>

// using namespace std;

// void linearSearch(int arr[], int n,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return i;
//         }
//     }
//     return -1;
// }



void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j] = i+2;
        arr[j] = i+1;
        j++;
    }
}