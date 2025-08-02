#include <bits/stdc++.h>
using namespace std;

int addNumbers(int a, int b)
{
    return a + b;

}

int addNumbers(int a  ,int b  , int c)

{
    return a + b + c;
}



int main()
{
    cout << "This is program for function overloading" << endl;
    cout << addNumbers(2 , 3) << endl;
    cout << addNumbers(2 , 3 , 4) << endl;
}