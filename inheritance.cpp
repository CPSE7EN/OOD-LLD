#include <bits/stdc++.h>
using namespace std;

class  Animal {
    public  : 
    void eat()
    {
        cout << "Eating..." << endl;
    }
};


class Dog : public Animal 
{
    public : 

    void bark()
    {
        cout << "Barking"
 << endl;    }
};

int main()
{
    Dog d;
    d.eat(); // this is inherited function from parent class
d.bark(); // this is function of child class
    return 0;
}