#include"include.h"
 
 void shuffle_Card(void)
 {

	 debug_printf("shuffle_Card start\n");
	   
	 int n[CARD_MARK*CARD_NUM_MAX-CARD_MARK] = {0};
	 
	 srand( (unsigned)time( NULL ) );
	 
	 int NUMcard = 1;
	 int flag =0; 
     for(int s=0; s<CARD_MARK*CARD_NUM_MAX-CARD_MARK;s++)
	  {
	         flag=0;
			 n[s]=NUMcard;
		  NUMcard++;


		  for(int i=0;i<CARD_MARK;i++)
		  {for(int j=0;j<CARD_NUM_MAX;j++)
		  {
		   if((((CARD_NUM_MAX*i)+j)+1)==NUMcard)
		   {
			   if(Field[i][j][0]==1){
				   flag=1;
			   }
		   }
		  }
		  }
		
      if(flag){
		  NUMcard++;
	  }
	 }
	 
	 int ran=CARD_MARK*CARD_NUM_MAX-CARD_MARK;
	 int temp;
	 
	 for(int j=CARD_MARK*CARD_NUM_MAX-CARD_MARK; j>0;j--)
	 {
	 int p=j-1;
	 int t=rand()%ran;
	     temp = n[p];
	     n[p]= n[t];
		 n[t]=temp;
		 ran=ran-1;
	 }
	 
	 for(int j=0; j<CARD_MARK*CARD_NUM_MAX-CARD_MARK;j++)
	  {
	 shuffle_Card_result[j]=n[j];
	 debug_printf("%3d",shuffle_Card_result[j]);
	 }	

	 debug_printf("\n");
 }
