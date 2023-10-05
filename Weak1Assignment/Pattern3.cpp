// //    hollow full pyramid 

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//      cin>> n;
//       for(int i=0; i<n; i++){
//         int k=0;
//         for(int j=0; j<((2*n)-1); j++){
//             if(j<n-i-1){
//                 cout<<" ";

//             }
//             else if(k < 2 * i +1){
//                 cout << "*";
//                 k++;

//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout << endl;
//       }
// }

// half pyramid 


//    hollow full pyramid 

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//      cin>> n;
//       for(int i=0; i<n; i++){
//         int k=0;
//         for(int j=0; j<((2*n)-1); j++){
//             if(j<n-i-1){
//                 cout<<" ";

//             }
//             else if(k < 2 * i +1){
//                 if(k==0 || k==2*i || i== n-1 )
//                 cout << "*";
//                 else
//                 cout << " ";
//                 k++;

//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout << endl;
//       }
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}