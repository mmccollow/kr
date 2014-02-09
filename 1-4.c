#include <stdio.h>

/* print Celsius-Fahrenheit table
		for celsius = 0, 20, ..., 300; floating-point version */
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("Celsius Fahrenheit \n");
	while (celsius <= upper) {
		fahr = (celsius / (5.0/9.0)) + 32.0;
		printf("%3.0f %8.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
