/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("nope");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(":)");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, has_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("race car");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, is_descending)
{
    Practice obj;
		int one, two, three;
		one = 1;
		two = 2;
		three = 3;
    bool actual = obj.sortDescending(three, two, one);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_mixed)
{
    Practice obj;
		int one, two, three;
		one = 1;
		two = 2;
		three = 3;
    bool actual = obj.sortDescending(two, one, three);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_duplicate)
{
    Practice obj;
		int two, three;
		two = 2;
		three = 3;
    bool actual = obj.sortDescending(two, two, three);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_all_duplicate)
{
    Practice obj;
		int two;
		two = 2;
    bool actual = obj.sortDescending(two, two, two);
    ASSERT_TRUE(actual);
}







//
