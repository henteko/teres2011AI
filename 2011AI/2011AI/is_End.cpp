#include"include.h"

int is_End()
{
	int i;
	for(i=0;i<=AI_NUM;i++)
	{
		if(ai[i].rank!=0)
		{
			return 0;
	    }
	}
	return 1;
}