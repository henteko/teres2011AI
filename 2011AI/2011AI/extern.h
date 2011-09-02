/**********************************************************
	�O���錾���܂Ƃ߂��w�b�_
**********************************************************/
#ifndef _EXTERN_H_
#define _EXTERN_H_


#include"include.h"


/*
*	�ϐ�
*/
extern int Field[CARD_MARK][CARD_NUM_MAX][2];

extern AI_T ai[AI_NUM];

extern int gameMode;

extern int gameCount;

extern int order_Ai[AI_NUM];

extern int N_sort_num;

extern int rank;

extern int Hand_max_num;

extern char Current_dir[255];

extern int shuffle_Card_result[CARD_NUM_MAX * CARD_MARK - CARD_MARK];
/*
*	�֐�
*/

//��̍쐬
extern void make_Field();

//�J�[�h���V���b�t������
extern void shuffle_Card();

//�J�[�h��z��
extern void distribute_Card();

//AI�̏�����
extern void init_Ai();

//���Ԃ̌���
extern void set_Order();

//����Ai�Ɉڂ�
extern void next_Ai(int order_Ai);

//AI��exe�t�@�C���N��
extern int start_Ai(int order_Ai);

//AI����̕Ԓl�����������ǂ������f
extern int judge_Num(int return_start_Ai);

//AI�̃p�X���K��l�ȏォ�ǂ�������
extern int judge_Pass(int order_Ai);

//����X�V����
extern void update_Field(int return_start_Ai,int order_Ai);

//��D��0���ǂ����̔��f
extern int check_Hand(int order_Ai);

//AI�̏��ʔ���
extern int ai_Rank(int order_Ai);

//�I��肩�ǂ����𔻒�
extern int is_End();

//�Ō�̌㏈��
extern void finish_Ran();

//�Q�[���̍ŏ������ɏ�����������̂�����������
extern void init_Game();

//�p�X���}�b�N�X�ɒB�����ꍇ�A���̐l�������Ă��̂���ɓW�J����
extern void pass_Max(int order_Ai);

//�p�X�����l������ꍇ��Field�̃A�b�v�f�[�g����
extern void pass_Field();

#endif	// !_EXTERN_H_