// Laziest Coding Standard for C++ source file.
//
// Copyright (c) Huan Du (http://huandu.me/+). All rights reserved.
// Licensed under a Creative Commons Attribution 3.0 Unported License.
#include <string>

#define SAMPLE_NS_BEGIN namespace sample {
#define SAMPLE_NS_END   }

SAMPLE_NS_BEGIN

class HelloWorld
{
    typedef ::std::string String;

private:
    int32_t worldNumber_;
    String text_;

public:
    HelloWorld()
    : worldNumber_(1)
    {}

public:
    void text(const String &str);
    const String & text() const;

    // find how may c exists in saved text.
    size_t count(char c) const;
};

SAMPLE_NS_END
