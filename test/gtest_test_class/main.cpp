#include "my_string.h"
#include "gtest/gtest.h"

// 本例用于测试MyString

// 测试默认构造函数
TEST(MyString, DefaultConstructor) 
{
    const MyString s;

    EXPECT_STREQ(NULL, s.c_string());
    EXPECT_EQ(0u, s.Length());
}

const char kHelloString[] = "Hello, world!";

//测试带一个c string的构造函数
TEST(MyString, ConstructorFromCString) 
{
    const MyString s(kHelloString);
    EXPECT_TRUE(strcmp(s.c_string(), kHelloString) == 0);
    EXPECT_EQ(sizeof(kHelloString)/sizeof(kHelloString[0]) - 1,
        s.Length());
}

// 测试拷贝构造函数
TEST(MyString, CopyConstructor) 
{
    const MyString s1(kHelloString);
    const MyString s2 = s1;
    EXPECT_TRUE(strcmp(s2.c_string(), kHelloString) == 0);
}

// 测试Set方法
TEST(MyString, Set) 
{
    MyString s;

    s.Set(kHelloString);
    EXPECT_TRUE(strcmp(s.c_string(), kHelloString) == 0);

    // 当Set方法的参数与MyString中的c string 指针相同时，设定依然有作用
    s.Set(s.c_string());
    EXPECT_TRUE(strcmp(s.c_string(), kHelloString) == 0);

    // Can we set the MyString to NULL?
    s.Set(NULL);
    EXPECT_STREQ(NULL, s.c_string());
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    getchar();
}