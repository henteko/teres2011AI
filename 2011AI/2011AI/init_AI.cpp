#include "include.h"

void init_Ai(){
	printf("init_Ai() start!\n");


	int i;
	for(i=0;i<AI_NUM;i++){
		ai[i].no = i+1;
		ai[i].pass = 0;
		ai[i].rank = 0;
		for(int j=0;j<Hand_max_num;j++) {
			ai[i].hand[j] = 0;
		}
	}
 
	
	for(int j=0;j<AI_NUM;j++) {
		printf("%d ",ai[j].no);
		printf("%d ",ai[j].pass);
		printf("%d\n",ai[j].rank);
		for(int z=0;z<Hand_max_num;z++) {
			printf("%d ",ai[j].hand[z]);
		}
		printf("\n");
	}
	
}
