#include <stdio.h>

int main(void)
{

    float fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        // BEGIN (write your solution here)
        printf("%3.2f : %6.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
        // END

    return 0;
}
