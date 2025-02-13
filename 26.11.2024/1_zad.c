#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("%-10s %-10s %-10s %-20s %-20s %-20s \n", "type_name", "form_print", "bytes", "max_sign", "min_sign", "max_unsign");
    printf("%-10s %-10s %-10zu %-20d %-20d %-20u \n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, UINT_MAX);
    printf("%-10s %-10s %-10zu %-20ld %-20ld %-20lu \n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, ULONG_MAX);
    printf("%-10s %-10s %-10zu %-20lld %-20lld %-20llu \n", "long long", "%lld", sizeof(long long), LLONG_MAX, LLONG_MIN, ULLONG_MAX);
    printf("%-10s %-10s %-10zu %-20hd %-20hd %-20hu \n", "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, USHRT_MAX);
    printf("%-10s %-10s %-10zu %-20hhd %-20hhd %-20hhu \n", "char", "%hhd", sizeof(char), CHAR_MAX, CHAR_MIN, UCHAR_MAX);
}