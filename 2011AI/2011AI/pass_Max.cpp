#include"include.h"

void pass_Max(int order_Ai) {

	debug_printf("pass_Max start!!\n");

	//�p�X���S��g�������̏���
	ai[order_Ai].point = AI_NUM + 100;
	printf("%s�́A�p�X��%d��ȏ�g���܂���\n",ai[order_Ai].name,PASS_MAX);


	//�E�������l�������Ă�����D�����2�Ƃ��ēW�J
	for(int k=0;k<Hand_max_num;k++) {
		for(int i=0;i<CARD_MARK;i++) {
			for(int j=0;j<CARD_NUM_MAX;j++) {
				if(ai[order_Ai].hand[k] == ((CARD_NUM_MAX*i)+j+1)) {
					Field[i][j][0] = 2;
					Field[i][j][1] = ai[order_Ai].no;
				}
			}
		}
	}

}