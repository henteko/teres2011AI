#include"include.h"

void next_Ai(int order_Ai) {

	printf("next_Ai() start!\n");

	
	//return_start_Ai�ɂ�AI.exe�̕Ԓl������
	int return_start_Ai = start_Ai(order_Ai); //�����r��?

	if(judge_Num(return_start_Ai)) {
		//�������ꍇ

		//��̍X�V
		update_Field(return_start_Ai,order_Ai);
		if(check_Hand(order_Ai)) {
			//��D��0�ŏオ���Ă�����
			ai[order_Ai].rank = rank;
			rank++;
			printf("��D�[���ŏオ��ł�\n");
		}
	}else {
		//�������Ȃ��ꍇ

		//�p�X����񑝂₷
		//ai[order_Ai].pass++;
		if(judge_Pass(order_Ai)) {
			//�p�X���S��g�������̏���
			printf("ai.no %d�́A�p�X��4��ȏ�g���܂���\n",order_Ai);
			ai[order_Ai].rank = -1;
		}
	}
}