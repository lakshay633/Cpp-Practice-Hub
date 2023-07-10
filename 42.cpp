// find unique element that only comes once

#include <iostream>
using namespace std;
int main(){
    int a [11] = {0,0,1,1,2,6,2,3,3,4,4};
    int ans = 0;
    for (int i = 0; i < 11; i++){
        ans = ans ^ a[i];
        cout<<ans<<endl;
    }
    cout << ans;
    return 0;
}