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
  bool result = lib.CapitalizeFirstLetter(test_string);
  std::cout << "input:  "<<std::endl;
  std::cout << "output 1: " << result <<std::endl;
  std::cout << "expected 1: " << false <<std::endl;
  std::cout << "output 2: " << test_string <<std::endl;
  std::cout << "expected 2: " << "" <<std::endl;

  EXPECT_EQ(result, false);
  EXPECT_EQ(test_string, "");
}

TEST(CapitalizeFirstLetter, LowerCaseInitial) {
  CPPLib lib;
  std::string test_string = "this is a test";

  bool result = lib.CapitalizeFirstLetter(test_string);
  std::cout << "input: this is a test "<<std::endl;
  std::cout << "output 1: " << result << std::endl;
  std::cout << "expected 1: " << true << std::endl;
  std::cout << "output 2: " << test_string <<std::endl;
  std::cout << "expected 2: " << "This is a test" <<std::endl;

  EXPECT_EQ(result, true);
  EXPECT_EQ(test_string, "This is a test");
}

TEST(CapitalizeFirstLetter, UpperCaseInitial) {
  CPPLib lib;
  std::string test_string = "This is a test";

  bool result = lib.CapitalizeFirstLetter(test_string);
  std::cout << "input: This is a test "<<std::endl;
  std::cout << "output 1: " << result <<std::endl;
  std::cout << "expected 1: " << true <<std::endl;
  std::cout << "output 2: " << test_string <<std::endl;
  std::cout << "expected 2: " << "This is a test" <<std::endl;

  EXPECT_EQ(result, true);
  EXPECT_EQ(test_string, "This is a test");
}

TEST(CapitalizeFirstLetter, NonLetterInitial) {
  CPPLib lib;
  std::string test_string = "123 this is a test";

  bool result = lib.CapitalizeFirstLetter(test_string);
  std::cout << "input: 123 this is a test "<<std::endl;
  std::cout << "output 1: " << result <<std::endl;
  std::cout << "expected 1: " << false <<std::endl;
  std::cout << "output 2: " << test_string <<std::endl;
  std::cout << "expected 2: " << "123 this is a test" <<std::endl;

  EXPECT_EQ(result, false);
  EXPECT_EQ(test_string, "123 this is a test");
}
//-----------------------------------------------------------------------------
