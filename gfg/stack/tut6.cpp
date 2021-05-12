// Given the string of parenthesis ({},(),[]) we need to chek if the string is balanced or not;

// Input s="([])"
// Output yes

// Input = s="((()))"
// Output yes

// Input s="[{]}"
// Output No;

// Input s="{}[()]";
// Output yes

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool matching(char a, char b)
{
    return (a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}');
}

bool isBalanced(string str)
{
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else if (matching(str[i], s.top()) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.empty() == true);
}

int main()
{

    return 0;
}