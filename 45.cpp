// pair sum => find pair whoes sum is 11
//https://www.codingninjas.com/studio/problems/pair-sum_697295

#include <iostream>
using namespace std;
int main()
{
    int a [10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        for ( i = 0; i < 10; i++)
        {
            for (int j = i+1; j < 10; j++)
            {
                if ((a[i]+a[j])==11)
                {
                    cout<<a[i]<<", "<<a[j]<<endl;
                }
                
            }
            
        }
        
    }
    

    return 0;
}