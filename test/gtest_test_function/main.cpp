#include "gtest/gtest.h"
#include "TestFunction.h" 


TEST(MyAdd, 4plus4) 
{
    EXPECT_EQ(MyAdd(4,4), 8);
    EXPECT_TRUE(true);
}//通过

TEST(MyAdd, 5plus5)
{
    EXPECT_EQ(MyAdd(5, 5), 8);
    EXPECT_TRUE(true);
}//不通过

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);//将命令行参数传递给gtest
    return RUN_ALL_TESTS(); //RUN_ALL_TESTS()运行所有测试案例
    system("pause");
}