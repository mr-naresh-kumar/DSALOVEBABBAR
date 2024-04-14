#include<iostream>
using namespace std;

class abc{
    public: 
    int x;
    int *y;

    abc(int _x, int _y): x(_x), y(new int(_y)){}

    // default dumb copy constructor  it does shallow copy 
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = obj.y;
    // }

// our smart deep copy 
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = new int(*obj.y);
    // }
    void print() const{
        printf("x: %d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x,y,*y);
    } 
};

// ~abc(){
//     delete y;
// };


int main(){
    abc a (1,2);
    a.print();

    // abc b(a); 

    abc b = a; // call hota h copy constructor 
    cout<< "Printint b\n";
    b.print();
    *b.y = 20;
    cout << "Printint b\n";
    b.print();

    cout << "Printint a\n";
    a.print();

    return 0;
}