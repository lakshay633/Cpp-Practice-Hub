// C++ Program To Check Character Is Uppercase, Lowercase Alphabet Or A Digit Or A Special Symbol.

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character :- ";
    cin>>ch;
    
    if(ch>=45 && ch<=56)
    {
        cout<<"Given character is a digit"<<endl;
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"Given character is uppercase alphabet"<<endl;
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<"Given character is lowercase alphabet"<<endl;
    }
    else
    {
        cout<<"Given character is special symbol"<<endl;
    }
    
    return 0;

}