#include"include.h"

void init_Game() {
	printf("init_Game start!\n");

	//N_sort_num‚ÌÄİ’è
	if(CARD_NUM_MAX % 2 != 0) {
		N_sort_num = N_sort_num + 1;
	}

	//hand‚Ìİ’è
	for(int i=0;i<AI_NUM;i++) {
		ai[i].hand = (int *)malloc(sizeof(int) * Hand_max_num);
		//ƒƒ‚ƒŠŠm•Û‚ªo—ˆ‚È‚©‚Á‚½‚ç‹­§I—¹
		if(ai[i].hand == NULL) exit(0);
	}
}