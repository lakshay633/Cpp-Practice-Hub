// C++ Program To Check Expression Parenthesis Is Valid Or Not Using If/Else Statements

#include <iostream>
using namespace std;
int main(){
    string s;
    int b,c=0;
    cout<<"enter the expression";
    cin>>s;
    b=s.length();
    for (int i = 0; i < b; i++)
    {
        if (s[i] == '(')
        {
            c++;
        }
        else if (s[i] == ')')
        {
            c--;
        }        
    }

    if (c==0)
    {
        cout<<"\nParanthesis are balanced !!";
    }
    else
    {
        cout<<"\nParanthesis are not balanced !!";
    }
    return 0;
}