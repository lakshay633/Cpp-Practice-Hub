// power using recursion (a=3,b=2,ans=9)

#include <iostream>
using namespace std;
int sq(int a,int b,int ans){
    if(b==0)
        return ans;
    if(b==1){
        ans = ans*a;
        return ans;
    }
    return sq(a,--b,ans*a);
}
int main()
{
    int a,b,ans=1;
    cin>>a;
    cin>>b;
    cout <<sq(a,b,ans);
    return 0;
}