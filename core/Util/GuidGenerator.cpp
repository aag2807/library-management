#include "GuidGenerator.h"

#include <sstream>
#include <__random/random_device.h>

std::string GuidGenerator::Generate()
{
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 15);
    std::uniform_int_distribution<int> dist2(8, 11);

    std::stringstream ss;
    int i;

    ss << std::hex;
    for (i = 0; i < 8; i++)
    {
        ss << dist(rd);
    }
    ss << "-";
    for (i = 0; i < 4; i++)
    {
        ss << dist(rd);
    }
    ss << "-4"; // The version 4 UUID
    for (i = 0; i < 3; i++)
    {
        ss << dist(rd);
    }
    ss << "-";
    ss << dist2(rd); // The variant
    for (i = 0; i < 3; i++)
    {
        ss << dist(rd);
    }
    ss << "-";
    for (i = 0; i < 12; i++)
    {
        ss << dist(rd);
    }

    return ss.str();
}
