// sort 0 1 => {0,1,0,1,0,1,0}=>{0,0,0,0,1,1,1}

#include <iostream>
using namespace std;
int main()
{
    int a[8] = {1,1,0,0,0,0,1,0};
    int i=0,j=7;
    while (i<j)
    {
        if (a[i]==0)
        {
            i++;
        }
        else if (a[j]==1)
        {
            j--;
        }
        else //if (a[i]==1 && a[j]==0)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << a[i]<<" ";
    }
    
    return 0;
}