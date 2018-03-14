#include "revert_string.h"
#include "swap.h"
void RevertString(char *str, int length)
{
	for (int i = 0; i < length/2; i++)
	{
        Swap(&str[i],&str[length-1-i]); 
	}

}

