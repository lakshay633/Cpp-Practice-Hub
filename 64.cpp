// bubble sort using recursion

#include <iostream>
using namespace std;
void bsort(int *arr, int n){
    if (n==0||n==1)
    {
        return;
    }
    for (int i = 0; i < n-1; i++)       // send largest element to last
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bsort(arr,n-1);
}
int main()
{
    int arr[]={5,1,2,7,4,6};
    int n = sizeof(arr)/4;
    bsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}