#include"include.h"

void finish_Ran() {
	debug_printf("finish_Ran start!\n");

	for(int i=0;i<AI_NUM;i++) {
		for(int j=0;j<AI_NUM;j++) {
			if(ai[j].rank == i+1) {
				printf("%dˆÊ:%s\n",ai[j].rank,ai[j].name);
				ai[j].sum_rank += ai[j].rank;
				break;
			}
		}
	}

	printf("\n");
}