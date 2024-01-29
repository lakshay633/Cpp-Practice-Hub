#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcde";
    int res = 0;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'a':
            res += 1;
            break;
        case 'b':
            res += 5;
            break;
        case 'c':
            res += 10;
            break;
        case 'd':
            res += 50;
            break;
        case 'e':
            res += 100;
            break;
        case 'f':
            res += 500;
            break;
        case 'g':
            res += 1000;
            break;
        }
    }

    cout << res << endl;
    return 0;
}
