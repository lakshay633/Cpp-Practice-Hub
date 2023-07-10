// swap alternate eg: 1 2 3 4 5 6 => 2 1 4 3 6 5 

#include <iostream>
using namespace std;
int main(){
    int a [9] = {0,1,2,3,4,5,6,7,8};
    for (int i = 0; i < 9; i=i+2)
    {
        if (i+1<9)
        {
            swap(a[i],a[i+1]);
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<a[i]<<"   ";
    }
    
    return 0;
}