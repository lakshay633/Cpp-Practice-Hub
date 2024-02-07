//isSorted using recursion
#include <iostream>
using namespace std;
bool isSorted(int *arr,int n){
    if(n==0||n==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    return isSorted(arr+1,n-1);
}
int main()
{
    int arr[]={1,2,5,7,9};
    int n = sizeof(arr)/4;
    cout <<isSorted(arr,n)<<endl;
    return 0;
}