// sum of array using recursion
#include <iostream>
using namespace std;

int sum(int *arr,int n){
    if (n==0)
        return 0;
    if (n==1)
        return arr[0];
    return arr[0]+sum(arr+1,n-1);
}
int main()
{
    int arr[]={1,2,3,7,9};
    int n = sizeof(arr)/4;
    cout <<sum(arr,n)<<endl;
    return 0;
}