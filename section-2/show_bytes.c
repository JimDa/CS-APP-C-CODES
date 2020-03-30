//
// Created by dell on 2020/3/30.
//

#include <stdio.h>
#include "show_bytes.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    printf("show_bytes function called successfully!!!\n");
    size_t i;
    for (int j = 0; j < len; ++j) {
        printf(" %.2x", start[j]);
        printf("\n");
    }
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_void(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}
