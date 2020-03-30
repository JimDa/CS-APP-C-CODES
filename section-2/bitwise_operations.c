//
// Created by dell on 2020/3/30.
//

#include "bitwise_operations.h"
#include <stdio.h>

void or(int a, int b) {
    printf("a|b=%d\n", a | b);
}

void and(int a, int b) {
    printf("a&b=%d\n", a & b);
}

void not(int a) {
    printf("~a=%d\n", ~a);
}

void exclusive_not(int a, int b) {
    printf("a^b=%d\n", a ^ b);
}