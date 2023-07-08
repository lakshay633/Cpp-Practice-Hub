// C++ program to sort an array using Selection sort technique.

#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
        *x = *y;
        *y = temp;
}
void selection_sort(int arr[],int size)
{
    int i,j,min_index;
    for(i=0;i<size-1;i++)
    {
        min_index=i;
        for (j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index=j;
            }
            if(min_index!=i)
            {
                swap(&arr[min_index],&arr[i]);
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
    selection_sort(arr,n);
    cout<<"\n\nArray After Soritng :- ";
    print_array(arr,n);
    return 0;
}