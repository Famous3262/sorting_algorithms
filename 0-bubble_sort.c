#include "sort.h"

/**
 * swap_ints - Swap two int in an array.
 * @a: The first int to swap.
 * @b: The second int to swap.
 */
void swap_ints(int *a, int *b)
{
	int jet;

	jet = *a;
	*a = *b;
	*b = jet;
}

/**
 * bubble_sort - Sort an array of int in ascending order.
 * @array: An array of int to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (!bubbly)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(&array[j], &array[j + 1]);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
