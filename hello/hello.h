#pragma once

#include <string>
#include "hello_global.h"

HELLO_API std::string hello();

class HELLO_API foo
{
public:
    std::string show();
};