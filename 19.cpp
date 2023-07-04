// C++ Program For Calculate Percentage Of 5 Subjects.

#include <iostream>
using namespace std;
int main(){
    float m,max,p,t=0;
    string sub;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the name of subject "<<endl;
        cin>>sub;
        cout<<"enter the max marks of subject "<<endl;
        cin>>max;
        cout<<"enter the scored marks in that subject "<<endl;
        cin>>m;
        p=(m/max)*100;
        cout<<"percentage in "<<sub<<" is "<<p<<endl;
        t=t+p;
    }
    t=t/5;
    cout<<"overall percentage is "<<t;
    return 0;
}