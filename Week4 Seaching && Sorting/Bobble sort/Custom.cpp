#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


// void print(vector<int> &v){
//     for(int i = 0; i<v.size(); i++){
//         cout<<v[i] << " ";
//     }
//         cout << endl;
// } 

 
    // Custom comparator 

void printvv(vector<vector<int>> &v){
    for(int i = 0; i<v.size(); i++){
       vector<int>&temp = v[i];
       int a = temp[0];
       int b = temp[1];
       cout<<  a << " " << b << endl;
    }
        cout << endl;
}


bool mycomp(vector<int>&a, vector<int>&b){
    return a[1] < b[1];
}
// bool mycomp(int&a, int&b ){
//     return a>b; desecring order
// }
int main(){
    // vector<int> v = {44, 55, 22, 11, 33};
    //  //sort(v.begin(), v.end()); // increase order sort
    //  sort(v.begin(), v.end(), mycomp);

    // print(v);

vector<vector<int>>v;

int n;
cout <<  "Enter size :\n";
cin >> n;
for(int i =0; i<n; i++){
    int a, b;
    cout<< "Enter a, b" << endl;
    cin>> a>>b;
    vector<int>temp;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp);
    

}
cout << " Here are the value";
printvv(v);
cout << "sorted by 1th index" << endl;
sort(v.begin(), v.end(), mycomp);
printvv(v);

    return 0;
}

