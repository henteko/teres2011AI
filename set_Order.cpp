//tao31’S“–set_Order8/17//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void set_Order(){
	srand((unsigned int)time(NULL));
	int i;
	for(i=0;i<AI_NUM;i++);
	{
		int tmp = rand()%AI_NUM;
		int flag = 0;
		
		for(int j=0;j<AI_NUM;j++){
			if(Order_AI[i] == tmp){
				flag = 1;
			}
		}
		if(flag==0){
			Order_AI[i] == tmp;
			}
		else {
			i = i - 1;
			}
			return 0;}