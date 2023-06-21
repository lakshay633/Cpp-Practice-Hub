// Write a c++ program to print factorial of a number.
// Eg :-
// Input: 5
// Output: 120

#include <iostream>
using namespace std;

int s = 1;

void factorial(int n){

    if (n>1){
        s=s*n;
        n--;
        factorial(n);
    }
    else{
        cout<<s;
    }

}

int main(){
    int n ;
    cin>>n;
    factorial(n);
    return 0;
}