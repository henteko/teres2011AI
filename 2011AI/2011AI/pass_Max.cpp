#include"include.h"

void pass_Max(int order_Ai) {

	debug_printf("pass_Max start!!\n");

	//パスを４回使った時の処理
	ai[order_Ai].point = AI_NUM + 100;
	printf("%sは、パスを%d回以上使いました\n",ai[order_Ai].name,PASS_MAX);


	//脱落した人が持っていた手札を場に2として展開
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