#include "Argument.h"

#include <regex>

bool Argument::IsEmptyOrWhitespace(const std::string &value,
                                   const char *message = "The String cannot be empty or whitespace")
{
    if (value.empty() || value.find_first_not_of(' ') == std::string::npos)
    {
        throw std::runtime_error(message);
    }

    return true;
}

bool Argument::GreatherThan(const int value, const int limit, const char *message)
{
    if (value > limit)
    {
        throw std::runtime_error(message);
    }

    return true;
}

bool Argument::GreatherThan(const std::string &value, const int limit, const char *message)
{
    if (value.length() > limit)
    {
        throw std::runtime_error(message);
    }

    return true;
}

bool Argument::MatchesRegex(const std::string &value, const std::string &pattern, const char *message)
{
    if (!std::regex_match(value, std::regex(pattern)))
    {
        throw std::runtime_error(message);
    }

    return true;
}
