#include"include.h"

void finish_Ran() {
	debug_printf("finish_Ran start!\n");

	printf("%d��ڂ̃Q�[������\n",gameCount+1);
	for(int i=0;i<AI_NUM;i++) {
		for(int j=0;j<AI_NUM;j++) {
			if(ai[j].rank == i+1) {
				ai[j].sum_point += ai[j].point;
				printf("%d��:%s ���݂̓_��:%d\n",ai[j].rank,ai[j].name,ai[j].sum_point);
			}
		}
	}

	printf("\n");
}