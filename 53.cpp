#include <iostream>
using namespace std;

int count(int n){
    if (n==0)
        return 1;
    count (n-1);
    cout<<n<<endl;
}
int rev_count(int n){       //tail recursion
    if (n==0)
        return 1;
    cout<<n<<endl;
    rev_count (n-1);
}

int main()
{
    int n = 5;
    count(5);
    cout<<endl;
    rev_count(5);
    return 0;
}