/**********************************************************
	�\���̂̒�`
**********************************************************/
#ifndef _STRUCT_H_
#define _STRUCT_H_


typedef struct GM	//�Q�[���}�l�[�W���[�\����
{
	

} GM_T;


typedef struct AI	// 1��AI�̌^
{
	int no;		//AI�̎��ʔԍ�
	char name[100];	//AI�̖��O
	int *hand;	//�莝���̃J�[�h:�ϒ��z��Ƃ��Ďg�p
	int pass;	//�p�X������
	int rank;	//����
	int point;
	char path[255];	//AI��exe�t�@�C���ւ̃p�X
	int sum_point;

} AI_T;


#endif	// !_STRUCT_H_

