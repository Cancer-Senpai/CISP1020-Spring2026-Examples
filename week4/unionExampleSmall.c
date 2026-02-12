/* File: union.c
 * Description: in-class example of using a union. Example by Jacob Sorber
  * YouTube Video: When do I use a union in C or C++, instead of a struct?
 */
#include <stdio.h>

//struct has room for ALL members
typedef struct{
    int x;
    float y;
    char z;
} mystr;

//similar, but union assumes you're only going to store 
// data in 1 member at a time.
// each member shares the same memory location
typedef union{
    int x; //4 bytes, largest member
    float y;
    char z;
} myunion;

int main () {

    mystr s;
    s.x = 45;
    s.y = 9.87;
    s.z = 'H';

    myunion u;
    u.x = 45;
    u.y = 9.87;
    u.z = 'H';
    
    //this will be bigger than the union
    //sizeof returns a size_t, which needs %zu to print
    printf("struct size: %zu\n", sizeof(mystr));
    printf("{%d, %f, %c}\n", s.x,s.y,s.z);

    //union will only be as big as its biggest member
    printf("union size: %zu\n", sizeof(myunion));
    printf("{%d, %f, %c}\n", u.x,u.y,u.z);
   
   return 0;
}
