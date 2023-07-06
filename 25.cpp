// C++ Program To Find The Address Of Variable.

#include <iostream>
using namespace std;
int main(){
    int n = 7;
    int *p=&n;
    cout<<p;
    return 0;
}