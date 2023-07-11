//triplet sum => find three no.s such that they sum up to 12
//https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028

#include <iostream>
using namespace std;
int main()
{
    int a [12] ={1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 0; i < 12; i++)
    {
        for (int j = i+1; j < 12; j++)
        {
            for (int k = j+1; k < 12; k++)
            {
                if((a[i]+a[j]+a[k])==12){
                    cout<<a[i]<<"  "<<a[j]<<"  "<<a[k]<<endl;
                }
            }
            
        }
        
    }
    
    return 0;
}