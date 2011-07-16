/**********************************************************
	外部宣言をまとめたヘッダ
**********************************************************/
#ifndef _EXTERN_H_
#define _EXTERN_H_


#include"include.h"


/*
*	変数
*/
extern int Field[CARD_MARK][CARD_NUM_MAX][2];

extern AI_T ai[AI_NUM];

extern int gameMode;

extern int gameCount;

extern int order_Ai[AI_NUM];

extern int rank;

/*
*	関数
*/

//場の作成
extern void make_Field();

//カードをシャッフルする
extern int* shuffle_Card();

//カードを配る
extern void distribute_Card(int* shuffled_Card);

//AIの初期化
extern void init_Ai();

//順番の決定
extern void set_Order();

//次のAiに移る
extern void next_Ai(int order_Ai);

//AIのexeファイル起動
extern int start_Ai(int AI_no);

//AIからの返値が正しいかどうか判断
extern int judge_Num(int return_start_Ai);

//AIのパスが規定値以上かどうか判定
extern int judge_Pass(int order_Ai);

//場を更新する
extern void update_Field(int return_start_Ai);

//手札が0かどうかの判断
extern int check_Hand(int order_Ai);

//AIの順位判定
extern int ai_Rank(int order_Ai);

//終わりかどうかを判定
extern int is_End();

#endif	// !_EXTERN_H_