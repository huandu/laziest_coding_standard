// Laziest Coding Standard for C++ source file.
//
// Copyright (c) Huan Du (http://huandu.me/+). All rights reserved.
// Licensed under a Creative Commons Attribution 3.0 Unported License.

#include <iostream>

#include "C++.h"

using namespace std;

SAMPLE_NS_BEGIN

void HelloWorld::text(const String &str) {
    _text = str;
}

auto HelloWorld::text() const -> const String & {
    return _text;
}

size_t HelloWorld::count(char c) const {
    size_t cnt = 0;

    for (size_t i = 0, size = text_.size(); i < size; i++) {
        if (c == _text[i]) {
            cnt++;
        }
    }

    return cnt;
}

SAMPLE_NS_END

using namespace sample;

int main() {
    HelloWorld world;

    world.text("hello world");
    cout << "build with clang:\tclang -o test_C++ -std=c++11 -lstdc++ C++.cpp" << endl;
    cout << "text in HellowWorld:\t" << world.text() << endl;

    return 0;
}
