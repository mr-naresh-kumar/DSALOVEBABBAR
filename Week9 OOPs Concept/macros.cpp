#include<iostream>

using namespace std;

#define PI = 3.14159465

float circleArea(float r){
    return PI * r * r;
}

float circlePerimeter(float r){
    return  2 * PI * r * r;
}

int main(){

    cout << circleArea(65.4) << endl;


    return 0;
}