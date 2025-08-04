
// pure virtual functions -> those functions which are declared in the base class but not defined in the base class
// abstract class -> a class which contains at least one pure virtual function is called abstract class
// we cannot create objects of abstract class
// we can create pointer of abstract class
// we can create reference of abstract class



#include <bits/stdc++.h>
using  namespace std;


 // animal class is abstract
class animal {
    public : 


    virtual void makesound()  = 0; // this is pure virtual function & makes the class abstract


virtual void eat() {
    cout << "Eating..." << endl;
} // just plain virtual function , can be overidden .



virtual ~animal(){cout << "Destructor of animal called" << endl; } // virtual destructor


};



class dog : public animal {

public : 

void makesound() override {
    cout << "Barking..." << endl;
} // overriding the pure virtual function


void eat() override {
    cout << "Dogger is eating..." << endl;
} // overridng the plain virtual function

virtual ~dog()
{
    cout << "Destructor of dog called" << endl;
}

};





int main()
{

    animal *a  = new dog();
    
    a->makesound();
    a->eat();

    delete a; // this will call the destructor of dog class first and then the destructor of animal class because of virtual destructor
    // if we don't use virtual destructor then only the destructor of animal class will be called and not the dog class destructor
    // this is because the pointer is of type animal and it will call the destructor of animal class only.
}




