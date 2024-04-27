#include<iostream>

#include<string>
#include<vector>


using namespace std;

class Person{
    public:
    void walk(){
        cout << "walking..." << endl;
    }
};

class Teacher: virtual public Person
 {

    public:
    void teach(){
        cout<< "Teaching..." << endl;
    }
};

class Researcher: virtual Person{
    public :
    void research(){
        cout<< "Researching..."<< endl;
    }
};
// multiple inhertence 
class Professor:public Teacher, public Researcher{
    public:
    void bore(){
        cout << "Boring...";
    }
};


int main(){
    Professor p;
    // p.walk();

    // Diamond Problem 
    // Solution 1: Scope Resolution 
    // p.Teacher::walk();
    // p.Researcher::walk();

    // Solution: virtual 
    p.walk();
     
    return 0;
}
