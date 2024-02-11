// reverse string using recursion
#include <iostream>
#include <string>
using namespace std;
string rev(string s,int start, int end){
    // cout<<end;
    if (end<=start){
        return s;
    }
    swap(s[start],s[end]);
    return rev(s,++start,--end); // dont use start++ coz it changes later on when its useless
}
int main()
{
    string s ="lakshay";
    int n = s.length()-1;
    string ans  = rev(s,0,n);
    cout <<ans;
    return 0;
}