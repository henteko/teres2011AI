#include"include.h"

void make_Field() {
	printf("hello make_Field()\n");

	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			//ŽOŽŸŒ³”z—ñ‚Á‚Ä‚í‚©‚è‚É‚­‚¢‚æ‚ËOO
			//Œ»ŽÀ¢ŠE‚à‚ËOO
			if(j == N_sort_num - 1) {
				Field[i][j][0] = 1;
			}else {
				Field[i][j][0] = 0;
			}
			Field[i][j][1] = 0;
			printf(" %d ",Field[i][j][0]);
		}
		printf("\n");
	}
}