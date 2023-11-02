#include<iostream>
 using namespace  std;

// int getUnique(int arr[], int n){
//     int ans =0;
// for(int i=0; i<n; i++){
//     ans = ans^arr[i];
// }
// return ans;
// }

//  int main(){
//     int arr[]= {2,10,11,10,2,13,15,13,15};
//     int n =9;
//     int finalAns = getUnique(arr, n);
//     cout<< "Final answer is:"<< finalAns << endl;
//  }

//  print all pair




// int main(){
//              int arr[] = {10, 20,30};
//              int n =3;
//              for(int i =0; i<n/2; i++){
//     for(int j=i; j<n; j++){
//     cout<< arr[i] << " , "<< arr[j] << endl;
// //   ans = arr[i] << ", " << arr[j]
//     }
// }


// }


// triple x value of pair 
// int main(){
//     int arr[] = {1,2,3,4 };
//     int n = 5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             for(int k=0; k<n; k++){
//                 cout<<arr[i] << " " << arr[j] <<" "<<arr[k] <<endl;
//             }
//         }
//     }
// }

// void sortZero(int arr[], int n){
//     int zeroCount = 0;
//     int OneCount = 0;

//     // step a count 0 and 1

//     for(int i =0; i<n; i++){
//         if(arr[i] == 0)
//         zeroCount++;
//         if(arr[i] == 1)
//         OneCount++;
//     }
    // step b place all zeroes first 
    // int i;
    // for( i =0; i<zeroCount; i++){
    //     arr[i] =0;
    // }
    // for(int j = i; j<n; j++){
    //     arr[j] =1;
    // }

    // easy way 
//     int index = 0;
//     while(zeroCount--){
//         arr[index] =0 ;
//         index++;
//     }
//     while (OneCount--)
//     {
//         arr[index] =1;
//         index++;
//     }
    
// }


// int main(){

// int arr[] = {0,1,0,1,1,0,0,0,0};
// int n  = 9;

// sortZero(arr,n);
// // printing the array 
// for(int i =0;  i<n; i++){
//     cout<< arr[i] << endl;
// }
// }

void shiftArray(int arr[], int n){
    // step no1 
    int temp = arr[n-1];
    // step 2
    for(int i = n-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    // step 3
    arr[0] = temp;
}

int main (){
    int arr[] = {10,20,30,40,50,60};
    int n =6;
    shiftArray(arr,n);


    // printy
    for(int i=0;i<n; i++){
        cout << arr[i] << " ";
    }
}



