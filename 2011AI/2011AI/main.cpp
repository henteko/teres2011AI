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

int Hand_max_num = CARD_MARK * CARD_NUM_MAX / AI_NUM + 1;

//�J�����g�f�B���N�g���̕����������z��
//C:\�`\AI\ ������
char Current_dir[255];

int shuffle_Card_result[CARD_NUM_MAX * CARD_MARK - CARD_MARK];


void main(void) {
	
	/*******************************
	  �J�����g�f�B���N�g���̐ݒ�
	�킩��₷���悤�A�����Ă����Őݒ�
	�{���ɂ킩��₷�����́A�N������
	*******************************/
	GetCurrentDirectory(255,Current_dir);
	strcat_s(Current_dir,"\\AI\\");
	printf("�J�����g�f�B���N�g��:%s\n",Current_dir);



	//�ŏ�����������������������
	init_Game();

	//main�̃��[�v
	while(gameCount < MAX_GAME_NUM) {
		switch(gameMode) {
			case 0:
				//�������n
				make_Field();
				init_Ai();
				shuffle_Card();
				distribute_Card();
				set_Order();

				rank = 1;

				gameMode++;
				break;
			case 1:
				
				for(int i=0;i<AI_NUM;i++) {
					if(ai_Rank(order_Ai[i]) == 0) {
						//AI�̃����N�������l(0)���������Ɏ��s
						next_Ai(order_Ai[i]);
					}
				}
				if(is_End()) {
					gameMode = 2;
					printf("�S�����ʂ����܂�܂���\n");
				}else {
					debug_printf("���������s���ꂽ��is_End()�͐���\n");	
				}
#ifdef DEBUG
				//�f�o�b�N�p
				gameMode = 2;
#endif
				break;
			case 2:
				//�G���f�B���O
				finish_Ran();
				gameCount++;
				gameMode = 0;
				break;
			default:
				gameMode = 2;

		}
	}

#ifdef DEBUG

#else
	//�Ō�̏��ʕ\��
	int tmp_sum_rank[AI_NUM] = {0};
	for(int i=0;i<AI_NUM;i++) {
		tmp_sum_rank[i] = ai[i].sum_rank;
	}
	int mini_rank[2] = {999999,0};
	int last_rank[AI_NUM] = {0};
	for(int i=0;i<AI_NUM;i++) {
		for(int j=0;j<AI_NUM;j++) {
			if(mini_rank[0] > tmp_sum_rank[j]) {
				mini_rank[0] = tmp_sum_rank[j];
				mini_rank[1] = j;
			}
		}
		last_rank[i] = mini_rank[1];
		tmp_sum_rank[mini_rank[1]] = 999999;
	}

	printf("\n------�ŏI���ʔ��\!!------\n");
	for(int i=0;i<AI_NUM;i++) {
		printf("%d��:%s �_��:%d\n",i+1,ai[last_rank[i]].name,ai[last_rank[i]].sum_rank);
	}
	printf("-----�����l�ł���!!-----\n");
#endif

}
