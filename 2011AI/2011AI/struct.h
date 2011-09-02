/**********************************************************
	構造体の定義
**********************************************************/
#ifndef _STRUCT_H_
#define _STRUCT_H_


typedef struct GM	//ゲームマネージャー構造体
{
	

} GM_T;


typedef struct AI	// 1つのAIの型
{
	int no;		//AIの識別番号
	char name[100];	//AIの名前
	int *hand;	//手持ちのカード:可変長配列として使用
	int pass;	//パスした回数
	int rank;	//順位
	int point;
	char path[255];	//AIのexeファイルへのパス
	int sum_point;

} AI_T;


#endif	// !_STRUCT_H_

