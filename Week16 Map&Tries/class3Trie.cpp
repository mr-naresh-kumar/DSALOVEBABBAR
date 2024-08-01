#include<iostream>
using namespace std;

#include<vector>

class TrieNode{

    public:
    char value;
    TrieNode* children[26];
    bool isTerminal;


    TrieNode(char val){
        this->value = val;
        for(int i =0; i<26; i++){
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};
// insert 
void insertWord(TrieNode* root, string word){

    // cout << "recived word:" << word<< " fort insertion" << endl;
// base case 
if(word.length() == 0){
    root->isTerminal = true;
    return;
}

char ch  = word[0];
int index = ch - 'a';

TrieNode* child;

if(root->children[index] != NULL){
    // present 
    child = root->children[index];

}else{
    // absent 
    child = new TrieNode(ch);
    root->children[index] = child;

}
insertWord(child, word.substr(1));

}


bool searchWord(TrieNode*root, string word){
    // base case 
    if(word.length() == 0){
        return root->isTerminal;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        // presest h 
        child = root->children[index];

    }
    else{
        // not found 
        return false;
    }

    // baaki resusion 

    bool recursionKaAns = searchWord(child, word.substr(1));
    return recursionKaAns;
}

void deleteWord(TrieNode* root, string word){
    if(word.length() == 0){
        root->isTerminal= false;
        return ;
    }

    // 1 case mera 
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        // present 
        child = root->children[index];
    }
    else{
        // not peresetn case 
        return ;
    }
    // baaki recursion tera
    deleteWord(child, word.substr(1));


}

void storeString(TrieNode* root, vector<string>& ans, string & input, string& prefix){


// base case 
if(root->isTerminal == true){
    // ans store 
    ans.push_back(prefix + input);
}

for(char ch = 'a'; ch<='z'; ch++){
    int index = ch - 'a';
    TrieNode* next = root->children[index];
    if(next != NULL ){
        // chid exist 

        input.push_back(ch);
        // baaki resucrsion
        storeString(next, ans, input,prefix);

        // backtrack karna padega 
        input.pop_back();
    }

}

}

 void findPrefixString(TrieNode* root, string input, vector<string>& ans, string &prefix ){

    // base case 
    if(input.length() == 0){
        TrieNode* lastchar = root;

        storeString(lastchar, ans, input, prefix );
        return;

    }
    char ch = input[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        // child present 
        child = root->children[index];

    }
    else{
        return;
    }
    // recursion 
    findPrefixString(child, input.substr(1), ans, prefix);



 }


 vector<vector<string>>getSuggestions(TrieNode*root, string input){
    vector<vector<string>> output;
    TrieNode*prev = root;
    string inputhelper  = "";


    for(int i =0; i<input.length(); i++){
        char lastchar = input[i];
        int index = lastchar -'a';
        TrieNode* curr = prev->children[index];

        if(curr ==  NULL){
            break;
        }
        else{
            vector<string>nicheKaAns;
            inputhelper.push_back(lastchar);
            string dummy = "";
            storeString(curr, nicheKaAns,inputhelper, dummy);
            output.push_back(nicheKaAns);
            // important 
            prev = curr;

        }

    }
    return output;
 }


int main() {
    TrieNode* root = new TrieNode('~');
    insertWord(root, "cater");
    insertWord(root, "care");
    insertWord(root, "com");
    insertWord(root, "lover");
    insertWord(root, "loved");
    insertWord(root, "load");
    insertWord(root, "lov");
    insertWord(root, "bat");
    insertWord(root, "cat");
    insertWord(root, "car");

    vector<vector<string>> ans = getSuggestions(root, "loa");

    // print ans 
    for(int i =0; i<ans.size(); i++){
        cout<< i<<  "->";
        for(auto str:ans[i]){
            cout<<str << ",";
        }
        cout<< endl;
    }

    // string input = "c";
    // string prefix = input;


    // vector<string>ans;
    // findPrefixString(root, input, ans, prefix);

    // for(auto i: ans){
    //     cout << i << " " ;
    // }
    // cout<< endl;

    // cout<< "Insertion Done" << endl;

    // if(searchWord(root, "loved")){
    //     cout<< "found" << endl;
    // }
    // else{
    //     cout<< "Not found" << endl;
    // }

    // deleteWord(root, "loved");
    // if(searchWord(root, "loved")){
    //     cout<< "found" << endl;
    // }
    // else{
    //     cout<< "Not found" << endl;
    // }





    return 0;
}