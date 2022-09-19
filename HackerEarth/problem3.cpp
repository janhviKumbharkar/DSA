#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str = "zzzooooooo";

    int z = 0, o = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
        {
            z++;
        }
        if (str[i] == 'o')
        {
            o++;
        }
    }

    if ((2 * z) == o)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}
