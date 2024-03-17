#include<iostream> 
#include<vector>
using namespace std;




// sorted array 
bool checkSorted(int arr[], int size, int index){

    // base case
    if(index>= size){
        return true;

    }
    // processing 
    if(arr[index] >arr[index-1]){
        // agge check karna padega 
        // ab recursion smbhalega
        bool aageKaAns  = checkSorted(arr, size, index+1);
        return aageKaAns;


    }
    else{
        return false;
    }

}

// binary search 

int binSearch(int arr[], int s, int e, int target){
    // base case 
if(s>e){
    // element not found 
    return -1;
}
// processing one case kud solve karo 

int mid = s+(e-s)/2;
if(arr[mid] == target){
    return mid;
}
// baaki recursion sambhal lega 

if(arr[mid] < target){

    // right , jao 
    // s = mid+1;
    return  binSearch(arr, mid+1, e, target);
    

}
else{
    // left m jao 

    // e = mid -1;
    return binSearch(arr, s, mid-1, target);


}
}


void findSubsequences(string str, string output, int index, vector<string>& ans){
    // base case 
    if(index >= str.length()){

        // ans jjo h , output stirng me buildho chuka h 

        // cout << "->" << output << endl;
        ans.push_back(output);
        return;
    }
    char ch  = str[index];

    // two way 
    // include 

    output.push_back(ch);
    findSubsequences(str, output, index+1, ans);

    // exclude 

    output.pop_back();
    findSubsequences(str, output, index+1, ans);

    // one  way 
    // // exclude 
    // findSubsequences(str, output, index+1);

    // // include 
    // // output string me character ko include kardo 
    // output.push_back(ch);
    // findSubsequences(str, output, index+1);

}

int main() {

    string str = "abc";
    string output = "";
    int index = 0;
    vector<string>ans;
    findSubsequences(str, output, index, ans );
    cout<< "Printing the subsequence in vector: " << endl;
    

    for(string s: ans){
        cout<< "->"  << s << endl;
    }
//     int arr[] = {10, 20,30, 50, 60, 70 };
//     int size = 6;
//     int index =1;

//     bool isSorted = checkSorted(arr, size, index);
    
//    if(isSorted){
//     cout << "Array is sorted" << endl;
//    }

//    else{
//     cout<< "Array is not sorted " << endl;
//    }



// int arr[] = {10,20,30,40,50,60,70,80};
// int size = 8;
// int start = 0;
// int end = size-1;

// int target = 10;

// int  foundIndex = binSearch(arr, start, end, target );

// if(foundIndex != -1){
//     cout<<"Target found at: " << foundIndex << endl;

// }
// else{
//     cout<< "Target not found"<< endl;
// }





    return 0;
}