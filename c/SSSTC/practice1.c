#include <stdio.h>
typedef unsigned int uint32_t;
typedef union {
    uint32_t all32;
    struct {
        uint32_t a    :1;
        uint32_t b    :1;
        uint32_t c    :30;
    }
} t32;

int main() {
    t32 test;
    test.a = 1;
    test.b = 0;
    test.c = 21;
    printf("%d\n", test.all32);
    return 0;
}