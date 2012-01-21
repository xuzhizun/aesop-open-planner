/// @file AesopTest.cpp
/// @brief Main file of AesopTest module.

#include "gtest/gtest.h"
#include "AesopTest.h"

// Test cases for each class.
#include "tests/AesopTypesTest.h"
#include "tests/AesopObjectsTest.h"

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
