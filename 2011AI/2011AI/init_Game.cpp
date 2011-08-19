#include"include.h"

void init_Game() {
	printf("init_Game start!\n");

	//N_sort_numの再設定
	if(CARD_NUM_MAX % 2 != 0) {
		N_sort_num = N_sort_num + 1;
	}

	printf("このゲームは%d並べです\n",N_sort_num);

	//handの設定
	for(int i=0;i<AI_NUM;i++) {
		ai[i].hand = (int *)malloc(sizeof(int) * Hand_max_num);
		//メモリ確保が出来なかったら強制終了
		if(ai[i].hand == NULL) exit(0);
	}
}