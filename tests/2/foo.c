#include <stdio.h>
int foo(void) {
	if( sizeof(void*) == 8 ) {
		printf("CORRECT\n");
	} else {
		printf("ALMOST CORRECT\n");
	}
}
