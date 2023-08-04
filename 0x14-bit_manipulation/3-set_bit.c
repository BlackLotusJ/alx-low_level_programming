#include "main.h"
#include <stdio.h>
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1; // Return -1 if the index is out of bounds for the data type
    }

    *n |= (1UL << index); // Set the bit at the given index to 1 using the OR bitwise operator

    return 1;
}
