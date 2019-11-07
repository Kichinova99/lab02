#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main() {
        printf("%ld %d %d\n", sizeof(int), INT_MIN, INT_MAX);
        printf("%ld %d %d\n", sizeof(unsigned int), INT_MIN, UINT_MAX);
        printf("%ld %ld %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
        printf("%ld %ld %ld\n", sizeof(unsigned long), LONG_MIN, ULONG_MAX);
        printf("%ld %e %e\n", sizeof(float), FLT_MIN, FLT_MAX);
        printf("%ld %e %e\n", sizeof(double), DBL_MIN, DBL_MAX);
        printf("%ld %Le %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
        printf("%ld %d %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
        printf("%ld %d %d\n", sizeof(unsigned char), SCHAR_MIN, UCHAR_MAX);
        printf("%ld %d %d\n", sizeof(bool), true, false);
}
