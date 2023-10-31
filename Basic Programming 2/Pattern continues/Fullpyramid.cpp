 #include<iostream>
 using namespace std;
 int main (){
    // int n;
    // cin >> n;

// hollow pyramid 



// for (int row = 0; row<n; row= row+1){
//     // space formula 
//          for (int col=0; col<n-row-1; col=col+1 ){
//             cout << " ";
//          }

//     // start 

//          for (int col=0; col<row+1; col= col+1 ){
// if(col ==0 || col==row+1-1){
//     cout << " *";
// }
// else{
//     cout << "  ";
// }


            
//          }
//          cout << '\n';
//   }  


//  full pyramid 

//   for (int row = 0; row<n; row= row+1){
//     // space formula 
//          for (int col=0; col<n-row-1; col=col+1 ){
//             cout << " ";
//          }

//     // start 

//          for (int col=0; col<row+1; col= col+1 ){
//             cout << "* ";
//          }
//          cout << '\n';
//   }  



//       //  inverted pyramid



// for (int row=0; row<n; row++){
//     // print spaces 
//     for(int col =0; col<row; col++){
//     cout << " ";
//     }
// // star  


// for (int col=0; col<n-row; col++){
//     cout<< "* ";
// }
// cout<< '\n';

// }




// hollow inverted pyramid 





// for (int row=0; row<n; row++){
//     // print spaces 
//     for(int col =0; col<row; col++){
//     cout << " ";
//     }
// // star  

// int totalCol = n-row;
// for (int col=0; col<totalCol; col++){
// // if first  or last col 

// if (col == 0 || col == totalCol-1){

//     cout<< "* ";
// }
// else{
//     cout<< "  ";
// }

// }
// cout<< '\n';

// }




// hollow half pyramid 


// for (int row = 0; row<n; row= row+1){
//     // space formula 
//          for (int col=0; col<n-row-1; col=col+1 ){
//             cout << " ";
//          }

//     // start 

//          for (int col=0; col<row+1; col= col+1 ){
// if(col ==0 || col==row+1-1){
//     cout << " *";
// }
// else{
//     cout << "  ";
// }
//  }

//  for (int row=0; row<n; row++){
//     // print spaces 
//     for(int col =0; col<row; col++){
//     cout << " ";
//     }
// // star  

// int totalCol = n-row;
// for (int col=0; col<totalCol; col++){
// // if first  or last col 

// if (col == 0 || col == totalCol-1){

//     cout<< "* ";
// }
// else{
//     cout<< "  ";
// }

// }
// cout<< '\n';

// }










// for (int row = 0; row<n; row= row+1){
//     // space formula 
//          for (int col=0; col<n-row-1; col=col+1 ){
//             cout << " ";
//          }

//     // start 

//          for (int col=0; col<row+1; col= col+1 ){
// if(col ==0 || col==row+1-1){
//     cout << " *";
// }
// else{
//     cout << "  ";
// }
//  }
//          cout << '\n';
//   }  



//  for (int row=0; row<n; row++){
//     // print spaces 
//     for(int col =0; col<row; col++){
//     cout << " ";
//     }
// // star  

// int totalCol = n-row;
// for (int col=0; col<totalCol; col++){
// // if first  or last col 

// if (col == 0 || col == totalCol-1){

//     cout<< " *";
// }
// else{
//     cout<< "  ";
// }

// }
// cout<< '\n';

// }

// philip solid Diamond 

// int num = 8; 
// int n ;
// cin>> n;


// for (int row=0; row<n; row++ ){
// //   inverted pyramid 1

// for(int col=0; col<n-row; col++){
//     cout<< "*";
// }

// // full pyramid 

// for(int col=0; col<2*row+1;col++){
//     cout<< " ";
// }

// //  inverted pyramid 2
// for(int col=0; col<n-row; col++){
//     cout<< "*";
// }

// cout<< endl;
// }


// for (int row=0; row<n; row++ ){
// //   inverted pyramid 1

// for(int col=0; col<row+1; col++){
//     cout<< "*";
// }

// // full pyramid 

// for(int col=0; col<2*n-2*row-1;col++){
//     cout<< " ";
// }

// //  inverted pyramid 2
// for(int col=0; col<row+1; col++){
//     cout<< "*";
// }

// cout<< endl;
// }
 
//  int n;
//  cin>>n;
//  for(int row=0; row<n; row= row+1){
//     // inner loop 
//     for (int col=0; col<2*row+1; col++){
//        if(col%2 == 1){
//         // odd number 
//         cout<< "*";
//        }
//        else{
//         cout<< row+1;
//        }
//     }
//     cout<<endl;
//  }


// int n;
// cin>> n;

// for(int row=0; row<n; row++){
//     for(int col=0; col<n-row; col++){

//         if(row==0 || row == n-1){

//         cout<< "*";
//         }
//         else{
//             if(col==0 || col == n-row-1){
//                 cout << "*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout <<endl;

// }
   


    //  intverted pyramid  
// for(int row=0; row<n; row=row+1){
//     for(int col=0; col<row+1; col++){
//         cout<< "*";
//     }
//     cout<< endl;

// }




    // counting  of inverted pyramid of number

// for(int row=0; row<n; row=row+1){
//     for(int col=0; col<row+1; col++){
//         cout<< col+1;
//     }
//     cout<< endl;

// }


// printing to abcd 


// for(int row=0; row<n; row=row+1){
//     char ch;
//     for(int col=0; col<row+1; col++){

//         //  mapping karne ka chota sa trika 
//         int number = col+1;

//         ch = number + 'A' -1;
//         cout<< ch;
//     }


    // jb tk a tk nhi pahuchge jb tk print karege 
// for (char alphabet =ch; alphabet>'A'; --alphabet){
//     alphabet= alphabet-1;
//     cout<<alphabet;
// }

//     cout<< endl;

// }




// let right shift operator  

int a = 10; 
cout << (++a) * (a++);

 }