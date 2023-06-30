// Write a c++ program to print alphabet triangle.
// Eg :-
// Output:

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include <iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    a=1;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int k = 1; k <= i; k++)
        {
            cout<<ch;
            ch++;
        }
        ch--;
        for (int j = (2*i-1); j > i;j-- )
        {
            --ch;
            cout<<ch;
        }
        cout <<endl;
    
    }
    
    return 0;
}