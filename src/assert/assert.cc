#include <stdio.h>
#include <assert.h>

int main()
{
    int x = 7;

    x = 9;


    assert(x ==7); // Assertion failed: (x ==7), function main, file assert.cc, line 11.
    // exited with code=134 in 0.127 seconds

    return 0;

}