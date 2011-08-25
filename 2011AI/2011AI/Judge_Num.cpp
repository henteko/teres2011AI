#include"include.h"

int judge_Num(int return_start_Ai)
{
int return_start_Ai = r;
for(int i=0;i<=CARD_MARK;i++)
{
	for(int j=1;j<=CARD_NUM_MAX;j++)
	{
		if(r == ((CARD_NUM_MAX*i)+j))
		{
			if(r < ((CARD_NUM_MAX*j)-((CARD_NUM_MAX-1)/2)))
			{
				if(int Field[i][++j][2] == 1)
				{
				    return 1;
				}
			}
			else if(r > ((CARD_NUM_MAX*j)-((CARD_NUM_MAX-1)/2)))
			{
				if(int Field[i][--j][2] == 1)
				{
					return 1;
				}
			}
		}
	}
}
	return 0;
}