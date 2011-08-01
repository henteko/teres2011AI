#include"include.h"

void update_Field(int return_start_Ai)
{  
	for(int i=0;i<CARD_MARK;i++)
	{

		for(int j=1;j<=CARD_NUM_MAX;j++)
		{
			if(return_start_Ai==((CARD_NUM_MAX*i)+j))
			{
				Field[i][j][0]=1;
				return;
			}
		}
	}
}