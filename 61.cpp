// check palindrome using recursion

#include <iostream>
using namespace std;
bool pal(string s, int start, int end){
    if(end<=start)
        return true;
    if(s[start]!=s[end])
        return false;
    return pal(s,++start,--end);
}
int main()
{
    string s ="lakshay";
    int n = s.length()-1;
    bool ans  = pal(s,0,n);
    cout <<ans;
    return 0;
}