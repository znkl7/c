#include <stdio.h>

main () {
	float miles, kilometers;
	float step, upper, lower;

	lower = 0;
	upper = 300;
	step = 20;

	kilometers = lower;

	while (kilometers <= 300) {
		miles = kilometers * 0.621;
		printf("%3.2f : %3.2f\n", kilometers, miles);
		kilometers = kilometers + step;
	}
return 0;
}