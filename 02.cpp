// Write a c++ program to check prime number.
// Eg :-
// Input: 57
// Output: composite number
// Input: 17
// Output: prime number

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for ( int i= n-1;i>1; i--)
    {
        if (n%i==0)
        {
            cout<<"n is a composite no.";
            break;
        }
        else if (i==2){
            cout<<"n is a prime no.";
            break;
        }
        else if (n==2)
        {
            cout<<"n is a prime no.";
            break;
        }
        else if(n==0 ||n==1)
        {
            cout<<"n is neither a prime nor a composite no.";
            break;
        }

    }
    
    return 0;
}