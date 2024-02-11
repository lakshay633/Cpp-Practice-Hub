// how many answer sheets were seen in total
// int stu[]={1,2,3,4,5}
// int sheet[]={4,2,5,1,3}
// 1 will read 4 sheets till he gets his own ... and then remove his own

#include <iostream>
using namespace std;
int main()
{
    int stu[]={1,2,3,4,5};
    int sheet[]={4,2,5,1,3};
    int n = sizeof(stu)/4;
    for (int i = 0; i < n; i++)
    {
        int c= 0;
        for (int j = 0; j < n; j++)
        {
            if(stu[i]<sheet[j]){
                // cout<<stu[i]<<sheet[j]<<c<<endl;
                c++;
            }
            else if (stu[i]==sheet[j]){
                c++;
                cout <<"the student "<<stu[i]<<" will read : "<< c<<" sheets"<<endl;
                break;  
            }  
        }
    }  
    return 0;
}