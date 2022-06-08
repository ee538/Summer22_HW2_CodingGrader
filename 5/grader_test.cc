#include <iostream>
#include <vector>

#include "gmock/gmock-more-matchers.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "q.h"
using ::testing::ElementsAre;
using ::testing::ElementsAreArray;
// Write several test cases for each function.
//-----------------------------------------------------------------------------
// Make sure you add some test cases to check for nullptr.
TEST(ConcatenateDynamicArrays, BothWithNonZeroSize) {
  CPPLib lib;

  const int size_1 = 5;
  const int size_2 = 4;

  int* arr_1 = new int[size_1];
  int* arr_2 = new int[size_2];

  for (int i = 0; i < size_1; i++) {
    arr_1[i] = i;
  }

  for (int i = 0; i < size_2; i++) {
    arr_2[i] = i + size_1;
  }

  auto actual = lib.Concatenate(arr_1, size_1, arr_2, size_2);

  std::vector<int> actual_vector;

  for (int i = 0; i < size_1 + size_2; i++) {
    actual_vector.push_back(actual[i]);
  }

  EXPECT_THAT(actual_vector, ElementsAreArray({0, 1, 2, 3, 4, 5, 6, 7, 8}));
}

TEST(ConcatenateDynamicArrays, FirstWithZeroSize) {
  CPPLib lib;

  const int size_1 = 0;
  const int size_2 = 4;

  int* arr_1 = nullptr;
  int* arr_2 = new int[size_2];

  for (int i = 0; i < size_2; i++) {
    arr_2[i] = i + size_1;
  }

  auto actual = lib.Concatenate(arr_1, size_1, arr_2, size_2);

  std::vector<int> actual_vector;

  for (int i = 0; i < size_1 + size_2; i++) {
    actual_vector.push_back(actual[i]);
  }

  EXPECT_THAT(actual_vector, ElementsAreArray({0, 1, 2, 3}));
}

TEST(ConcatenateDynamicArrays, SecondWithZeroSize) {
  CPPLib lib;

  const int size_1 = 5;
  const int size_2 = 0;

  int* arr_1 = new int[size_1];
  int* arr_2 = nullptr;

  for (int i = 0; i < size_1; i++) {
    arr_1[i] = i + size_1;
  }

  auto actual = lib.Concatenate(arr_1, size_1, arr_2, size_2);

  std::vector<int> actual_vector;

  for (int i = 0; i < size_1 + size_2; i++) {
    actual_vector.push_back(actual[i]);
  }

  EXPECT_THAT(actual_vector, ElementsAreArray({5, 6, 7, 8, 9}));
}

//-----------------------------------------------------------------------------

TEST(ConcatenateVectors, BothNonEmpty) {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {5, 6};
  CPPLib lib;

  EXPECT_THAT(lib.Concatenate(v1, v2), ElementsAreArray({1, 2, 3, 4, 5, 6}));
}

TEST(ConcatenateVectors, FirstEmpty) {
  std::vector<int> v1;
  std::vector<int> v2 = {5, 6};
  CPPLib lib;

  EXPECT_THAT(lib.Concatenate(v1, v2), ElementsAreArray({5, 6}));
}

TEST(ConcatenateVectors, SecondEmpty) {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2;
  CPPLib lib;

  EXPECT_THAT(lib.Concatenate(v1, v2), ElementsAreArray({1, 2, 3, 4}));
}

TEST(ConcatenateVectors, BothEmpty) {
  std::vector<int> v1;
  std::vector<int> v2;
  CPPLib lib;

  EXPECT_TRUE(lib.Concatenate(v1, v2).empty());
}
//-----------------------------------------------------------------------------
