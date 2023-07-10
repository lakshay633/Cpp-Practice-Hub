// array intersection
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ans;
    int a[10] = {1,2,3,4,5,5,6,7,7,9};
    int b[5] = {5,5,7,8,10};
    int m= -1;
    for (int i = 0; i < 10; i++)
    {
        int x = a[i];
        for (int j = (m+1); j<5 ; j++)
        {
            if (x < a[i])
            {
                break;
            }
            
            if (x==b[j])
            {
                ans.push_back(x);
                m=j;
                break;
            }
            
        }
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans.at(i) << ' ';
    }
    
    return 0;
}