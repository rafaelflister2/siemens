#include <bits/stdc++.h>
using namespace std;
  
string reversingString(string str, int start, int end)
{
    while (start < end)
    {
        // XOR for swapping the variable
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start] ^= str[end];
  
        ++start;
        --end;
    }
    return str;
}
  
int main()
{
    string s = "abc";
    cout << reversingString(s, 0, 2);
    return 0;
}
