
#include <algorithm>
#include <sstream>

#include "StringTools.hpp"

std::string StringUpper(const std::string &s)
{
    std::string result(s.size(), 0);
    std::transform(s.begin(), s.end(), result.begin(), [](unsigned char c) { return toupper(c); }); // Yes a lambda :)

    return result;
}

// https://stackoverflow.com/questions/4643512/replace-substring-with-another-substring-c
void FindAndReplaceInternal(std::string& s, const std::string &what, const std::string &by)
{

	if ((s.length() == 0) || (what.length() == 0) || (by.length() == 0))
	{
		return;
	}

	size_t idx = 0;
	for (;;)
	{
		idx = s.find(what, idx);
		if (idx == std::string::npos)
		{
			return;
		}

		s.replace(idx, what.length(), by);
		idx += by.length();
	}
}

std::string FindAndReplace(const std::string& s, const std::string &what, const std::string &by)
{
	std::string result(s);

	FindAndReplaceInternal(result, what, by);

	return result;
}

std::string LeftDollar(const std::string &s, const std::string &subs)
{
	size_t index = s.find(subs);
	if (index == std::string::npos)
	{
		return "";
	}
	else
	{
		return s.substr(0, index);
	}	
}

std::string RightDollar(const std::string &s, const std::string &subs)
{
	size_t index = s.find(subs);
	if (index == std::string::npos)
	{
		return "";
	}
	else
	{
		return s.substr(index + subs.size());
	}
}

bool StringStartsWith(const std::string &s, const std::string &subs)
{
	return (s.find(subs, 0) != std::string::npos);
}

bool StringEndsWith(const std::string &s, const std::string &subs)
{
	return (s.rfind(subs, std::string::npos) != std::string::npos);
}

bool StringInString(const std::string &s, const std::string &subs)
{
	return (s.find(subs) != std::string::npos);
}

// Waiting for the C++17 standard... See
// https://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring
std::string StringTrim(const std::string &value)
{
	std::string result;
	std::stringstream ss;

	ss << value;
	ss >> result;

	return result;
}
