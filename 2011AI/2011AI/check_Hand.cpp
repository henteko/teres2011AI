#include"include.h"


int check_Hand(int order_Ai){
	debug_printf("check_Hand() start!\n");

	for(int i=0;i < Hand_max_num; i++){
		if(ai[order_Ai].hand[i]!=0/*��D���O����Ȃ�*/){
				return 0;
			}
	}
	return 1;
}
