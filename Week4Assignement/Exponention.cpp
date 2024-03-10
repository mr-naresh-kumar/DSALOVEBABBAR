// binary search 

// exponentionlsearch, doubling search, galloping search, stranile

#include<iostream>
using namespace std;

int bs(int arr[], int start, int end, int x){
    while(start<=end){
        int mid = (start+end)/2;
        if (arr[mid]==x){
return mid;

        }
        else if(x>arr[mid]){
            start = mid+1;


        }
        else{
            end =mid-1;
        }
 mid = (start+end)/2;
    }
    return -1;

}



int expSearch(int arr[], int n, int x){
    if(arr[0] == x)
    return 0;


    int i =1;
    while(i<n && arr[i] <=x){
        i=i*2 ; // i*=2 // i = i<<1;
    }
    return bs(arr, i/2, min(i, n-1), x);
}

int main (){
    int arr[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(arr) /sizeof(int);
    int x = 13;

    int ans = expSearch(arr,n,x);

    cout<<ans << endl;
    return 0;

    
}