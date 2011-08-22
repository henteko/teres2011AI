#include"include.h"

void next_Ai(int order_Ai) {

	printf("next_Ai() start!\n");

	
	//return_start_AiにはAI.exeの返値が入る
	int return_start_Ai = start_Ai(order_Ai); //実装途中?

	//if(judge_num(return_start_Ai)) {
		//正しい場合

		//場の更新
		//update_Field(return_start_Ai);
		if(check_Hand(order_Ai)) {
			//手札が0で上がっていたら
			ai[order_Ai].rank = rank;
			rank++;
			printf("手札ゼロで上がりです\n");
		}
	//}else {
		//正しくない場合

		//パスを一回増やす
		//ai[order_Ai].pass++;
		if(judge_Pass(order_Ai)) {
			//パスを４回使った時の処理
			printf("ai.no %dは、パスを4回以上使いました\n",order_Ai);
			ai[order_Ai].rank = -1;
		}
	//}
}