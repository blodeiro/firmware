#include "firmware.h"
#include <gtest/gtest.h>
 
TEST(DegTest, DegTest) 
    { 
    ASSERT_EQ(102.4, pulsesToDegrees(9));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }