#include"include.h"

void init_Game() {
	debug_printf("init_Game start!\n");

	//N_sort_numの再設定
	if(CARD_NUM_MAX % 2 != 0) {
		N_sort_num = N_sort_num + 1;
	}

	debug_printf("このゲームは%d並べです\n",N_sort_num);

	//handの設定
	for(int i=0;i<AI_NUM;i++) {
		ai[i].hand = (int *)malloc(sizeof(int) * Hand_max_num);
		//メモリ確保が出来なかったら強制終了
		if(ai[i].hand == NULL) exit(0);
	}

	for(int j=0;j<AI_NUM;j++) {
		for(int i=0;i<Hand_max_num;i++) {
			ai[j].hand[i] = 0;
		}
		ai[j].sum_point = 0;
	}
}