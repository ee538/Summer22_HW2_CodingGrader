#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------

TEST(IndexOfFirstSpace, EmptyString) {
  CPPLib lib;
  std::string test_string = "";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), -1);
}

TEST(IndexOfFirstSpace, NoSpace) {
  CPPLib lib;
  std::string test_string = "ThisIsATest";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), -1);
}

TEST(IndexOfFirstSpace, StringWithMultipleSpaces) {
  CPPLib lib;
  std::string test_string = "This is a test";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), 4);
}
TEST(IndexOfFirstSpace, StringWithSingleSpace) {
  CPPLib lib;
  std::string test_string = "ThisIs aTest";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), 6);
}

TEST(IndexOfFirstSpace, SpaceInTheBeginning) {
  CPPLib lib;
  std::string test_string = " This Is a Test";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), 0);
}

TEST(IndexOfFirstSpace, SpaceInTheEnd) {
  CPPLib lib;
  std::string test_string = "ThisIsATest ";
  EXPECT_EQ(lib.IndexOfFirstSpace(test_string), 11);
}
//-----------------------------------------------------------------------------
TEST(SeparateFirstAndLastNames, Empty) {
  std::string full_name = "";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  EXPECT_TRUE(first_name.empty());
  EXPECT_TRUE(last_name.empty());
}
TEST(SeparateFirstAndLastNames, NoSpace) {
  std::string full_name = "TommyTrojan";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  EXPECT_EQ(first_name, "TommyTrojan");
  EXPECT_TRUE(last_name.empty());
}

TEST(SeparateFirstAndLastNames, SingleSpace) {
  std::string full_name = "Tommy Trojan";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  EXPECT_EQ(first_name, "Tommy");
  EXPECT_EQ(last_name, "Trojan");
}

TEST(SeparateFirstAndLastNames, MultipleSpaces) {
  std::string full_name = "Tommy Trojan Second";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  EXPECT_EQ(first_name, "Tommy");
  EXPECT_EQ(last_name, "Trojan Second");
}
//-----------------------------------------------------------------------------
TEST(NumberOfVowels, NoVowels) {
  CPPLib lib;
  std::string test_string = "XkCBDjk";
  EXPECT_EQ(lib.NumberOfVowels(test_string), 0);
}

TEST(NumberOfVowels, AllVowels) {
  CPPLib lib;
  std::string test_string = "aieou";
  EXPECT_EQ(lib.NumberOfVowels(test_string), 5);
}

TEST(NumberOfVowels, MultipleVowelsCombined) {
  CPPLib lib;
  std::string test_string = "This is a test";
  EXPECT_EQ(lib.NumberOfVowels(test_string), 4);
}

TEST(NumberOfVowels, MultipleVowelsCombinedChangeCase) {
  CPPLib lib;
  std::string test_string = "ThiS Is A test";
  EXPECT_EQ(lib.NumberOfVowels(test_string), 4);
}

TEST(NumberOfConsonants, NonLettersCombinedWithVowels) {
  CPPLib lib;
  std::string test_string = " __+098234BC ao";
  EXPECT_EQ(lib.NumberOfVowels(test_string), 2);
}
//-----------------------------------------------------------------------------
TEST(NumberOfConsonants, NoConsonants) {
  CPPLib lib;
  std::string test_string = "aieou";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 0);
}
TEST(NumberOfConsonants, AllConsonants) {
  CPPLib lib;
  std::string test_string = "XkCBDjk";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 7);
}

TEST(NumberOfVowels, MultipleConsonantsCombinedChangeCase) {
  CPPLib lib;
  std::string test_string = "ThiS Is A test";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 7);
}

TEST(NumberOfConsonants, MultipleConsonantsCombined) {
  CPPLib lib;
  std::string test_string = "This is a test";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 7);
}

TEST(NumberOfConsonants, NonLetters) {
  CPPLib lib;
  std::string test_string = " __+098234";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 0);
}

TEST(NumberOfConsonants, NonLettersCombinedWithConsonants) {
  CPPLib lib;
  std::string test_string = " __+098234BC ao";
  EXPECT_EQ(lib.NumberOfConsonants(test_string), 2);
}
//-----------------------------------------------------------------------------
TEST(Reverse, Empty) {
  CPPLib lib;
  std::string test_string = "";
  lib.Reverse(test_string);
  EXPECT_EQ(test_string, "");
}

TEST(Reverse, SingleSize) {
  CPPLib lib;
  std::string test_string = "a";
  lib.Reverse(test_string);
  EXPECT_EQ(test_string, "a");
}

TEST(Reverse, OddSize) {
  CPPLib lib;
  std::string test_string = "abc";
  lib.Reverse(test_string);
  EXPECT_EQ(test_string, "cba");
}

TEST(Reverse, EvenSize) {
  CPPLib lib;
  std::string test_string = "abcd";
  lib.Reverse(test_string);
  EXPECT_EQ(test_string, "dcba");
}
