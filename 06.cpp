// Write a c++ program to print sum of digits.
// Eg :-
// Input: 23
// Output: 5
// Input: 624
// Output: 12

#include <iostream>
using namespace std;
int main(){
    int n,a,b,c = 0;
    cin>>n;
    a=n;
    while (a!=0)
    {
        b=a%10;
        c = c+ (b);
        a = a/10;
    }
    cout<<c;
    return 0;
}