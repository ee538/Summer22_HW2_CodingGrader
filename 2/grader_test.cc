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
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl; 
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << -1 <<std::endl;
  EXPECT_EQ(result, -1);
}

TEST(IndexOfFirstSpace, NoSpace) {
  CPPLib lib;
  std::string test_string = "ThisIsATest";
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl;
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << -1 <<std::endl;
  EXPECT_EQ(result, -1);
}

TEST(IndexOfFirstSpace, StringWithMultipleSpaces) {
  CPPLib lib;
  std::string test_string = "This is a test";
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl;
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 4 <<std::endl;
  EXPECT_EQ(result, 4);
}

TEST(IndexOfFirstSpace, StringWithSingleSpace) {
  CPPLib lib;
  std::string test_string = "ThisIs aTest";
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl;
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 6 <<std::endl;
  EXPECT_EQ(result, 6);
}

TEST(IndexOfFirstSpace, SpaceInTheBeginning) {
  CPPLib lib;
  std::string test_string = " This Is a Test";
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl;
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 0 <<std::endl;
  EXPECT_EQ(result, 0);
}

TEST(IndexOfFirstSpace, SpaceInTheEnd) {
  CPPLib lib;
  std::string test_string = "ThisIsATest ";
  int result = lib.IndexOfFirstSpace(test_string);
  std::cout << "test_string: " << test_string << std::endl;
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 11 <<std::endl;
  EXPECT_EQ(result, 11);
}
//-----------------------------------------------------------------------------
TEST(SeparateFirstAndLastNames, Empty) {
  std::string full_name = "";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  std::cout << "full_name: " << full_name << std::endl;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  std::cout << "expected first name:"<< ""<<std::endl;
  std::cout << "expected last name:"<< ""<<std::endl;
  std::cout << "output first name:"<< first_name<<std::endl;
  std::cout << "output last name:"<< last_name<<std::endl;
  EXPECT_TRUE(first_name.empty());
  EXPECT_TRUE(last_name.empty());
}

TEST(SeparateFirstAndLastNames, NoSpace) {
  std::string full_name = "TommyTrojan";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  std::cout << "full_name: " << full_name << std::endl;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  std::cout << "expected first name:"<<first_name<<std::endl;
  std::cout << "expected last name:"<<""<<std::endl;
  std::cout << "output first name:"<< first_name<<std::endl;
  std::cout << "output last name:"<< last_name<<std::endl;
  EXPECT_EQ(first_name, "TommyTrojan");
  EXPECT_TRUE(last_name.empty());
}

TEST(SeparateFirstAndLastNames, SingleSpace) {
  std::string full_name = "Tommy Trojan";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  std::cout << "full_name: " << full_name << std::endl;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  std::cout << "expected first name:"<<"Tommy"<<std::endl;
  std::cout << "expected last name:"<<"Trojan"<<std::endl;
  std::cout << "output first name:"<< first_name<<std::endl;
  std::cout << "output last name:"<< last_name<<std::endl;
  EXPECT_EQ(first_name, "Tommy");
  EXPECT_EQ(last_name, "Trojan");
}

TEST(SeparateFirstAndLastNames, MultipleSpaces) {
  std::string full_name = "Tommy Trojan Second";
  std::string first_name;
  std::string last_name;
  CPPLib lib;
  std::cout << "full_name: " << full_name << std::endl;
  lib.SeparateFirstAndLastNames(full_name, first_name, last_name);
  std::cout << "expected first name:"<<"Tommy"<<std::endl;
  std::cout << "expected last name:"<<"Trojan Second"<<std::endl;
  std::cout << "output first name:"<< first_name<<std::endl;
  std::cout << "output last name:"<< last_name<<std::endl;
  EXPECT_EQ(first_name, "Tommy");
  EXPECT_EQ(last_name, "Trojan Second");
}
//-----------------------------------------------------------------------------
TEST(NumberOfVowels, NoVowels) {
  CPPLib lib;
  std::string test_string = "XkCBDjk";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfVowels(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 0 <<std::endl;
  EXPECT_EQ(result, 0);
}

TEST(NumberOfVowels, AllVowels) {
  CPPLib lib;
  std::string test_string = "aieou";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfVowels(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 5 <<std::endl;
  EXPECT_EQ(result, 5);
}

TEST(NumberOfVowels, MultipleVowelsCombined) {
  CPPLib lib;
  std::string test_string = "This is a test";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfVowels(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 4 <<std::endl;
  EXPECT_EQ(result, 4);
}

TEST(NumberOfVowels, MultipleVowelsCombinedChangeCase) {
  CPPLib lib;
  std::string test_string = "ThiS Is A test";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfVowels(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expect: " << 4 <<std::endl;
  EXPECT_EQ(result, 4);
}

TEST(NumberOfConsonants, NonLettersCombinedWithVowels) {
  CPPLib lib;
  std::string test_string = " __+098234BC ao";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfVowels(test_string);
  std::cout << "output: " << result<<std::endl;
  std::cout << "expected: " << 2 <<std::endl;
  EXPECT_EQ(result, 2);
}
//-----------------------------------------------------------------------------
TEST(NumberOfConsonants, NoConsonants) {
  CPPLib lib;
  std::string test_string = "aieou";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expectde: " << 0 <<std::endl;
  EXPECT_EQ(result, 0);
}
TEST(NumberOfConsonants, AllConsonants) {
  CPPLib lib;
  std::string test_string = "XkCBDjk";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expected: " << 7 <<std::endl;
  EXPECT_EQ(result, 7);
}

TEST(NumberOfConsonants, MultipleConsonantsCombinedChangeCase) {
  CPPLib lib;
  std::string test_string = "ThiS Is A test";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expected: " << 7 <<std::endl;
  EXPECT_EQ(result, 7);
}

TEST(NumberOfConsonants, MultipleConsonantsCombined) {
  CPPLib lib;
  std::string test_string = "This is a test";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expected: " << 7 <<std::endl;
  EXPECT_EQ(result, 7);
}

TEST(NumberOfConsonants, NonLetters) {
  CPPLib lib;
  std::string test_string = " __+098234";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expected: " << 0 <<std::endl;
  EXPECT_EQ(result, 0);
}

TEST(NumberOfConsonants, NonLettersCombinedWithConsonants) {
  CPPLib lib;
  std::string test_string = " __+098234BC ao";
  std::cout << "test_string: " << test_string << std::endl;
  int result = lib.NumberOfConsonants(test_string);
  std::cout << "output: " << result <<std::endl;
  std::cout << "expected: " << 2 <<std::endl;
  EXPECT_EQ(result, 2);
}
//-----------------------------------------------------------------------------
TEST(Reverse, Empty) {
  CPPLib lib;
  std::string test_string = "";
  std::cout << "test_string: " << test_string << std::endl;

  lib.Reverse(test_string);
  std::cout << "output: " << test_string<<std::endl;
  std::cout << "expected: " << "" <<std::endl;
  EXPECT_EQ(test_string, "");
}

TEST(Reverse, SingleSize) {
  CPPLib lib;
  std::string test_string = "a";
  std::cout << "test_string: " << test_string << std::endl;

  lib.Reverse(test_string);
  std::cout << "output: " << test_string<<std::endl;
  std::cout << "expected: " << "a" <<std::endl;
  EXPECT_EQ(test_string, "a");
}

TEST(Reverse, OddSize) {
  CPPLib lib;
  std::string test_string = "abc";
  std::cout << "test_string: " << test_string << std::endl;

  lib.Reverse(test_string);
  std::cout << "output: " << test_string<<std::endl;
  std::cout << "expected: " << "cba" <<std::endl;
  EXPECT_EQ(test_string, "cba");
}

TEST(Reverse, EvenSize) {
  CPPLib lib;
  std::string test_string = "abcd";
  std::cout << "test_string: " << test_string << std::endl;

  lib.Reverse(test_string);
  std::cout << "output: " << test_string<<std::endl;
  std::cout << "expected: " << "dcba" <<std::endl;
  EXPECT_EQ(test_string, "dcba");
}
