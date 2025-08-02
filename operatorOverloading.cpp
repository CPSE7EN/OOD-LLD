#include <bits/stdc++.h>
using namespace std;

class Complex {
    private: int imaginary , real;

public:  

//parameterised constructor
    Complex(int r , int i)
    {
        imaginary = i;
        real =  r;
        }


        // default constructor
        Complex()
{
    imaginary = 0;
    real = 0;
}
                // automtatically called when object is created eg-> obj1  + obj2
Complex operator+(Complex const &otherObject)
{
    Complex result;
    result.real = this->real + otherObject.real;
     result.imaginary = this->imaginary + otherObject.imaginary;

return result;
    }

    void print()
    {
        cout << "Real: " << real << ", Imaginary: " << imaginary << endl;   
    }


};


int main()
{
    Complex c1(2,3) , c2(4,5);
    Complex c3 = c1 + c2;
    c3.print();

}