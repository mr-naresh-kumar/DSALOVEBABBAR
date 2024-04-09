#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

class MyString
{
private:
    char *data;  // pointer to char array data 
    int length; // size of my string 
public:
        //   default ctor 
    MyString();
    

    // param ctor 

    MyString(const char *str);
    // copy ctor 
    MyString (const MyString &other);

    ~MyString();

    int size() const;

    bool empty() const;

    // overloading insertaing operator << for easy output 

    const char *c_str()const;

    friend std::ostream &operator<<(std::ostream &os, const MyString &str);
};

#endif // MYSTRING_H
