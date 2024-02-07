// https://leetcode.com/problems/climbing-stairs/
// this will get TLE there
#include <iostream>
using namespace std;

int climbStairs(int n) {
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return climbStairs(n-1)+climbStairs(n-2);       // ways to reach last step are either from n-1 or n-2 so this is our recurrence relation
}

int main()
{
    int n = 5;
    cout<<climbStairs(n);
    return 0;
}