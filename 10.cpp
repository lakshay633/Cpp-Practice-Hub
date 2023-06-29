// Write a c++ program to convert decimal number to binary.
// Eg :-
// Input: 9
// Output: 1001
// Input: 20
// Output: 10100

#include <iostream>
using namespace std;
int main(){
    int b[32],a,i=0;
    cin>>a;
    while(a!=0){
        b[i]=(a%2);
        a=a/2;
        i++;
    }
    for (i=i-1 ; i >=0; i--)
    {
        cout<<b[i];
    }
    
    return 0;
}