#include "gtest/gtest.h"
#include "reversing_string.cpp"  // This is where the add function is defined.

// The first argument is the test case name.
// The second argument is the specific test name.
TEST(ReverseString, ReverseString1) {
    EXPECT_EQ(reverseUTF8String("heloow"), "wooleh");
    EXPECT_EQ(reverseUTF8String("bs"), "sb");
    EXPECT_EQ(reverseUTF8String("qq"), "qq");
}