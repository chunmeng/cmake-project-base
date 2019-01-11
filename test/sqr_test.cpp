#include "sqr.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace testing;

class SqrTest : public Test {
};

TEST_F(SqrTest, sampleTest)
{
    EXPECT_EQ(25ull, sqr(5));
}