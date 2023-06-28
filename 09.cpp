// Write a c++ program to print multiplication of 2 matrices.
// Eg :-
// Input:
// first matrix elements:
// 1 2 3
// 1 2 3
// 1 2 3
// second matrix elements
// 1 1 1
// 2 1 2
// 3 2 1
// Output:
// multiplication of the matrix:
// 14 9 8
// 14 9 8
// 14 9 8

#include <iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2 ;
    cout << "enter the dimensions of 1st matrix"<<endl;
    cin>>r1>>c1;
    cout <<endl<< "enter the dimensions of 2nd matrix"<<endl;
    cin>>r2>>c2;
    if (c1==r2)
    {
        
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout<<endl<<"element at a"<<i+1<<","<<j+1<<"=";
                cin>>a[i][j];
            }
            
        }
        
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout<<endl<<"element at b"<<i+1<<","<<j+1<<"=";
                cin>>b[i][j];
            }
            
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j]=0;
            }
            
        }

        for(int i = 0; i < r1; ++i)
            for(int j = 0; j < c2; ++j)
                for(int k = 0; k < c1; ++k)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }  

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j]<<"  ";
            }
            cout << endl;
        }      
        
    }
    else
    {
        cout<<"the c1 and r2 must be equal for matrix multiplication";
    }
    

    return 0;
}