#include"include.h"

void update_Field(int return_start_Ai,int order_Ai)
{  
	//order_Ai‚àˆø”‚É‚Æ‚èA’N‚ªo‚µ‚½‚©‚à’Ç‰Á‚·‚é

	for(int i=0;i<CARD_MARK;i++)
	{

		for(int j=0;j<CARD_NUM_MAX;j++)
		{
			if(return_start_Ai==((CARD_NUM_MAX*i)+ j + 1))	//‚±‚±‚ğC³(+ j + 1)
			{
				Field[i][j][0]=1;
				Field[i][j][1]=ai[order_Ai].no;

				for(int z=0;z<Hand_max_num;z++) {
					if(ai[order_Ai].hand[z] == return_start_Ai) {
						ai[order_Ai].hand[z] = 0;
					}
				}
			}

		}
	}



	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			debug_printf(" %d ",Field[i][j][0]);
		}
		debug_printf("\n");
	}



}