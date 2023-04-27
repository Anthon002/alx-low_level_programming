#include<stdio.h>

/**
 * _printBeforeMain - prints out string before main function
 */
void _printBeforeMain(void) __attribute__ ((constructor));

/**
 * _printBeforeMain - prints out string before main function
 */
void _printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
