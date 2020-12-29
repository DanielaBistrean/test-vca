#include <stdio.h>
#include <foo/foo.h>

int main (void)
{
    puts("Testing the shared library...");
    foo();
    return 0;
}
