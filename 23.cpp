// C++ Program To Find Character Is Vowel Or Not.

#include <string.h>
#include <iostream>
using namespace std;
int main(){
    char c;
    string s = "aAeEiIoOuU";
    // cout<<"enter the character : ";
    cin>>c;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (c==s[i])
        {
            flag = true;
            cout<<"Its a vowel";
            break;
        }
        
    }
    if(!flag)
        cout<<"It's a consonant"<<endl;
    
    return 0;
}