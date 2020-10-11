#include "my_string.h"
#include <string.h>

//克隆一个0-terminated C string, 用new分配内存.
const char* MyString::CloneCString(const char* a_c_string) 
{
    if (a_c_string == NULL) return NULL;

    const size_t len = strlen(a_c_string);
    char* const clone = new char[ len + 1 ];
    memcpy(clone, a_c_string, len + 1);

    return clone;
}

// 设置MyString所代表的 0-terminated C string.
void MyString::Set(const char* c_string) 
{
    // Makes sure this works when c_string == c_string_
    const char* const temp = MyString::CloneCString(c_string);
    delete[] c_string_;
    c_string_ = temp;
}