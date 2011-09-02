#include"include.h"

void distribute_Card(){

	int s=0;
	for(int i=0;i<Hand_max_num;i++)
	{
     for(int j=0;j<AI_NUM;j++) 
	 {
      ai[j].hand[i] = shuffle_Card_result[s]
	  s++;
     }
    }

}