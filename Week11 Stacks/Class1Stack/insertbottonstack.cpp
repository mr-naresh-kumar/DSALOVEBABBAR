#include<iostream>
#include<stack>

using namespace std;


void insertAtBottom(stack <int> &st, int &element){
    // base case 

    if(st.empty()){
        st.push(element);
        return;
    }

    // 1 case main solve karuga 

    int temp = st.top();
    st.pop();
    // baaki recursion ko de diya 

    insertAtBottom(st, element);

    // backtrack 

    st.push(temp);

}

void reverseStack(stack<int> &st){

    // base case 
    if(st.empty()){
        return;
    }

    // 1 case main solve krega 
    int temp = st.top();
    st.pop();

 
    // recursion 
    reverseStack(st);

    // backtrack
    insertAtBottom(st, temp); 



}


void inserSorted(stack<int> &st, int element){
    // base case 
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }

    // 1 case sambhalna h 

    int temp = st.top();
    st.pop();

    // recursion sambhalega 

inserSorted(st, element);

// backtracking

st.push(temp);


}

int main(){

stack<int>st;
st.push(10);
st.push(20);
st.push(30);

// int element = 400;

// insertAtBottom(st, element);
// reverseStack(st);

// cout<< "with reverse:" << endl;
inserSorted(st, 50);

while(!st.empty()){
    cout<< st.top() << " ";
    st.pop();
}


    return 0;
}