// binary search using recursion
#include <iostream>
using namespace std;

int bs(int *arr,int k,int start, int end){
    if(start==end)
        return start;
    int mid = (start+end)/2;
    if(arr[mid] == k)
        return mid;
    if(k < arr[mid])
        return bs(arr,k,0,mid-1);
    return bs(arr,k,mid+1,end);
}
int main()
{
    int arr [] = {1,2,4,5,7,10};
    int k = 7;
    int end = (sizeof(arr)/4)-1;
    cout << "is element present? "<<bs(arr,k,0,end)<<endl;
    return 0;
}