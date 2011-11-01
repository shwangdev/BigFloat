#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "BigFloat.h"
#include <stdlib.h>

int main()
{
	BigFloat *sum;
	sum = new BigFloat(0.0);
	
	for ( int i = 1; i <= 100 ; i ++)
	{
		BigFloat index(1.0);
		BigFloat temp((double)i);
		if ( 0 == index.divide(&index, &temp))
			sum->add(sum,&index);
		else
		{
			printf("error");
			exit(1);
		}
	}
	sum->printAll();
	sum->print_fraction_portion_in_decimal(1000,NULL);
}
