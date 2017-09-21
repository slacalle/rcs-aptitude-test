#include <stdio.h>
int foo(void) {
	// Check sure we're running on the new 64b system, by Jim 2010
	if( sizeof(void*) == 8 ) {
		printf("CORRECT\n");
	} else {
		printf("ALMOST CORRECT\n");
	}
}
