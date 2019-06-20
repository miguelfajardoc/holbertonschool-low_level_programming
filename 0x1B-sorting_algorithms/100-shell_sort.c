#include  "sort.h"
/**
* swap - function that swap the values in an array
* @prev: the first argument
* @next: the second argument
**/

void swap(int *prev, int *next)
{
        int aux;

        aux = *prev;
        *prev = *next;
        *next = aux;
}
/**
*
*
*
*
**/
void shell_sort(int *array, size_t size)
{
	size_t iter;
	size_t gap;
	size_t end;
	size_t static_gap;

	static_gap = size;

	while (static_gap != 1)
	{
		iter = 0;
		static_gap = static_gap / 2;
		gap = static_gap;
		end = gap;
		while (end != size)
		{
			if (array[iter] > array[gap])
			{
				swap(&array[iter], &array[gap]);
				while (1)
				{
					if ((int)iter - ((int)static_gap) 
					     >= 0)
					{
						/*printf("iter: %d, gap: %d - %d\n", (int)iter, (int)gap, (int)iter - ((int)gap - (int)iter));*/
						iter -= static_gap;
						gap  -= static_gap;
						if (array[iter] > array[gap])
						{
							swap(&array[iter],
							     &array[gap]);
						}
					}
					else
						break;
				}
				gap = end;
				iter = gap - static_gap;
			}
		
			iter += 1;
			gap += 1;
			end += 1;
		}
		print_array(array, size);
	}
}
