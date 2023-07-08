// Write a basic cpp program for resource sharing and resource tracking.

#include<iostream>
using namespace std;

int main()
{
    int i=1,host_resource=100, guest_resource=0,c;
    while(i>0)
    {
        cout<<"\nChoices :- \n"<<"1. Resource sharing\n"<<"2.Resouce tracking\n";
        cout<<"Enter choice :- ";
        cin>>c;
        switch (c)
        {
            case 1: if((host_resource/2)>guest_resource)
                    {
                        guest_resource=guest_resource+20;
                        host_resource=host_resource-20;
                        cout<<"\nResource sharing is completed....!!!\n\n";
                    } 
                    else
                    {
                        cout<<"\nResource sharing cannot be completed due to lack of resources\n\n";
                    }
                    break;
            
            case 2: cout<<"Resource tracking is being processed....\n\n";
                    cout<<"Host Resource :- "<<host_resource;
                    cout<<"\nGuest Resource :- "<<guest_resource;
                    break;
        
            default:    cout<<"\nWrong Choice !!!!!!!!!!\n\n";
                        break;
        }
        cout<<"\n\nDo you want to perform more operations (1/0) :- ";
        cin>>i;
    }
    return 0;
}