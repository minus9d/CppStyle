#pragma once

#include <string>

class MyStruct
{
public:
    // 構造体のデータメンバには末尾にアンダースコアを付けない
    std::string name;

public:
    MyStruct();
    ~MyStruct();

};

