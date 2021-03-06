#include <gtest/gtest.h>

#include "numberings.hpp"

TEST(TrivialTest, shouldAlwaysSucceed)
{
    EXPECT_EQ(2 + 2, 4);
}

TEST(TrivialTest, versionIsVersion)
{
    EXPECT_STREQ(numberings::version(), PROJECT_VER);
}
