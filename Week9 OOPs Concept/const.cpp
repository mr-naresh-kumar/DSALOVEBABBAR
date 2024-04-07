#include<iostream>
using namespace std;


class abc{
    private:
        int x;
        int *y;
    const     int z;
        
    public:

    // ctro old :style 
    // abc(int _x, int _y, int _z = 0){
    //     x =_x;
    //     y = new int (_y);
    //     z = _z;
    // }

    // initialization list  m const ko use karskte h 
    abc(int _x, int _y, int _z =0):x(_x),y(new int (_y)), z(_z){

    }
int getX() const{

    // x =10;
    return x;
}
void setX(int _val){
    x = _val;
}
int getY()const{
    return *y;
}
void setY(int _val){
    *y= _val;
}
int getZ() const {
    return z;
};
};

void printABC(const abc &a){
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}


int main(){
   abc a(1, 2, 3);
   printABC(a);
    return 0;
}
int main2() {
    const int x = 5;  
    // insitialization can be done  ;
    // but we canot re assign a value 
    //  x =10 ; 
    
    // cout << x << endl;


    // const with posinters 

    // const int *a = new int(2);   // const data, no-const pointer 
    // cout << *a << endl;
    // *a = 20; canot change the content of pointer 
    // cout << *a << endl;
    // delete a;
    // int b = 20;
    // a = &b;  // pointer itself can eb reassigened
     // cout << *a << endl;
    // int b  = 5;
    // a = &b;
    // cout << *a << endl;


    // const pointer , but non-const data 
    // int *const a = new int(2);

    // cout << *a << endl;
    // *a = 20;
    // cout<< *a << endl;


    // const pointer : const data 
    // const int*const  a  = new int(10);
    // cout << *a << endl;
    // *= 50;
    // int b = 100;
    // a  =&b;
    // cout << a <<




    return 0;
}