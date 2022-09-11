// agese pichese dono trf se string same dikhti h
//  ex : MADAM , EYE 

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
    cout << reverse<<endl;
    if(str==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}