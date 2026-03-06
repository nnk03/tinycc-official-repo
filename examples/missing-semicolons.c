/*
 * Inspiration from https://youtu.be/6CV8HyqJ_9w?si=l7NR29RbqzSeF45d
 */
#include <stdlib.h>
#include <tcclib.h>

int add( int x, int y ) {
    return x + y;
}

int main( int argc, char *argv[] ) {
   printf( "Hello World\n" )
   printf( "Hello World\n" )
   printf( "Hello World\n" )
   printf( "Hello World\n" )
   printf( "Hello World\n" )
   printf( "%d\n", add( 6, 7 ) );

   return EXIT_SUCCESS;
}

