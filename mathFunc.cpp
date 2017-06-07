#include <iostream>
#include "mathFunc.h"

int power(int num, int ind)
{
	int current = 1;
	int origin = num;
	if (ind > 0)
	{
		while ( current < ind )
		{
			num = origin * num;
			current++;
		}
	}
	else if (ind == 0)
		num = 0;
	
	return num;
}

/*int mathFunc::mean(int amount, int list[amount])
{
	int current = 0;
	int total = 0;
	int average;
	
	while ( current < amount )
	{
		total = list[current] + total;
		current ++;
	}
	
	average = total / ammount;
	
	return average;
}
*/
