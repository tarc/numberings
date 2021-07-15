#include "numberings.hpp"

#include <cstdint>

#include "gtest/gtest.h"
#include "boost/mpl/equal.hpp"
#include "boost/static_assert.hpp"
#include "boost/static_assert.hpp"

class TypeSortTest : public ::testing::Test
{
};

TEST_F(TypeSortTest, singleType)
{
  ::testing::StaticAssertTypeEq<int, int>();
}

TEST_F(TypeSortTest, singleTypeSorted)
{
  BOOST_STATIC_ASSERT((
      boost::mpl::equal<
          numberings::type_sort<int>::type,
          boost::mpl::vector<int>>::type::value));
}

TEST_F(TypeSortTest, fixedWidthIntSequence)
{
  BOOST_STATIC_ASSERT((
      boost::mpl::equal<
          numberings::type_sort<uint64_t, int32_t, int16_t, uint8_t>::type,
          boost::mpl::vector<uint8_t, int16_t, int32_t, uint64_t>>::type::value));
}
