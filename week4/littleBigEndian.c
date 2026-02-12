//program to determine if your system is Big or Little Endian
#include <stdio.h>

int main() {
    int n = 1;
    // little endian if true
    // &n gets the address of n, (char*) casts address, 
    // since char is 1 byte, it gets the 1st byte of the integer
    if(*(char *)&n == 1) {
        printf("Little Endian\n");
    }
    return 0;
}

/*
// Source - https://stackoverflow.com/a/12792301
// Posted by Marcus, modified by community. See post 'Timeline' for change history
// Retrieved 2026-02-09, License - CC BY-SA 4.0

Suppose we are on a 32-bit machine.

If it is little endian, the x in the memory will be something like:

       higher memory
          ----->
    +----+----+----+----+
    |0x01|0x00|0x00|0x00|
    +----+----+----+----+
    A
    |
   &x
so (char*)(&x) == 1. 
(MeiLi note: least significant bit (LSB) is stored at lowest memory address)

If it is big endian, it will be:

    +----+----+----+----+
    |0x00|0x00|0x00|0x01|
    +----+----+----+----+
    A
    |
   &x
so this one will be '0'.
*/