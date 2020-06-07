#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]) {
    uint8_t   uint8;
    uint16_t  uint16;
    uint32_t  uint32;
    uint64_t  uint64;

    int8_t int8;
    int16_t int16;
    int32_t int32;
    int64_t int64;

    int     def_int;
    char    def_byte;
    float   def_float;
    long    def_long;

    printf("uint8: %u\n", sizeof(uint8));
    printf("uint16: %u\n", sizeof(uint16));
    printf("uint32: %u\n", sizeof(uint32));
    printf("uint64: %u\n", sizeof(uint64));

    printf("\n");
    printf("int8: %u\n", sizeof(int8));
    printf("int16: %u\n", sizeof(int16));
    printf("int32: %u\n", sizeof(int32));
    printf("int64: %u\n", sizeof(int64));

    printf("\n");
    printf("int: %u\n", sizeof(def_int));
    printf("byte: %u\n", sizeof(def_byte));
    printf("float: %u\n", sizeof(def_float));
    printf("long: %u\n", sizeof(def_long));
}
