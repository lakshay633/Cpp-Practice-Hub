#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int x = 6;
    cout<< factorial(x);

    return 0;
}