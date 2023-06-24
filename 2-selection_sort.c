#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 *
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int jet;

	jet = *a;
	*a = *b;
	*b = jet;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *			using the selection sort algorithm.
 *
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *m_idx;
	size_t i, k;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m_idx = array + i;
		for (k = i + 1; k < size; k++)
			m_idx = (array[k] < *m_idx) ? (array + k) : m_idx;

		if ((array + i) != m_idx)
		{
			swap_ints(array + i, m_idx);
			print_array(array, size);
		}
	}
}
