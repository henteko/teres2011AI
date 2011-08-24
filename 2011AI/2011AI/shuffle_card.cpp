

/*
説明
returnだと配列は返せないので
int mainのほうで
int shuffle_card_result[CARD_NUM_MAX]
と宣言しています。
そしてshuffle_card関数の引数をshuffle_card_resultとすることで
擬似的に配列を返す仕様になっています。
。

さらに配列の大きさ指定には変数は使えないので
#define CARD_NUM_MAX 52
と宣言してようやっと動くようになっています。

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
