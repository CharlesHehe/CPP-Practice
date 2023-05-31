// Balanced Parentheses:
// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> stack;
    for (char c : s)
    {
        if (c == '{' || c == '[' || c == '(')
        {
            stack.push(c);
        }
        else
        {
            if (stack.empty())
            {
                return false;
            }
            else if (c == ']' && stack.top() != '[')
            {
                return false;
            }
            else if (c == '}' && stack.top() != '{')
            {
                return false;
            }
            else if (c == ')' && stack.top() != '(')
            {
                return false;
            }
            stack.pop();
        }
    }
    return true;
}

int main()
{
    cout << (isValid("()[]{}") ? "true" : "false") << endl; // should print "true"
    cout << (isValid("(]") ? "true" : "false") << endl;     // should print "false"
    return 0;
}