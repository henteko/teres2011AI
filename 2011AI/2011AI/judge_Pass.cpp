#include "include.h"	

int judge_Pass(int order_Ai)
{
	int n=0;
	if(ai[order_Ai].pass>=PASS_MAX){n=1;}
	return n;
}