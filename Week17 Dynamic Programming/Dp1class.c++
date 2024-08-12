// class Solution {
// public:


// // normal recurison 
// int solveUsingRec(int n){
//      if(n == 0 || n ==1){
//             return n;
//         }

//         // rec relation 
//         int ans = solveUsingRec(n-1) + solveUsingRec(n-2);
//         return ans;

// }

// // top-down approach 
//     // rec+ memoization approach

//     int solveUsingMem(int n, vector<int> &dp){
//          if(n == 0 || n ==1){
//             return n;
//         }
//         // step 3 : if ans already exsit then return ans;
//         if(dp[n] != -1){
//             return dp[n];
//         }

//         // rec relation 

//         // step 2: store and return using dp array
//         dp[n]= solveUsingMem(n-1, dp) + solveUsingMem(n-2, dp);
//         return dp[n];


//     }


//     int solveUsingTabulation(int n){
//             // step 1: create dp array
//             vector<int>dp(n+1, -1);
//             // step 2 analyse base case and fill dp array
//             dp[0] = 0;
//             if(n ==0){
//                 return dp[0];
//             }
//             dp[1] =1;
//             // step 3 fill the remaining dp array
//             // size = n+1;
//             // index ->0 => n
//             // index fill ho chuka hai - > 0 and 1 ko fill kar diya h
//             // bacha konsa h index = 2->n
//             for(int i =2; i<=n; i++){
//                 // copy past the recusive logic
//                 // replace recursive calls with dp array 
//                 // make sure dp arrya is using loopin variable "i"


//                  dp[i]= dp[i-1] + dp[i-2];
    
//             }

//             // answer return  
//             return dp[n];

//     }





//     int fib(int n) {

//         // base case  -> mandatory

//         // processing  -> optimal
//         // recursive relation ->mandatory
//         // base case 
// // int ans = solveUsingRec(n);
// // return ans;

// // top to down 
// //  step no :1 create a dp array 

// // vector<int> dp(n+1, -1);
// // int ans = solveUsingMem(n, dp);

// // return ans;

// // bottomup dp

// int ans  =solveUsingTabulation(n);
// return ans;

       
        
//     }


    
// };




