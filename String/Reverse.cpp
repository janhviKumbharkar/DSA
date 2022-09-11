// Reverse a string
// .push_back : to push elements into a string from the back
#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string reverse;
    for (int i = str.size() - 1; i >= 0; --i)
    {
        reverse.push_back(str[i]);
    }
    cout << reverse;
    return 0;
}