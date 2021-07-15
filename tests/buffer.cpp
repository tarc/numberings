#include "numberings.hpp"

#include <gtest/gtest.h>

template <class T>
struct size_of_buffer : public ::testing::Test
{
  static constexpr const size_t value = sizeof(numberings::buffer<T>::value);
};

TYPED_TEST_SUITE_P(size_of_buffer);

TYPED_TEST_P(size_of_buffer, IsSizeOfType)
{
  EXPECT_EQ(size_of_buffer<TypeParam>::value, sizeof(TypeParam));
};

REGISTER_TYPED_TEST_SUITE_P(size_of_buffer, IsSizeOfType);

class pod
{
public:
  char c;
  int i;
  float f;
  const char *cp;
};

class pod2
{
public:
  char c;
  pod p;
  int i;
  pod *pp;
  float f;
  pod p2;
  const char *cp;
};

typedef ::testing::Types<
    char,
    int,
    float,
    wchar_t,
    pod,
    pod2>
    TriviallyConstructibleTypes;

INSTANTIATE_TYPED_TEST_SUITE_P(BufferTest, size_of_buffer, TriviallyConstructibleTypes);
