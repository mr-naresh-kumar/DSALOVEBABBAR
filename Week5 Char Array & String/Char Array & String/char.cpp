#include<iostream>
#include<string.h>
using namespace std;


// int findLenght(char ch[], int size){


    // using while loop 

    // int len = 0;
    //  int  index =0;
    //  while(ch[index]!= '\0'){
    //     len++;
    //     index++;
    //  }
    //  return len;
//     int length  =0;

//     for(int  i =0; i<size; i++){
//         if(ch[i] == '\0'){
//             // rukan h 
//             break;
//         }
//         else{
//             length++;
//         }
//     }

//     return length;
// }

// void reverseString(char ch[],  int n){
//     int  i =0 ;
//     int  j = n-1;
    
//     while (i<=j){
//         swap(ch[i], ch[j]);
//         i++;
//         j--;
//     }

// }

// void convertToUpperCase(char ch[], int n){

//     int index = 0;

//     while(ch[index] != '\0'){
//         char currCharacter = ch[index];
//         // check if lower case then convert to uppercase
//   if(currCharacter >= 'a' &&  currCharacter <='z'){
//     ch[index] =currCharacter -'a' + 'A';
//   }
// index++;


//     }


// }








// void replacezCharacter(char ch[], int n){
//     int index  =0 ;

//     while(ch[index] != '\0'){
//         // char curr = ch[index];

//         if(ch[index] == '@'){
//             // insert space 

//             ch[index] = ' ';
//         }
//         index++;
//     }
// }


// bool checkPalindrome(char ch[], int n){
//     // n -> lenght of string 
//     int i = 0; 
//     int j =n-1;

//     while(i <= j){
//         if(ch[i] == ch[j]){
//             i++;
//             j--;
//         }
//         else{
//             // character are not matching 
//             return false;
//         }
//     }
//     // agar yaha pahuch gye ho 
//     //  iska  matbl sare char match kar gye h 
//     //  iska mtlb palindrome hai 
//     //  iska mtlb return true kado

// return true;

// }
// int main (){



// char ch[100];

// // cin>> ch;
// cin.getline(ch, 100);

// // Ta se puchna h 
// int len =(ch, 100);
// bool isPalindrome = checkPalindrome(len);
// if(isPalindrome){
//     cout<<"Valid palindrome" << endl;
// }

// else{
//     cout<< "IsValid palindrome" << endl;
// }

// cout << "before: " << ch << endl;
// convertToUpperCase(ch, 100);
// replacezCharacter(ch, 100);
// cout<< "after" << ch << endl;

// cout << " Before:"<< ch  << endl;


// int len = findLenght(ch, 100);

//   reverseString(ch, len); 

// cout<<  "After:" << ch << endl;


// int len = findLenght(ch, 100);
// cout << " length of string is : "<< len << endl;
// cout << "return to length " <<  strlen(ch) << endl;















int main(){
    //  creation 
    char ch[100];
    // input 

    cin >> ch;
    cin.getline(ch, 99);

    // print
    cout << "printing the value of ch: " << ch << endl ;


// index of no 

for( int i = 0; i<10; i++){
    cout << "At Index:" << i << ch[i] << endl;
}



    int arr[10];

//  this is a null value
    char temp =ch[10];
    int value  = (int)temp;
    cout<< " printing integer value of " << value << endl;
    // input 



    for(int i = 0; i<10; i++ ){
        cin >> arr[i];
    }

    return 0;
}