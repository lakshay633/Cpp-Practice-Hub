#include <iostream>
using namespace std;
int power_of_two(int n){
    if(n==0)
        return 1;
    return 2*power_of_two(n-1);
}
int main()
{
    int x = 4;
    cout<< power_of_two(x);

    return 0;
}