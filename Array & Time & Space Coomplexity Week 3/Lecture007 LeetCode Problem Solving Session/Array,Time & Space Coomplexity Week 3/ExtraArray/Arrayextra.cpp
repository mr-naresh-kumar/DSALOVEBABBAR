#include<iostream>

using namespace std;

void shiftNegativeOneSide(int arr[], int n){

    int j = 0;
    
    // j -> memory block  -> jaha pr main  negative number store kar skta hu 

    for( int index=0; index<n; index++){
        // index -> entire array ko traverse karne k liye 
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

 int main(){

    int arr[] = {23,7, 12, 10, 11, 40, 60};
    int n = 7;
    shiftNegativeOneSide(arr, n);

    // print  

    cout<< "Printing the array" << endl;

    for(int i =0; i<n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
 }