#include <iostream>
#include <vector>

#include "gmock/gmock-more-matchers.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "q.h"
using ::testing::ElementsAre;
using ::testing::ElementsAreArray;
using ::testing::UnorderedElementsAre;
using ::testing::UnorderedElementsAreArray;
// Write several test cases for each function.
//-----------------------------------------------------------------------------
TEST(UniqueVectorNotBySet, test1) {
  std::vector<int> v = {1, 1, 2, 2};
  CPPLib lib;
  lib.UniqueVectorNotBySet(v);

  EXPECT_THAT(v, ElementsAreArray({1, 2}));
}

TEST(UniqueVectorNotBySet, test2) {
  std::vector<int> v = {};
  CPPLib lib;
  lib.UniqueVectorNotBySet(v);

  EXPECT_TRUE(v.empty());
}

TEST(UniqueVectorNotBySet, test3) {
  std::vector<int> v = {1, 2};
  CPPLib lib;
  lib.UniqueVectorNotBySet(v);

  EXPECT_THAT(v, ElementsAreArray({1, 2}));
}
//-----------------------------------------------------------------------------
TEST(UniqueVectorBySet, test1) {
  std::vector<int> v = {1, 1, 2, 2};
  CPPLib lib;
  lib.UniqueVectorBySet(v);

  EXPECT_THAT(v, ElementsAreArray({1, 2}));
}

TEST(UniqueVectorBySet, test2) {
  std::vector<int> v = {};
  CPPLib lib;
  lib.UniqueVectorBySet(v);

  EXPECT_TRUE(v.empty());
}
TEST(UniqueVectorBySet, test3) {
  std::vector<int> v = {1, 2};
  CPPLib lib;
  lib.UniqueVectorBySet(v);

  EXPECT_THAT(v, ElementsAreArray({1, 2}));
}
//-----------------------------------------------------------------------------
TEST(IntersectVectors, test1) {
  std::vector<int> v1 = {1, 1, 2, 2};
  std::vector<int> v2 = {3, 3, 2};

  CPPLib lib;
  auto actual = lib.IntersectVectors(v1, v2);

  EXPECT_THAT(actual, ElementsAreArray({2}));
}

TEST(IntersectVectors, test2) {
  std::vector<int> v1 = {1, 1, 2, 2, 3};
  std::vector<int> v2 = {3, 3, 2};

  CPPLib lib;
  auto actual = lib.IntersectVectors(v1, v2);

  EXPECT_THAT(actual, ElementsAreArray({2, 3}));
}
