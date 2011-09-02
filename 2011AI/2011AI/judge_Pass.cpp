#include "include.h"	

int judge_Pass(int order_Ai)
{
	debug_printf("judge_Pass() start!\n");
	int n=0;
	if(ai[order_Ai].pass>=PASS_MAX){n=1;}
	return n;
}