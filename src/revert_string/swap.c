#include "swap.h"

void Swap(char *left, char *right)
{
	char symbol =*left;
	*left= *right;
	*right=symbol;
}
