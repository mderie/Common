
#ifndef STRING_TOOLS
#define STRING_TOOLS

#include <string>

std::string StringUpper(const std::string &s);
void FindAndReplaceInternal(std::string &s, const std::string &what, const std::string &by);
std::string FindAndReplace(const std::string &s, const std::string &what, const std::string &by);
std::string LeftDollar(const std::string &s, const std::string& subs);
std::string RightDollar(const std::string &s, const std::string& subs);
bool StringStartsWith(const std::string &s, const std::string& subs);
bool StringEndsWith(const std::string &s, const std::string& subs);
bool StringInString(const std::string &s, const std::string& subs);
std::string StringTrim(const std::string &s);

#endif // STRING_TOOLS
