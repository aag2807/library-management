#ifndef STATE_H
#define STATE_H

class State
{
public:
    static bool IsTrue( bool expr, const char* message );

    static bool IsFalse( bool expr, const char* message );
};

#endif
