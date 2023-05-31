#include <iostream>
#include <vector>
#include "gtest/gtest.h"

// Function to check if a byte is a start of a UTF-8 character
bool isStartByte(unsigned char byte)
{
    return (byte & 0xC0) != 0x80; // The byte does not start with "10"
}

// Function to reverse a UTF-8 string
std::string reverseUTF8String(const std::string &str)
{
    std::vector<std::string> chars;
    std::string currentChar;

    for (auto it = str.rbegin(); it != str.rend(); ++it)
    {
        // prepend the current byte because it may be the middle of a multibyte character
        currentChar.insert(currentChar.begin(), *it);
        // if this byte is the start of a character, add it to the list
        if (isStartByte(*it))
        {
            chars.push_back(currentChar);
            currentChar.clear();
        }
    }

    std::string reversedStr;
    for (const auto &ch : chars)
    {
        reversedStr += ch;
    }

    return reversedStr;
}

// int main(int argc, char** argv)
// {
//     ::testing::InitGoogleTest(&argc,argv);
//     return RUN_ALL_TESTS();
// }

// int main()
// {
//     std::string str = "Hello, 世界!";
//     std::cout << "Original String: " << str << std::endl;
//     std::string reversedStr = reverseUTF8String(str);
//     std::cout << "Reversed String: " << reversedStr << std::endl;

//     return 0;
// }

