// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(int arr[], int n, int target){
//     int start =0;
//     int end = n-1;
//     // there is some flow in blew line
// int mid = (start+end)/2;

// while (start<=end){
//     // found 
//     if(arr[mid] == target){
//         // return index of found element
//         return mid;
//     }
//     else if (target>arr[mid]){
//         // right me jaoo 
//         start =mid +1;
//     }
//     else if (target<arr[mid]){
//         // left m jao 
//         end = mid-1;
//     }
//     // ye galti hm baar baar karte h 
//     // mid update  
//     mid = (start +end)/2;
// }

// // agar uhah tk pohoche ho iska matlb element nahi mila tumhe
// return -1;

// }

// int findFirstOccurence(int arr[], int n, int target){


//     int s=0;
//     int e=n-1;
//     // this integer is over flow -ve 
//     int mid= (s+e)/2; 
//     // ye over flow nhi karayege 
//     int mid =s+(e-s)/2;
//     int mid= s/2 + e/2;
//     // initializer to ans 
//     int ans = -1;

//     while (s<=e){
//         if (arr[mid] ==target){
//             // ans stored 
//             ans =mid;
//             // left me jao 
//             e=mid-1;
//         }
//         else if(target>arr[mid]){
//             // right m jao 
//             s= mid +1;

//         }
//         else if(target <arr[mid]){
//             // left m jao 
//             e=mid -1;
//         }

//         // galti yha karte h
//         mid= (s+e)/2; 
//     }
//     return ans;
// }


// int main(){

//     int arr[] = {30,30,30,30,30,30, 70, 80,90};
//     int target =30;
//     int n = 9;



// int ansIndex =findFirstOccurence(arr,n, target);


// //  int ansIndex = binarySearch(arr,n, target);
//  if (ansIndex == -1){
//     cout<< "Element not found" << endl;
//  }
//  else{
//     cout<< "Element found at Index:" << ansIndex << endl;
//  }


//         return 0;





//         int findLastOccurence(int arr[], int n, int target){


//     int s=0;
//     int e=n-1;
//     // this integer is over flow -ve 
//     int mid= (s+e)/2; 
//     // ye over flow nhi karayege 
//     // int mid =s+(e-s)/2;
//     // int mid= s/2 + e/2;
//     // initializer to ans 

//     int ans = -1;

//     while (s<=e){
//         if (arr[mid] ==target){
//             // ans stored 
//             ans =mid;
//             // right me jao 
//             s=mid+1;
//         }
//         else if(target>arr[mid]){
//             // right m jao 
//             s= mid +1;

//         }
//         else if(target <arr[mid]){
//             // left m jao 
//             e=mid -1;
//         }

//         // galti yha karte h
//         mid= (s+e)/2; 
//     }
//     return ans;
// }


// int findMissingElement (int arr[], int n ){
//     int s =0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     int ans = -1;

//     while (s<=e){
//         int diff = arr[mid]-mid;
//         if (diff==1){
//             // right m jao 
//             s= mid+1; 
//         }
//         else{
//             // ans stored 
//             ans=mid; 
//             // left m jao 
//             e= mid-1;

//         }
//         mid=s+(e-s)/2;
//     }

//     // hw add in   modify to 
//     if(ans+1 ==0)
//     return n+1;
//     return ans+1;


// }
#include <iostream>
#include <vector>
using namespace std;

class solution{
    public:
int peakIndexInMountainArray(vector<int>& arr){
    int n = arr.size();
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;
    while (s<e){
        if(arr[mid]<arr[mid+1]){
            // a wali line me hu 
            // peak right me exit karti h 
            s= mid+1;
        }
        else {
            // ya too main B line pr hu 
            // ya toh main peak pr hu 
            e= mid;
        }
        // mid update 
        mid = s+(e-s)/2;
    }
    return s;

}
};

// int main(){

//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     // int target =30;
//     int n = 8;

// cout << "Missing element is :"<< findMissingElement(arr, n);


// int ansIndex =findLastOccurence(arr,n, target);


// //  int ansIndex = binarySearch(arr,n, target);
//  if (ansIndex == -1){
//     cout<< "Element not found" << endl;
//  }
//  else{
//     cout<< "Element found at Index:" << ansIndex << endl;
//  }


        // return 0;
    // 
// }