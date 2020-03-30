//
// Created by dell on 2020/3/30.
//

#include <stdio.h>
#include "show_bytes.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    printf("show_bytes function called successfully!!!\n");
//    printf(start);
//    printf("\n");
    size_t i;
    for (int i = 0; i < len; ++i) {
        printf("%.2x", start[i]);
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

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}
