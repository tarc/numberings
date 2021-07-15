#include "numberings.hpp"

#include <gtest/gtest.h>

TEST(BufferTest, sizeOfBuffer) {
  EXPECT_EQ(sizeof(numberings::buffer<int>::value), sizeof(int));
}
