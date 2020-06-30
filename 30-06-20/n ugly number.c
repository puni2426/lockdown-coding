/*Write a C Program to generate first n Ugly Numbers*/
#include <limits.h>
#include <stdio.h>

#if 0
typedef unsigned long long ugly_t;
#define UGLY_MAX  (~(ugly_t)0)
#else
typedef __uint128_t ugly_t;
#define UGLY_MAX  (~(ugly_t)0)
#endif

int print_ugly(int i, ugly_t u) {
    char buf[64], *p = buf + sizeof(buf);

    *--p = '\0';
    do { *--p = '0' + u % 10; } while ((u /= 10) != 0);
    return printf("%d: %s\n", i, p);
}

int main() {
    int i = 0, n2 = 0, n3 = 0, n5 = 0;
    ugly_t u, ug2 = 1, ug3 = 1, ug5 = 1;
#define UGLY_COUNT  20
    ugly_t ugly[UGLY_COUNT];

    while (i < UGLY_COUNT) {
        u = ug2;
        if (u > ug3) u = ug3;
        if (u > ug5) u = ug5;
        if (u == UGLY_MAX)
            break;
        ugly[i++] = u;
        print_ugly(i, u);
        if (u == ug2) {
            if (ugly[n2] <= UGLY_MAX / 2)
                ug2 = 2 * ugly[n2++];
            else
                ug2 = UGLY_MAX;
        }
        if (u == ug3) {
            if (ugly[n3] <= UGLY_MAX / 3)
                ug3 = 3 * ugly[n3++];
            else
                ug3 = UGLY_MAX;
        }
        if (u == ug5) {
            if (ugly[n5] <= UGLY_MAX / 5)
                ug5 = 5 * ugly[n5++];
            else
                ug5 = UGLY_MAX;
        }
    }
    return 0;
}
