// say digits
#include <iostream>
using namespace std;

void say(int n){
    string nos[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n == 0){
        return;
    }
    say(n/10);
    cout << nos[n % 10] << " ";  
}

int main() {
    int n;
    cin >> n;
    cout << endl;
    say(n);
    return 0;
}