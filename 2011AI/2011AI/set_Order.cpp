//tao31’S“–set_Order8/17//
#include "include.h"


void set_Order(){
	debug_printf("set_Order() start!\n");

	for(int i=0;i<AI_NUM;i++) {
		order_Ai[i] = -1;
	}

	srand((unsigned int)time(NULL));
	int i;
	for(i=0;i<AI_NUM;i++) {
		int tmp = rand()%AI_NUM;
		int flag = 0;
		
		for(int j=0;j<AI_NUM;j++){
			if(order_Ai[j] == tmp){
				flag = 1;
			}
		}
		if(flag==0){
			order_Ai[i] = tmp;
		}
		else {
			i = i - 1;
		}
	}

	for(int z=0;z<AI_NUM;z++) {
		debug_printf("%d\n",order_Ai[z]);
	}


}
