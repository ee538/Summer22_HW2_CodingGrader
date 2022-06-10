#include <iostream>
#include <vector>

#include "gtest/gtest.h"
#include "q.h"
// Write several test cases for each function.
//-----------------------------------------------------------------------------

TEST(SwapByPointer, aIsNull) {
  float a = 1;

  CPPLib lib;
  lib.SwapByPointer(&a, nullptr);
  std::cout<<"input1: &1, input2: nullptr"<<std::endl;
  std::cout<<"output: "<< a<<std::endl;
  std::cout<<"expected: "<<1<<std::endl;
  EXPECT_EQ(a, 1);
}

TEST(SwapByPointer, bIsNull) {
  float b = 2;

  CPPLib lib;
  lib.SwapByPointer(nullptr, &b);
  std::cout<<"input1: nullptr, input2: &2"<<std::endl;
  std::cout<<"output: "<< b<<std::endl;
  std::cout<<"expected: "<< 2<<std::endl;
  EXPECT_EQ(b, 2);
}

TEST(SwapByPointer, test1) {
  float a = 1;
  float b = 2;

  CPPLib lib;
  lib.SwapByPointer(&a, &b);
  std::cout<<"input1: &1, input2: &2"<<std::endl;
  std::cout<<"output a: "<< a<<std::endl;
  std::cout<<"expected a: "<< 2<<std::endl;
  std::cout<<"output b: "<< b<<std::endl;
  std::cout<<"expected b: "<< 1<<std::endl;
  EXPECT_EQ(a, 2);
  EXPECT_EQ(b, 1);
}
//-----------------------------------------------------------------------------

TEST(SwapByReference, test1) {
  float a = 1;
  float b = 2;

  CPPLib lib;
  lib.SwapByReference(a, b);  
  std::cout<<"input1: &1, input2: &2"<<std::endl;
  std::cout<<"output a: "<< a<<std::endl;
  std::cout<<"expected a: "<< 2<<std::endl;
  std::cout<<"output b: "<< b<<std::endl;
  std::cout<<"expected b: "<< 1<<std::endl;
  EXPECT_EQ(a, 2);
  EXPECT_EQ(b, 1);
}
//-----------------------------------------------------------------------------
