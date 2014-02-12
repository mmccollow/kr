#include <stdio.h>

/**
 * 1-9: Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 **/
int main() {
	int c, last;
	while((c = getchar()) != EOF) {
		if (c == ' ' && last == ' ') continue;
		last = c;
		putchar(c);
	}
	return(0);
}
