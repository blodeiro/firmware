#include "firmware.h"
#include <gtest/gtest.h>
 
TEST(SumaTest, IntNums) 
    { 
    ASSERT_EQ(6, suma(2,4));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }