#include"include.h"

//�O���[�o���ϐ�
int Field[CARD_MARK][CARD_NUM_MAX][2];
AI_T ai[AI_NUM];

int N_sort_num = CARD_NUM_MAX / 2;

int gameMode = 0;

int gameCount = 0;

//���̒��ɂ�ai[].no�̔ԍ�������
int order_Ai[AI_NUM];

int rank = 1;


void main(void) {

	//main�̃��[�v
	while(gameCount < MAX_GAME_NUM) {
		switch(gameMode) {
			case 0:
				//�������n
				make_Field();
				//int* shuffled_Card = shuffle_Card();	//������
				//distribute_Card(shuffled_Card);	//������
				//init_Ai();	//������
				//set_Order();	//������

				rank = 1;

				gameMode++;
				break;
			case 1:
				/*
				for(int i=0;i<AI_NUM;i++) {
					if(ai_Rank(order_Ai[i]) == 0) {
						//AI�̃����N�������l(0)���������Ɏ��s
						//next_Ai(order_[i]);	//������
					}
				}
				if(is_End()) {
					gameMode = 2;
				}
				*/
				gameMode = 2;
				break;
			case 2:
				//�G���f�B���O
				gameCount++;
				break;
			default:
				gameMode = 999;

		}
	}


}
