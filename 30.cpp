// C++ Program To Check Year Is Leap Year Or Not Using If/Else Statements

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%16 == 0)
    {
        cout<<"leap year";
    }
    else if (n%100 == 0)
    {
        cout<<"not a leap year";
    }
    else if (n%4 == 0)
    {
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}