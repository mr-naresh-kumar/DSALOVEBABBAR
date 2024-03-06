#include<iostream>
using namespace std;

// divisor and dividend 

// int getQuotient(int divisor, int dividend){
//     int s =0;
    
//     int e = dividend;
// int ans =-1;
// int mid = s + (e-s)/2;

// while(s <= e){

//     cout << "s: " <<s <<" e:" <<e  << endl;
//     if(mid*divisor == dividend){
//         return mid;

//     }
//     if(mid*divisor < dividend){
//         // ans store 
//         ans = mid;
//         // right m jao 
//         s =mid+1;
//     }
//     else{
//         // left m jao 
//         e =mid-1;

//     }
//     mid = s+ (e-s)/2;


// }
// return ans;
// }

// int main (){
// int divisor = 7;
//     int dividend =28; 
//     int ans = getQuotient(divisor, dividend);
//     cout<< "Final Ans is "<< ans << endl;
// }
 



    // near sorted array 



// int  searchNearlySorted(int arr[], int n, int target){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
// cout << "s: " <<s <<" e:" <<e  << endl;
//         if( mid-1 >= 0 && arr[mid-1] == target ){
//             return mid-1;
//         }
//         if(arr[mid] == target)
//         return mid;

//         if( mid+1 < n && arr[mid+1] == target)
//             return mid+1;

//             if (target > arr[mid]){
//             //    right 
//             s= mid+2; 
//             }
//             else{
//                 // left
//                 e = mid -2;

//             }
//             mid = s+(e-s)/2;

        
//     }
//         return -1;
// }



// int main(){
// //   



//       int arr[]={20,10,30, 50,40,70,60};
//       int n =7;
//       int target = 60;
//       int targetIndex = searchNearlySorted(arr, n, target);

//       if (targetIndex == -1){
//         cout << "Element not found" << endl;

//       }
//       else{
//         cout << " Element found at Index  "  << targetIndex<< endl;
//       }

// }


// find  odd occaring number of array  




// question 

int findOddOccuringElement(int arr[], int n){
    int s= 0; 
    int e= n-1;
    int mid = s+(e-s)/2;


    while(s<=e){

        // single element 
        if(s==e){
            return s;
        }
        // mid heck -> even or odd 
        if (mid & 1 ){ //mid'&-> true odd number
        if ( mid-1>=0 && arr[mid-1] == arr[mid]){
        // right m jauga 
        s = mid +1;
        }
        // left m jao 
        else{
            e = mid -1;

        }
    }

  else {

    // even  of case 

    if (mid+1 < n && arr[mid] == arr[mid+1]){
        // right m jao 
        s = mid+2;
    }
    else{
        // ya too m right part par khda hu ya too m ans ke uper khda hu 
        // that's why e = mid karta hu 
        // kyuki e= mid-1; se ans lost ho skta h 
        e =mid; 
    }
}

  mid = s+(e-s)/2;
    }
    return -1;
}





int main (){

int arr[] ={7,10,10,2,2,3,3,2,5,5,6,6,7,7};
int n =13;
int ansIndex = findOddOccuringElement(arr, n );
cout << "Final answer is :" << arr[ansIndex] << endl;


}