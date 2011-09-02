/**********************************************************
	マクロ定義
**********************************************************/
#ifndef _DEFINE_H_
#define _DEFINE_H_


//AI.exeファイルへのベースパス
#define BASE_PATH "こんなもの、最初からなかったんや"

//何回ゲームを繰り返しやらせるか
#define MAX_GAME_NUM 10

//AIの数
#define AI_NUM 1

//パスの上限
#define PASS_MAX 4

//カードのマークの種類数
#define CARD_MARK 4

//カードの数字の最大数
#define CARD_NUM_MAX 13



//#define DEBUG

#ifdef DEBUG
#define debug_printf printf
#else
#define SLASH() /
#define debug_printf SLASH()SLASH()
#endif

#endif	// !_DEFINE_H_
