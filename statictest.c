//
// Created by dell on 2020/1/16.
//

#include <stdio.h>

static int count = 10;

void founc();

//void main() {
//    while (count--) {
//        founc();
//    }
//}

void founc() {
    static int num = 5;
    num++;
    printf("numΪ%d,countΪ%d\n", num, count);
}

