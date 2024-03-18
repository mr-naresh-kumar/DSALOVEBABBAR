#include<iostream>
#include<vector>

using namespace std;

void printSubarray_util(vector<int> &nums,int start, int end){
    // base case 
    if(end ==nums.size()){
        return;
    }
    // one case sol 
    for(int i =start; i<=end; i++){
        cout<< nums[i] << " ";
    

    }
    cout << endl;

    // RE
    printSubarray_util(nums, start, end+1);
}

void printSubarray(vector<int> &nums){
for(int start =0; start<nums.size(); start++){
    int end = start;
    printSubarray_util(nums, start, end);

}
}

int main(){
    vector<int> nums{1,2,3,4,5,};
    printSubarray(nums);
    return 0;
}













bool isPowerOfFour(int n) {
        if(n<=1){
           return false;
        }
        if(n%4!=0){
           return false;
        }
       
        return isPowerOfFour(n/4);
    }