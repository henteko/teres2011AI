#include"include.h"

void init_Game() {
	printf("init_Game start!\n");

	//N_sort_num�̍Đݒ�
	if(CARD_NUM_MAX % 2 != 0) {
		N_sort_num = N_sort_num + 1;
	}

	printf("���̃Q�[����%d���ׂł�\n",N_sort_num);

	//hand�̐ݒ�
	for(int i=0;i<AI_NUM;i++) {
		ai[i].hand = (int *)malloc(sizeof(int) * Hand_max_num);
		//�������m�ۂ��o���Ȃ������狭���I��
		if(ai[i].hand == NULL) exit(0);
	}

	for(int j=0;j<AI_NUM;j++) {
		for(int i=0;i<Hand_max_num;i++) {
			ai[j].hand[i] = 0;
		}
	}
}