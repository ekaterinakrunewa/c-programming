#include <stdio.h>
#include <limits.h>

int main(){
    printf("char %%c %d %d %u\n", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
    printf("short %%hd %d %d %u\n", SHRT_MAX, SHRT_MIN, USHRT_MAX);
    printf("int %%d  %d %d %u\n", INT_MAX, INT_MIN, UINT_MAX);
    printf("long %%ld %ld %ld %lu\n", LONG_MAX, LONG_MIN, ULONG_MAX);
    printf("long long %%lld %lld %lld %llu\n", LLONG_MAX, LLONG_MIN, ULLONG_MAX);
    return 0;
}