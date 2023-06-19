// Write a c++ program to check palindrome number.
// Eg :-
// Input: 121
// Output: not palindrome number

#include <iostream>
using namespace std;
int main(){
    int n,a,b,c = 0;
    cin>>n;
    a=n;
    while (a!=0)
    {
        b=a%10;
        c = c*10 + b;
        a = a/10;
    }
    if (n==c)
    {
        cout<<"The given no. is a palindrome";
    }
    else
    {
        cout<<"The given no. is not palindrome";        
    }
    
    return 0;
}