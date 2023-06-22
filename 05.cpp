// Write a c++ program to check armstrong number.
// Eg :-
// Input: 371
// Output: armstrong
// Input: 342
// Output: not armstrong

#include <iostream>
using namespace std;
int main(){
    int n,a,b,c = 0;
    cin>>n;
    a=n;
    while (a!=0)
    {
        b=a%10;
        c = c+ (b*b*b);
        a = a/10;
    }
    if (n==c)
    {
        cout<<"The given no. is a armstrong";
    }
    else
    {
        cout<<"The given no. is not armstrong";        
    }
    return 0;
}