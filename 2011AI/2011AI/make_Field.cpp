#include"include.h"

void make_Field() {
	debug_printf("hello make_Field()\n");

	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			//三次元配列ってわかりにくいよね＾＾
			//現実世界もね＾＾
			if(j == N_sort_num - 1) {
				Field[i][j][0] = 1;
			}else {
				Field[i][j][0] = 0;
			}
			Field[i][j][1] = 0;
			debug_printf(" %d ",Field[i][j][0]);
		}
		debug_printf("\n");
	}
}