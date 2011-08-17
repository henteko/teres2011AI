#include"include.h"


int check_Hand(int order_Ai){
	const int   handNum = sizeof ai[order_AI].hand /sizeof ai[order_AI].hand[0];
	for(int i=0;i < handNum; i++){
		if(ai[order_AI].hand[i]!=0/*ŽèŽD‚ª‚O‚¶‚á‚È‚¢*/){
				return 0;
			}
	}
	return 1;
}
