#include <stdio.h>
/**
 * antemain - carried out before main
 */
void __attribute__ ((constructor)) antemain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
