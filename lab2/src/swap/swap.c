#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
	char t;
	t = *right;
	*right = *left;
	*left = t;
}
