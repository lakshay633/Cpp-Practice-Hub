// find duplicate {1,2,3,1} => 1

#include <iostream>
using namespace std;
int main (){
    int a[11] = {0,1,2,9,3,4,5,6,7,8,9};
    int ans = 0;
    for (int i = 0; i < 11; i++)
    {
        ans = ans ^ a[i];
    }
    for (int i = 0; i < (11-1); i++)
    {
        ans = ans ^ a[i];
    }
    cout<<ans;
    return 0;
}