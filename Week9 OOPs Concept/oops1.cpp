#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{

    // double a;
    // double b;
    // char c;
    // bool d;
private:
    string gf; 


public:
    int id;
    int age;
    bool present; 
    string name;
    int nos;

    // ctor: Default ctor assign garbage value 
    Student(){
  cout << "Student ctor called " <<  endl;
    }


        // parameterized value  
    Student(int id, int age, bool present, string name, int nos, string gf){

       this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
  cout << "Student parameterized ctor called " <<  endl;
    }



 Student(int id, int age, bool present, string name, int nos){

       this->id = id;
        this->age = age;
        this->present = present;
        this->name = name;
        this->nos = nos;
        this->gf = gf;
  cout << "Student parameterized ctor called " <<  endl;
    }
void study(){

    cout << "studying" <<endl;

}

void sleep(){
    cout << "sleeping" <<endl;

}
void bunk(){
    cout << "bunking" <<endl;

}

private:
void gfchating(){
    cout <<  "Chatting " << endl;
}

};






int main() {

    // cout << sizeof(Student)  << endl;
  Student s1;
//   cout << s1.age << endl;

Student s2(1, 12, 1, "Chota Bheem", 1, "Chutki");

cout << s2.name << endl <<  s2.id << endl;

Student s3(2, 15, 0, "Lokesh", 5);
cout <<  s3.name << endl << s3.id << endl;


// alocating on help 
Student *s4 = new Student(3, 34, 1, "Chintu", 6);

cout << s4->name << endl << (*s4).age << endl;

delete s4;   // no leak

//      s1.name = "Naresh";
//   s1.name = "Goli";
//   s1.age = 12;
//   s1.id = 1;
//   s1.nos = 5;
//   s1.present = 0;
  


//   Student s2;
//   s2.name = "chota Bheem";
//   s2.age = 11;
//   s2.id = 2;
//   s2.nos = 1;
//   s2.present = 0;

   

    return 0;
}