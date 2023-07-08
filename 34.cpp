// C++ Program To Determine Whether The Seller Made Profit or Loss. Also, Determine How Much Profit or Loss He Made

#include <iostream>
using namespace std;
int main(){
    int cp,sp,m;
    cout <<"enter the cost price and selling price"<<endl;
    cin>>cp>>sp;
    if (cp>=sp){
        m=cp-sp;
        cout<<"the loss is of "<<m;
    }
    else{
        m=sp-cp;
        cout<<"the profit is of "<<m;
    }
    
    return 0;
}