// C++ Program to Convert a person's name in Abbreviated.

// Using char array
// #include <iostream>
// using namespace std;
// int main(){
//     char fname[20], mname[20], lname[20];
//     cout<<"enter name in format of 1stname-mid name-lastname"<<endl;
//     cin>>fname>>mname>>lname;
//     cout<<fname[0]<<". "<<mname[0]<<". "<<lname;
//     return 0;
// }

// Using strings
#include <iostream>
using namespace std;
int main(){
    string fname,mname,lname;
    cout<<"enter name in format of 1stname-mid name-lastname"<<endl;
    cin>>fname>>mname>>lname;
    cout<<fname[0]<<". "<<mname[0]<<". "<<lname;   
    return 0;
}