#include<iostream>
#include<unordered_map> 
using namespace std;

 void countCharacters(unordered_map<char, int>& mapping, string str){
    for( char ch: str){
        mapping[ch]++;

    }
 }


int main() {
 
 string str = "NareshKumar";
 unordered_map<char, int> mapping;


 countCharacters(mapping, str);

 for(auto i : mapping){
    cout << i.first <<  "->" << i.second << endl;
 }


    // creation 
//     unordered_map<string, int> mapping;
    

//     // Insertion 
//     pair<string, int> p =   make_pair("love", 25);

//     pair<string,int > q("dipansh", 24);

//     pair<string, int>r;
//     r.first = "arun";
//     r.second =21;

//     mapping.insert(p);
//     mapping.insert(q);
//     mapping.insert(r);
    
//     cout <<"size of map:" << mapping.size() << endl;

// // access 
//     cout << mapping.at("love") << endl;
//     cout<< mapping["love"] << endl;

//     cout << mapping.count("love") << endl; 

//     if(mapping.find("Naresh") != mapping.end()){
//         cout<< "Found"<< endl;
//     }
//     else{
//         cout<< "Not found" <<endl;
//     }

//     cout <<"size of map:" << mapping.size() << endl;
//     cout<< mapping["Kumar"] << endl;

//     cout<< "Size of map:" <<mapping.size() << endl;

    

    return 0;
}