#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(CapitalizeFirstLetter, Empty) {
  CPPLib lib;
  std::string test_string = "";

  EXPECT_EQ(lib.CapitalizeFirstLetter(test_string), false);
  EXPECT_EQ(test_string, "");
}

TEST(CapitalizeFirstLetter, LowerCaseInitial) {
  CPPLib lib;
  std::string test_string = "this is a test";

  EXPECT_EQ(lib.CapitalizeFirstLetter(test_string), true);
  EXPECT_EQ(test_string, "This is a test");
}

TEST(CapitalizeFirstLetter, UpperCaseInitial) {
  CPPLib lib;
  std::string test_string = "This is a test";

  EXPECT_EQ(lib.CapitalizeFirstLetter(test_string), true);
  EXPECT_EQ(test_string, "This is a test");
}

TEST(CapitalizeFirstLetter, NonLetterInitial) {
  CPPLib lib;
  std::string test_string = "123 this is a test";

  EXPECT_EQ(lib.CapitalizeFirstLetter(test_string), false);
  EXPECT_EQ(test_string, "123 this is a test");
}
//-----------------------------------------------------------------------------
