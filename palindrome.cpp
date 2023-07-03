#include <iostream>

class Palindrome
{
public:
    bool isPalindrome(const std::string &str)
    {
        int start = 0;
        int end = str.length() - 1;
        while (start < end)
        {
            if (!std::isalnum(str[start]))
            {
                start++;
                continue;
            }
            if (!std::isalnum(str[end]))
            {
                end--;
                continue;
            }
            if (std::tolower(str[start]) != std::tolower(str[end]))
            {
                return false;
            }

            start++;
            end--;
        }
        return true;
    }
};

int main()
{
    Palindrome p;
    std::cout << p.isPalindrome("Able , was I saw eLba") << std::endl; // Should print 1 (true)
    std::cout << p.isPalindrome("Not a palindrome") << std::endl;      // Should print 0 (false)

    return 0;
}