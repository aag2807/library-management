#ifndef ARGUMENT_H
#define ARGUMENT_H
#include <string>


class Argument
{
public:
    //string functions
    static bool IsEmptyOrWhitespace(const std::string &value, const char *message);

    static bool GreatherThan(const std::string &value, const int limit, const char *message);

    static bool MatchesRegex(const std::string &value, const std::string &pattern, const char *message);

    // int functions
    static bool GreatherThan(const int value, const int limit, const char *message);
};


#endif //ARGUMENT_H
