#include <stdio.h>
#include "copy.h"

void copy (char from[], char to[])
{
	int j;
	int i=0;
	while((to[i]=from[i])!='\0')

		++i;
}
