

/*
����
return���Ɣz��͕Ԃ��Ȃ��̂�
int main�̂ق���
int shuffle_card_result[CARD_NUM_MAX]
�Ɛ錾���Ă��܂��B
������shuffle_card�֐��̈�����shuffle_card_result�Ƃ��邱�Ƃ�
�[���I�ɔz���Ԃ��d�l�ɂȂ��Ă��܂��B
�B

����ɔz��̑傫���w��ɂ͕ϐ��͎g���Ȃ��̂�
#define CARD_NUM_MAX 52
�Ɛ錾���Ă悤����Ɠ����悤�ɂȂ��Ă��܂��B

*/
 void shuffle_card(int shuffle_card_result[])
 {
	   
     int n[CARD_NUM_MAX];
	 srand( (unsigned)time( NULL ) );
	  int NUMcard = 1;
	  for(int j=0; j<CARD_NUM_MAX;j++)
	  {
	    n[j]=NUMcard;
		NUMcard++;
	  }
	 
	 
	 int ran=CARD_NUM_MAX;
	 int temp;
	 
	 for(int j=CARD_NUM_MAX; j>0;j--)
	 {
	 int p=j-1;
	 int t=rand()%ran;
	     temp = n[p];
	     n[p]= n[t];
		 n[t]=temp;
		 ran=ran-1;
	 }
	 
	 for(int j=0; j<CARD_NUM_MAX;j++)
	  {
	 shuffle_card_result[j]=n[j];
	 }
	
}
