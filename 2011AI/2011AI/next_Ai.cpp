#include"include.h"

void next_Ai(int order_Ai) {

	debug_printf("next_Ai() start!\n");

	
	//return_start_Ai�ɂ�AI.exe�̕Ԓl������
	int return_start_Ai = start_Ai(order_Ai);

	if(judge_Num(return_start_Ai)) {
		//�������ꍇ

		//��̍X�V
		update_Field(return_start_Ai,order_Ai);
		if(check_Hand(order_Ai)) {
			//��D��0�ŏオ���Ă�����
			ai[order_Ai].rank = rank;
			ai[order_Ai].point = rank - 1;
			rank++;
			printf("%s��%d�ʂŏオ��ł�\n",ai[order_Ai].name,ai[order_Ai].rank);
		}
	}else {
		//�������Ȃ��ꍇ

		//�p�X����񑝂₷
		ai[order_Ai].pass++;
		if(judge_Pass(order_Ai)) {
			ai[order_Ai].rank = AI_NUM;
			pass_Max(order_Ai);
		}
	}

	//�p�X�����l������ꍇ��Field�̃A�b�v�f�[�g����
	pass_Field();

}