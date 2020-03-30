//
// Created by dell on 2020/3/30.
//

#ifndef CCODES_SHOW_BYTES_H
#define CCODES_SHOW_BYTES_H
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len);
void show_int(int x);
void show_long(long x);
void show_short(short x);
void show_pointer(void *x);
void show_float(float x);

#endif //CCODES_SHOW_BYTES_H
