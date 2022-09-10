#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value = value + 1;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}


// // another way 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = i;

//         while (j < i * 2)
//         {
//             cout << j << " ";

//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }
