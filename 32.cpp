// C++ Program To Count Letters, Space, Digits, And Others Using If/Else Statements

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    char *array_point;
    char ch;
    int aplhabet=0,digit=0,spc_ch=0,other=0,count=0;
    string sentence;
    char string_array[100];

    cout<<"\nEnter the Sentence :- ";
    getline(cin,sentence);

    cout<<endl;

    strcpy(string_array,sentence.c_str());

    for(array_point=string_array;*array_point!='\0';array_point++)
    {
        ch=*array_point;
        count++;

        if(isalpha(ch))
        {
            aplhabet++;
        }
        else if (isdigit(ch))
        {
            digit++;
        }
        else if (isspace(ch))
        {
            spc_ch++;
        }
        else
        {
            other++;
        }
    }

    cout<<"\nNumber of characters in the string are :- "<<count<<endl;
    cout<<"\nNumber of Alphabets in the string are :- "<<aplhabet<<endl;
    cout<<"\nNumber of Digit in the string are :- "<<digit<<endl;
    cout<<"\nNumber of Special Characters in the string are :- "<<spc_ch<<endl;
    cout<<"\nNumber of other characters in the string are :- "<<other<<endl;

}