// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    for (int i : arr)
    {
        printf("Got %d\n", i);
    }

    return 0;
}
