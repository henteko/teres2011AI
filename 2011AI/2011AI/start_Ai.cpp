#include"include.h"

int start_Ai(int order_Ai){

	debug_printf("start_Ai() start!\n");
	/*
	�Ƃ肠����github�͎g�������Ă��Ƃł����H
	.ssh���Ȃ����������Ƃ�����n�܂�����
	�Ȃ�Ƃ��ł��܂�����` by HK
	*/


	char hoge[10000];
	strcpy_s(hoge, ai[order_Ai].path);
	strcat_s(hoge, " ");

	char charP[100];



	/**************************
		��̑}��
	**************************/
	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			sprintf_s(charP,"%d",Field[i][j][0]);
			strcat_s(charP,"\\");
			strcat_s(hoge,charP);
		}
	}

	strcat_s(hoge," ");

	/**************************
		��ɒN���o�������̑}��
	**************************/
	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			sprintf_s(charP,"%d",Field[i][j][1]);
			strcat_s(charP,"\\");
			strcat_s(hoge,charP);
		}
	}

	strcat_s(hoge," ");

	/**************************
		��D�̑}��
	**************************/
	for(int i=0;i<Hand_max_num;i++) {
		sprintf_s(charP,"%d",ai[order_Ai].hand[i]);
		strcat_s(charP,"\\");
		strcat_s(hoge,charP);
	}

	strcat_s(hoge," ");


	/**************************
		�ݒ�ނ̂̑}��
	**************************/
	sprintf_s(charP,"%d",AI_NUM);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");

	sprintf_s(charP,"%d",PASS_MAX);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");

	sprintf_s(charP,"%d",CARD_MARK);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");

	sprintf_s(charP,"%d",CARD_NUM_MAX);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");

	sprintf_s(charP,"%d",Hand_max_num);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");

	sprintf_s(charP,"%d",ai[order_Ai].pass);
	strcat_s(charP,"\\");
	strcat_s(hoge,charP);

	strcat_s(hoge," ");


	debug_printf("%s\n",hoge);

	//exe�t�@�C�����s&�Ԓl���
	int ret = system(hoge);
	
	printf("%s��:%d\n",ai[order_Ai].name,ret);


	return ret;

}