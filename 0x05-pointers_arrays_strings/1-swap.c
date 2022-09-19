/**
 * File: 1-swap.c
 * Auth: Destiny Salami
 */
#include "main.h"

/**
 * 1-swap.c - Swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
    *a = b;
    *b = a;
}