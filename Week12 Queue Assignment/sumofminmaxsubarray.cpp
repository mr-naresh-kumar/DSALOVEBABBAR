#include<iostream>
#include<vector>
#include<deque>

using namespace std;






int  sumofminmaxofwindowofsizek(vector<int>& nums, int k) {


        int ans = 0;
        deque<int> dq, dq2;
         // first window ko process karo  
         for(int i=0; i<k; i++){
            int element  = nums[i];
            // jitne bhi queue k andar chotte elements h remove kardo 
            while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();

            }
//  bada element remove kar do 
             while(!dq2.empty() && element < nums[dq2.back()]){
                dq2.pop_back();

            }
            // now insert kardo 

            dq.push_back(i);
            dq2.push_back(i);
         }
         ans += nums[dq.front()]+nums[dq2.front()];

        //   remaining window ko porcess karo 
        // ans store 
        // removal 
        // addition

for(int i=k; i<nums.size(); i++){
    // ans store 

    // ans.push_back(nums[dq.front()]);


    // removal 

    // out of range elements 

    if( !dq.empty() && i - dq.front() >= k){
        dq.pop_front();
    }

    if( !dq2.empty() && i - dq2.front() >= k){
        dq2.pop_front();
    }
    // chotte elements  pop kar do 
       int element  = nums[i];

       while(!dq.empty() && element > nums[dq.back()]){
                dq.pop_back();

            }
             while(!dq2.empty() && element <nums[dq2.back()]){
                dq2.pop_back();

            }

            // addition 
             dq.push_back(i);
             dq2.push_back(i);

 ans += nums[dq.front()]+nums[dq2.front()];
}

// last window ka anser store karlo 
return ans;

        
    }


int main() {
    vector<int>v{2,5,-1,7,-3,-1,-2};

    int k =4;

    cout<<sumofminmaxofwindowofsizek(v,k) << endl;
    return 0;
}