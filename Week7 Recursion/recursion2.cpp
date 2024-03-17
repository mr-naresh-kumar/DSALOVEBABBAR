#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void printArray(int *arr, int size, int index)
{
    // base case

    if (index >= size)
    {
        return;
    }
    // processiing

    cout << arr[index] << " ";

    // recursion call
    printArray(arr, size, index + 1);
}

bool searchArray(int arr[], int size, int target, int index)
{
    // base case

    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    // recursive call
    bool aageKaAns = searchArray(arr, size, target, index + 1);
    return aageKaAns;
}
//  find min number of array
// void findMin(int arr[], int size, int index, int &mini)
// {
//     if (index >= size)
//     {
//         return;
//     }
//     // processing
//     mini = min(mini, arr[index]);

//     //  recursinve call
//     findMin(arr, size, index + 1, mini);
// };


void findMax(int arr[], int size, int index, int &maxx)
{
    if (index >= size)
    {
        return;
    }
    // processing
    maxx = max(maxx, arr[index]);

    //  recursinve call
    findMax(arr, size, index + 1, maxx);
}

//  sove function store even   unmbers  in arrya  into verctor
void solve(int arr[], int size, int index, vector<int> &ans)
{
    if (index >= size)
    {
        return;
    }
    // processing
    if (arr[index] % 2 == 0)
    {
        // even
        ans.push_back(arr[index]);
    }

    // recursive call

    solve(arr, size, index + 1, ans);
}


void numberDouble(int arr[],int size, int index,  vector<int> &ans){
    if(index >= size)
    {
        return;
    }
    // if(arr[index] == 0){
    //     ans.push_back(arr[index]);
    // }
    arr[index] = 2*arr[index];
    ans.push_back(arr[index]);
    // recursive call  
    numberDouble(arr, size, index+1, ans);
}


void ocuranceAll(int arr[], int index, int size, int target, vector<int> &ap){
    if(index >= size){
        return;
    }
    // processing 
    if(arr[index] == target){
    ap.push_back(arr[index]);
    }

    ocuranceAll(arr, size, index +1, target, ap);


}

 void printDigits(int num, vector<int>&ans){
    // base case 
    if(num == 0){
        return;
    }
    // processing 
    int digit = num %10;
    // uodated num 
    num = num/10;
    // recurisive call 
    printDigits(num, ans);

    // processing  
    // cout<< digit << endl;
    ans.push_back(digit);
 }
int main()
{

int num = 4217;

vector<int> ans;
printDigits(num, ans);
for(int num:ans){
    cout << num <<endl;
}



    // int arr[] = {10, 20, 10, 40, 10};
    // int size = 5;
    // int index = 0;
    // int target =10;

    // std::vector <int> ap;
    // ocuranceAll(arr, size, target, ap)

    // printing vector 
    // for(int num:ap){
    //     cout<< num <<  " ";
    // }
    
    // vector <int> ans;
    // numberDouble(arr, size, index, ans);

    //  printing vector 
    // for(int num:ans){
    //     cout<< num <<  " ";
    // }

    // solve(arr, size, index );
    
    
    // printing vector 
    // for(int num:ans){
    //     cout <<  num << " ";
    // };

    // vector<int> ans;
    // solve(arr, size, index, ans);

    // // printing vector
    //  for(int num: ans) {
    //     cout<< num <<  " ";
    //  };

    // int maxx = INT_MIN;
    // findMax(arr, size, index, maxx);

    // cout << "Maxmum number  in array:" << maxx << endl;

    // int target =50;
    // cout<< "Taget found or not :" <<  searchArray(arr, size, target, index)<< endl;

    // printArray(arr, size, index);

    return 0;
}