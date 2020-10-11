#ifndef GTEST_SAMPLE2_H_
#define GTEST_SAMPLE2_H_

#include <string.h>


// 一个简单的string类.
class MyString {
private:
    const char* c_string_;
    const MyString& operator=(const MyString& rhs);

public:

    // 克隆一个0-terminated C string, 用new分配内存.
    static const char* CloneCString(const char* a_c_string);

    ////////////////////////////////////////////////////////////
    //
    // 构造函数
    // 默认构造函数构造一个 NULL string.
    MyString() : c_string_(NULL) {}

    // 通过克隆一个0-terminated C string，构造 MyString
    explicit MyString(const char* a_c_string) : c_string_(NULL) {
        Set(a_c_string);
    }

    // 拷贝构造函数
    MyString(const MyString& string) : c_string_(NULL) {
        Set(string.c_string_);
    }

    ////////////////////////////////////////////////////////////
    //
    // D'tor.  MyString 是一个final 类, 因此其析构函数不必用virtual
    ~MyString() { delete[] c_string_; }

    // 获取MyString所代表的 0-terminated C string.
    const char* c_string() const { return c_string_; }

    size_t Length() const {
        return c_string_ == NULL ? 0 : strlen(c_string_);
    }

    // 设置MyString所代表的 0-terminated C string.
    void Set(const char* c_string);
};


#endif  // GTEST_SAMPLE2_H_