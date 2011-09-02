#include"include.h"

void next_Ai(int order_Ai) {

	debug_printf("next_Ai() start!\n");

	
	//return_start_AiにはAI.exeの返値が入る
	int return_start_Ai = start_Ai(order_Ai);

	if(judge_Num(return_start_Ai)) {
		//正しい場合

		//場の更新
		update_Field(return_start_Ai,order_Ai);
		if(check_Hand(order_Ai)) {
			//手札が0で上がっていたら
			ai[order_Ai].rank = rank;
			ai[order_Ai].point = rank - 1;
			rank++;
			printf("%sは%d位で上がりです\n",ai[order_Ai].name,ai[order_Ai].rank);
		}
	}else {
		//正しくない場合

		//パスを一回増やす
		ai[order_Ai].pass++;
		if(judge_Pass(order_Ai)) {
			ai[order_Ai].rank = AI_NUM;
			pass_Max(order_Ai);
		}
	}

	//パスした人が居る場合のFieldのアップデート処理
	pass_Field();

}