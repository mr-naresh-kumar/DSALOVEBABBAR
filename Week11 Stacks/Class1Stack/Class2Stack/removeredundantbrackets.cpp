#include<iostream>

#include<stack>

using namespace std;

 bool checkRedundant(string &str){
    stack<char>st;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch == '(' ||  ch == '+' || ch== '-'|| ch=='*' ||ch=='/'){
            st.push(ch);
        }
        else if(ch == ')'){

            int operatorCount = 0;
            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp == '+' || temp=='-' || temp=='*' || temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            // yaha par jabhi phochoge jab 
            // apake stack k top pr ek eopeing bracket hoaga 
            st.pop();

            if(operatorCount == 0){
                return true;
            }
        }

    }

    // agar main yha tk pohohcha hu
    // iska matlb k har ek bracket k pair k beech m ek operator pakka mila hoga 
    return false;
 }


int main(){

    string str = "(((a+b) * (c+d))) ";
    bool ans = checkRedundant(str);

    if(ans ==true){
        cout<< "Redundant Brackets Present" << endl;

    }
    else{
        cout<< "Redundant Brackets not  Present" << endl;
    }


    return 0;
}