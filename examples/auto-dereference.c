#include <tcclib.h>

typedef struct Point {
   int x;
} Point;

int main() {
   Point p = { 0 };
   printf( "x = %d\n", p.x );
   Point *ptr = &p;
   printf( "x from pointer = %d\n", ptr->x );
   printf( "(auto dereference) x from pointer = %d\n", ptr.x );
   Point **pptr = &ptr;
   printf( "x from pointer to pointer = %d\n", ( *pptr )->x );
   printf( "(auto dereference) x from pointer = %d\n", pptr.x );
   return 0;
}
