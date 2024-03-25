#include "State.h"
#include <stdexcept>

bool State::IsTrue(bool expr, const char *message = "Expected true received false")
{
    if (!expr)
    {
        throw std::runtime_error(message);
    }
    return true;
}

bool State::IsFalse(bool expr, const char *message = "Expected false received true")
{
    if (expr)
    {
        throw std::runtime_error(message);
    }
    return true;
}
