// Write a c++ program to reverse given number.
// Eg :-
// Input: 234
// Output: 432

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,a,b,c = 0;
    cin>>n;
    a=n;
    while (a!=0)
    {
        b=a%10;
        c=c*10 + b;
        a=a/10;
    }
    
    cout<<c;
    return 0;
}