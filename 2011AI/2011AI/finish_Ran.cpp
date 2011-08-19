#include"include.h"

void finish_Ran() {
	printf("finish_Ran start!\n");

	for(int i=0;i<AI_NUM;i++) {
		free(ai[i].hand);
	}
}