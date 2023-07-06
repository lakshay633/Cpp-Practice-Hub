// C++ Program To Convert A Lowercase Alphabet To Uppercase Alphabet Or Vice-Versa Using If/Else Statements

#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<char(ch+32)<<endl;
    }
    else{
        cout<<char(ch-32)<<endl;
    }
    return 0;
}