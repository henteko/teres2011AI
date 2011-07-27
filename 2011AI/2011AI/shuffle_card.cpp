#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
  
 
 void shuffle_card(void)
 {
	 int n[52];
	srand( (unsigned)time( NULL ) );
	
	  for(int j=0; j<52;j++)
	  {
	    n[j]=j;
	  }
	 
	 
	 int ran=52;
	 int temp;
	 
	 for(int j=52; j>0;j--)
	 {
	 int p=j-1;
	 int t=rand()%ran;
	     temp = n[p];
	     n[p]= n[t];
		 n[t]=temp;
		 ran=ran-1;
	 }

	 
	 return;
}

