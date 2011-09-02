#include"include.h"

void pass_Field() {

	debug_printf("pass_Field start!!\n");

	int flag = 0;

	//‚±‚±‚©‚ç2‚ª‚È‚¢‚©‚Ì’²¸
	//¶‚©‚ç
	for(int i=0;i<CARD_MARK;i++) {
		for(int j=N_sort_num -1;j>=0;j--) {
			if(Field[i][j][0] == 2) {
				if( Field[i][j+1][0] == 1) {
					Field[i][j][0] = 1;
					flag = 1;
				}
			}
		}
	}
	//‰E
	for(int i=0;i<CARD_MARK;i++) {
		for(int j=N_sort_num -1;j<CARD_NUM_MAX;j++) {
			if(Field[i][j][0] == 2) {
				if( Field[i][j-1][0] == 1) {
					Field[i][j][0] = 1;
					flag = 1;
				}
			}
		}
	}

	if(flag) {
		for(int i=0;i<CARD_MARK;i++) {
			for(int j=0;j<CARD_NUM_MAX;j++) {
				debug_printf(" %d ",Field[i][j][0]);
			}
			debug_printf("\n");
		}
	}
}