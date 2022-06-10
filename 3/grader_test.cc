#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(Calculate, SimpleTests) {
  CPPLib lib;
  int a = 10;
  int b = 9;
  std::cout << "input: 10, 9 "<<std::endl;
  std::cout<<"kAdd output: "<< lib.Calculate(a, b, Operation::kAdd) << std::endl;
  std::cout<<"kAdd expected: "<< 19 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kAdd), 19);

  std::cout<<"kSubtract output: "<< lib.Calculate(a, b, Operation::kSubtract) << std::endl;
  std::cout<<"kSubtract expected: "<< 1 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kSubtract), 1);

  std::cout<<"kMultiplication output: " << lib.Calculate(a, b, Operation::kMultiplication) << std::endl;
  std::cout<<"kMultiplication expected: " << 90 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kMultiplication), 90);

  std::cout<<"kDivision output: " << lib.Calculate(a, b, Operation::kDivision) << std::endl;
  std::cout<<"kDivision expected: " << "0.8 to 1.2" << std::endl;  
  EXPECT_NEAR(lib.Calculate(a, b, Operation::kDivision), 1, 0.2);

  std::cout<<"kBitwise_AND output: " << lib.Calculate(a, b, Operation::kBitwise_AND) << std::endl;
  std::cout<<"kBitwise_AND expected: " << 0x8 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kBitwise_AND), 0x8);

  std::cout<<"kBitwise_OR output: " << lib.Calculate(a, b, Operation::kBitwise_OR) << std::endl;
  std::cout<<"kBitwise_OR expected: " << 0xB << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kBitwise_OR), 0xB);

  std::cout<<"kBitwise_XOR output: " << lib.Calculate(a, b, Operation::kBitwise_XOR) << std::endl;
  std::cout<<"kBitwise_XOR expected: " << 0x3 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kBitwise_XOR), 0x3);

  std::cout<<"kShift_left output: " << lib.Calculate(a, b, Operation::kShift_left) << std::endl;
  std::cout<<"kShift_left expected: " << 0x1400 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kShift_left), 0x1400);

  std::cout<<"kShift_right output: " << lib.Calculate(a, b, Operation::kShift_right) << std::endl;
  std::cout<<"kShift_right expected: " << 0x0 << std::endl;  
  EXPECT_EQ(lib.Calculate(a, b, Operation::kShift_right), 0x0);
}
//-----------------------------------------------------------------------------
