//linear search usong recursion
#include <iostream>
using namespace std;
bool ls(int *arr,int n,int key){
    if(n==0)
        return false;
    if(arr[0]==key)
        return true;
    return ls(arr+1,n-1,key);
}
int main()
{
    int arr[]={1,2,3,7,9};
    int n = sizeof(arr)/4;
    int key=3;
    cout <<ls(arr,n,key)<<endl;
    return 0;
}