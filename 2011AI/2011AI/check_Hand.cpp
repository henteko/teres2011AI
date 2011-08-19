#include"include.h"


int check_Hand(int order_Ai){
	printf("check_Hand() start!\n");

	for(int i=0;i < Hand_max_num; i++){
		if(ai[order_Ai].hand[i]!=0/*ŽèŽD‚ª‚O‚¶‚á‚È‚¢*/){
				return 0;
			}
	}
	return 1;
}
