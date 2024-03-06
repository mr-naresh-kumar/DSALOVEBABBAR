// find povit element  array 

//  leet code  question
#include<iostream>
#include<vector>
using namespace std;

// int binarySearch(vector<int> arr, int target , int start , int end  ){
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




// int findPivot(vector<int> arr){
//     int s =0;
//     int e =arr.size()-1;
//     int mid =s+(e-s)/2;

//     while(s<=e){
//         if (arr[mid] > arr[mid+1])
//         return mid;
//         if (arr[mid-1]>arr[mid])
//         return mid-1;


//         if (arr[s]>= arr[mid])
//         e =mid-1;
//         else 
//         s=mid+1;
//         mid =s+(e-s)/2;
//     }
//         return -1;

// }

// int main(){
//     vector<int> arr{3,4,5,6,7,1,2};
//     int ans = findPivot(arr);
//     cout<< "Pivot Element is " <<  arr[ans] <<endl;
// }
//   leet code  for code 


// int search (vector<int>&nums,int target){
//     int pivotIndex =findPivot(nums);

// if(target>= nums[0] && target <= nums[pivot]){
    // search in array a
    // int ans binarySearch(nums, target,0, pivot){
        // return ans;
    // }
// if (target >= nums [pivot+1] && taget <= nums[nums.size()-1]){

// int ans = binarySearch(nums,target, pivot+1 nums.size()-1);
// return ans;
// }
// return -1;
// }
// }


int findPivotIndex(vector<int>&  arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        // Corener case 
        if(s==e){
            // single element  
            return s;  
        }
        // if(arr[mid] > arr[mid+1] )
        // return mid;
        if(arr[mid] > arr[mid+1])
        return mid;
        else if (arr[mid]< arr[mid-1])
         return mid-1; 
         else if (arr[s] > arr[mid])
             e = mid -1;
            else
            e =mid + 1;
            mid  = s + (e-s)/2;
         

    }
          return -1;

}

 int main(){
    vector<int> v;
    // v.push_back(12);
    // v.push_back(14);
    // v.push_back(16);
    // v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);


     int pivotIndex = findPivotIndex(v);
     cout << "Pivot Index is: " << pivotIndex << endl;
     return 0;
 }













// leet code 33 solution 



// class Solution {
// public:

// int findPivotIndex(vector<int>& arr){
//     int n = arr.size();
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s <=  e){
//         // Corener case 
//         if(s==e){
//             // single element  
//             return s;  
//         }
//         if(mid+1 >n && arr[mid] > arr[mid+1] )
//         return mid;
//         else if ( mid-1 >= 0 && arr[mid]< arr[mid-1])
//          return mid-1; 
//          else if (arr[s] > arr[mid])
//              e = mid -1;
//             else
//             e =mid + 1;

//             mid  =s + (e-s)/2;
         

//     }
//           return -1;

// }

// int binarySearch(vector<int> & arr, int s, int e,  int target){
//     int mid = s +(e-s)/2;
//     while(s <=e ){
//         if(arr[mid] == target){
//             return mid;
//         }
//         if (target > arr[mid]){
//             s = mid+1;
//         }
//         else{
//             e = mid-1;

//         }
//          mid  =s + (e-s)/2;
//     }
//     return -1;

// }


//     int search(vector<int>& nums, int target) {

//     int pivotIndex = findPivotIndex(nums);
//     int n = nums.size();
//     int ans = -1;

//     //  search in a 

//     if (target >= nums[0] && target <= nums[pivotIndex]){
//          ans = binarySearch(nums, 0, pivotIndex, target);
//     }
//         else{
//             ans = binarySearch(nums, pivotIndex+1, n-1, target);  

//         }
//         return ans;
//     }
// };