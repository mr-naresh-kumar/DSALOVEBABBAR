#include<iostream>
#include<queue>

using namespace std;


int main(){

    string str = "facfdcad";
    queue<char> q;
    int freq[26]  ={0};

    for(int i = 0; i<str.length(); i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);


        // answer find karo 

        while(!q.empty()){
            char frontCharacter = q.front();
            if(freq[frontCharacter - 'a'] > 1){
                // yaani ye answer nhi h 

                q.pop();

            }
            else{
                // == 1 wala case 

                // yahi anser hai 

                cout<< frontCharacter << "->";
                break;

            }
        }
        if(q.empty()){
            // koi answer nhi nikla 
            cout<< "#" << "->";
        }
    }

    return 0;
}