#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

// Instructions for the grader:
// Run this file with this command:
// bazel run //sol/1:grader_test
// bazel run //sol/1:grader_test 2>&1 | grep "___Grade is___"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(GetFullName, test1) {
  CPPLib cpp_lib;
  std::string first = "Tommy";
  std::string last = "Trojan";
  std::string expected = "Tommy Trojan";

  std::cout << "first: " << first << std::endl;
  std::cout << "last: " << last << std::endl;
  std::cout << "expected: " << expected << std::endl;
  EXPECT_EQ(cpp_lib.GetFullName(first, last), expected);
}
//-----------------------------------------------------------------------------
TEST(CountCharacters, test1) {
  CPPLib cpp_lib;
  std::string input = "This is a test";
  std::vector<char> characters = {'t', 'h'};

  std::cout << "input: " << input << std::endl;

  std::cout << "characters: " << std::endl;
  for (auto c : characters) {
    std::cout << "c: " << c << std::endl;
  }

  EXPECT_EQ(cpp_lib.CountCharacters(input, characters), 4);
}
