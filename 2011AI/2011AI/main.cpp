#include"include.h"

//グローバル変数
int Field[CARD_MARK][CARD_NUM_MAX][2];
AI_T ai[AI_NUM];

int N_sort_num = CARD_NUM_MAX / 2;

int gameMode = 0;

int gameCount = 0;

//この中にはai[].noの番号が入る
int order_Ai[AI_NUM];

int rank = 1;


void main(void) {

	//mainのループ
	while(gameCount < MAX_GAME_NUM) {
		switch(gameMode) {
			case 0:
				//初期化系
				make_Field();
				//int* shuffled_Card = shuffle_Card();	//未実装
				//distribute_Card(shuffled_Card);	//未実装
				//init_Ai();	//未実装
				//set_Order();	//未実装

				rank = 1;

				gameMode++;
				break;
			case 1:
				/*
				for(int i=0;i<AI_NUM;i++) {
					if(ai_Rank(order_Ai[i]) == 0) {
						//AIのランクが初期値(0)だった時に実行
						//next_Ai(order_[i]);	//未実装
					}
				}
				if(is_End()) {
					gameMode = 2;
				}
				*/
				gameMode = 2;
				break;
			case 2:
				//エンディング
				gameCount++;
				break;
			default:
				gameMode = 999;

		}
	}


}
