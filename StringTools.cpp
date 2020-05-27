
#include <algorithm>

#include "StringTools.hpp"

std::string StringUpper(const std::string &s)
{
    std::string result(s.size(), 0);
    std::transform(s.begin(), s.end(), result.begin(), [](unsigned char c) { return toupper(c); }); // Yes a lambda :)

    return result;
}
