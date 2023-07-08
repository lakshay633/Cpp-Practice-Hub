// C++ program to sort an array using Bubble sort technique.

#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}

void print_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int i,arr[50],n;
    cout<<"Enter the size n of the array :- ";
    cin>>n;
    cout<<"\n\nEnter the elements of the array :- \n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nArray before sorting :- ";
    print_array(arr,n);
    bubble_sort(arr,n);
    cout<<"\n\nArray After Soritng :- ";
    print_array(arr,n);
    return 0;
}