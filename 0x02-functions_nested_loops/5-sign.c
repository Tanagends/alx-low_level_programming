#include <stdio.h>
/**
 * print_sign - prints sign.
 * Return:  1 or -1 or 0 (success)
 */

int print_sign(int n)
{
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        putchar('-');
        return -1;
    }
}
