#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string str)
{
    int l = 0, h = str.length() - 1;


    for (int i = 0; i <= h; i++)
        str[i] = tolower(str[i]);


    while (l <= h) {


        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;


        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;


        else if (str[l] == str[h])
            l++, h--;


        else
            return false;
    }

    return true;
}
int main()
{
    string str = "A man, a plan, a canal: Panama";
    cout<<str;
    cout<<endl;

    if (isPalindrome(str))
        cout << "Sentence is palindrome.";
    else
        cout << "Sentence is not palindrome.";

    return 0;
}
