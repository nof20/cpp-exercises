// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int x = 42;
    int *y = &x;
    printf("Hello, %d\n", *y);
    return 0;
}
