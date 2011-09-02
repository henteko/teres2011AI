#include"include.h"

void distribute_Card(){

	debug_printf("distribute_Card start!!\n");

	int s=0;
	for(int i=0;i<Hand_max_num;i++)
	{
     for(int j=0;j<AI_NUM;j++) 
	 {
		 if(s < CARD_NUM_MAX * CARD_MARK - CARD_MARK){
			ai[j].hand[i] = shuffle_Card_result[s];
			s++;
		}
     }
    }

	for(int j=0;j<AI_NUM;j++) {
		for(int i=0;i<Hand_max_num;i++) {
			debug_printf("%3d",ai[j].hand[i]);
		}
	}
}