#include"include.h"

int start_Ai(int order_Ai){

	debug_printf("start_Ai() start!\n");
	/*
	とりあえずgithubは使えたってことでおｋ？
	.sshがないしｗｗｗとかから始まったが
	なんとかできましたよ～ by HK
	*/


	char hoge[10000];
	strcpy_s(hoge, ai[order_Ai].path);
	strcat_s(hoge, " ");

	char charP[100];



	/**************************
		場の挿入
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
		場に誰が出したかの挿入
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
		手札の挿入
	**************************/
	for(int i=0;i<Hand_max_num;i++) {
		sprintf_s(charP,"%d",ai[order_Ai].hand[i]);
		strcat_s(charP,"\\");
		strcat_s(hoge,charP);
	}

	strcat_s(hoge," ");


	/**************************
		設定類のの挿入
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

	//exeファイル実行&返値代入
	int ret = system(hoge);
	
	printf("%sつ:%d\n",ai[order_Ai].name,ret);


	return ret;

}