// C++ Program Print Truth Table Of XY+Z Using Loop

#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"Program to print the truth table for XY+Z\n";
    cout<<"Truth Table for XY+X :- \n\n";
    cout<<"X   Y   Z   XY+Z\n";
    for (x = 0; x <= 1; x++)
    {
        for(y = 0; y <= 1; y++)
        {
            for(z = 0; z <= 1; z++)
            {
                if((x&&y) || z)
                {
                    cout<<x<<"   "<<y<<"   "<<z<<"   "<<"1\n";
                }
                else
                {
                    cout<<x<<"   "<<y<<"   "<<z<<"   "<<"0\n";
                }
            }
        }
    }
    return 0;
}