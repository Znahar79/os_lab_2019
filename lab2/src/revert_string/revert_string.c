#include "revert_string.h"
#include "string.h"
void RevertString(char *str)
{
	char r[1000];
	int begin, end, count = 0;
	while (str[count] != '\0')
	{
	    count++;
	}
	end = count - 1;
	for(begin = 0; begin < count; begin++)
	{
	    r[begin] = str[end];
	    end--;
	}
	r[begin] = '\0';
	memcpy(str, r, strlen(r));
	//str = r;
}

