/**********************************************************
	�}�N����`
**********************************************************/
#ifndef _DEFINE_H_
#define _DEFINE_H_


//AI.exe�t�@�C���ւ̃x�[�X�p�X
#define BASE_PATH "����Ȃ��́A�ŏ�����Ȃ��������"

//����Q�[�����J��Ԃ���点�邩
#define MAX_GAME_NUM 10

//AI�̐�
#define AI_NUM 1

//�p�X�̏��
#define PASS_MAX 4

//�J�[�h�̃}�[�N�̎�ސ�
#define CARD_MARK 4

//�J�[�h�̐����̍ő吔
#define CARD_NUM_MAX 13



//#define DEBUG

#ifdef DEBUG
#define debug_printf printf
#else
#define SLASH() /
#define debug_printf SLASH()SLASH()
#endif

#endif	// !_DEFINE_H_
