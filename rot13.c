#include <stdio.h>

//For testing
//Alias debug("Test\n") to fprintf(stderr, "Test\n")
#define debug(...) fprintf (stderr, __VA_ARGS__)

//For turning in
//#define debug(...)

int main( int argc, char ** argv ) {
	char c;
	while( EOF != (c = getchar())) {
		c = ((c+13)%26);
		putchar( c );
	}
}
