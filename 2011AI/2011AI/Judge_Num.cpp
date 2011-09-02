#include"include.h"

int judge_Num(int return_start_Ai)
{
	int r = return_start_Ai;
	for(int i=0;i<CARD_MARK;i++)
	{
		for(int j=0;j<CARD_NUM_MAX;j++)
		{
			if(r == ((CARD_NUM_MAX*i)+j+1))
			{
				if(r < ((CARD_NUM_MAX*i)+((CARD_NUM_MAX+1)/2)))
				{
					if(Field[i][j+1][0] == 1)
					{
						return 1;
					}
				}
				else if(r > ((CARD_NUM_MAX*i)+((CARD_NUM_MAX+1)/2)))
				{
					if(Field[i][j-1][0] == 1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}