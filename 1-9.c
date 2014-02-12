#include <stdio.h>

int main() {
	int c, last;
	while((c = getchar()) != EOF) {
		if (c == ' ' && last == ' ') continue;
		last = c;
		putchar(c);
	}
	return(0);
}
