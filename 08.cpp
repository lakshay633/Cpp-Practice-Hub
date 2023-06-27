// Write a c++ program to swap two numbers without using third variable.
// Eg :-
// Input: a=5 b=10
// Output: a=10 b=5

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Numbers before swapping : "<<"\na = "<<a<<"\nb = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Numbers after swapping : "<<"\na = "<<a<<"\nb = "<<b;
    return 0;
}