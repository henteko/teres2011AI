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

int Hand_max_num = CARD_MARK * CARD_NUM_MAX / AI_NUM + 1;

//カレントディレクトリの文字列を入れる配列
//C:\～\AI\ が入る
char Current_dir[255];

int shuffle_Card_result[CARD_NUM_MAX * CARD_MARK - CARD_MARK];


void main(void) {
	
	/*******************************
	  カレントディレクトリの設定
	わかりやすいよう、あえてここで設定
	本当にわかりやすいかは、君しだい
	*******************************/
	GetCurrentDirectory(255,Current_dir);
	strcat_s(Current_dir,"\\AI\\");
	printf("カレントディレクトリ:%s\n",Current_dir);



	//最初だけ初期化するやつを初期化
	init_Game();

	//mainのループ
	while(gameCount < MAX_GAME_NUM) {
		switch(gameMode) {
			case 0:
				//初期化系
				make_Field();
				init_Ai();	//未実装☆
				//shuffle_Card();	//未実装
				//distribute_Card();	//未実装
				set_Order();	//未実装☆

				rank = 1;

				gameMode++;
				break;
			case 1:
				
				for(int i=0;i<AI_NUM;i++) {
					if(ai_Rank(order_Ai[i]) == 0) {
						//AIのランクが初期値(0)だった時に実行
						next_Ai(order_Ai[i]);	//未実装
					}
				}
				if(is_End()) {
					gameMode = 2;
					printf("全員順位決まったから終了\n");	
				}else {
					printf("ここが実行されたらis_End()は正常\n");	
				}
				//デバック用
				gameMode = 2;
				break;
			case 2:
				//エンディング
				//finish_Ran();
				gameCount++;
				gameMode = 0;
				break;
			default:
				gameMode = 999;

		}
	}


}
