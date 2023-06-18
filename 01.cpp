// Write a c++ program to print fibonacci series without using recursion and using recursion.
// Eg :-
// Input: 10
// Output: 0 1 1 2 3 5 8 13 21 34

#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cin >> n;
    a=0;
    b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = 2; i < n; i++)
    {
        c=b+a;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    
    return 0;
}