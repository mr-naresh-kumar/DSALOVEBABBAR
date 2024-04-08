#include<iostream>

using namespace std;

class Animal{
    public:
   virtual void sound(){
        cout << "Animal making sound";
    }
   virtual ~Animal(){
        cout<< "Animal dtor" << endl;
    }
};

class Dog : public Animal{
    public:
    void sound() override{
        cout << "Dog is barking";
    }
     ~Dog(){
        cout<< "Dog dtor" << endl;
    }
};

class Cat : public Animal{
    public:
    void sound()override{
        cout << "Cat Mewowing";
    }
     ~Cat(){
        cout<< "Cat dtor" << endl;
    }
};

void sound (Animal *animal){
    animal->sound();  // polymorphic
    // animal -> sound  behaving as per requied object allocated at runtime 

}


int main(){

   Animal*animal = new Dog();
   sound(animal) ;
//    animal = new Cat();
//    sound(animal);

   delete animal;
    return 0;

}