#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &str)
{
    stack<char> s;
    for (char ch : str)
    {
        s.push(ch);
    }

    for (char ch : str)
    {if (s.top() != ch)
        {
            return false;}
        s.pop();
    }
    return true;
}

int main()
{
    string testStr = "racecar";
    if (isPalindrome(testStr))
    {
        cout << testStr << " is a palindrome."<<endl;
    }
    else
    {
        cout << testStr << " is not a palindrome."<<endl;
    }

    return 0;
}