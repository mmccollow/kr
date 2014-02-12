#include <stdio.h>

/**
 * 1-6: Verify that the expression getchar() != EOF is 0 or 1
 **/
int main() {
	int c;
	for(;;) {
		c = (getchar() != EOF);
		printf("%d\n", c);
		if (c == 0) break;
	}
	return(0);
}
