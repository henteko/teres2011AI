#include "include.h"

void init_Ai(){
	debug_printf("init_Ai() start!\n");

	char cdir[255];
	strcpy_s(cdir, Current_dir);
	strcat_s(cdir,"*.exe");

	int ai_count = 0;

	WIN32_FIND_DATA fd;
	HANDLE hFind = FindFirstFile( cdir, &fd);
	if( hFind != INVALID_HANDLE_VALUE )
	{
		do
		{
			//exeファイルの名前を取得
			char fname[_MAX_PATH],ext[_MAX_PATH],drive[_MAX_PATH],dir[_MAX_PATH];
			_splitpath(fd.cFileName,drive,dir,fname,ext);
			char cdir2[255];
			strcpy_s(cdir2, Current_dir);
			strcat_s(cdir2,fd.cFileName);

			ai[ai_count].no = ai_count + 1;
			strcpy_s(ai[ai_count].name, fname);
			ai[ai_count].pass = 0;
			strcpy_s(ai[ai_count].path, cdir2);
			ai[ai_count].rank = 0;
			for(int j=0;j<Hand_max_num;j++) {
				ai[ai_count].hand[j] = 0;
			}
			ai[ai_count].sum_rank = 0;

			ai_count++;
		}
		while( FindNextFile( hFind, &fd ) );
		FindClose(hFind);
	}

	/*
	int i;
	for(i=0;i<AI_NUM;i++){
		ai[i].no = i+1;
		ai[i].pass = 0;
		ai[i].rank = 0;
		for(int j=0;j<Hand_max_num;j++) {
			ai[i].hand[j] = 0;
		}
	}
	*/
	
	for(int j=0;j<AI_NUM;j++) {
		debug_printf("no:%d\n ",ai[j].no);
		debug_printf("name:%s\n",ai[j].name);
		debug_printf("pass:%d\n ",ai[j].pass);
		debug_printf("path:%s\n",ai[j].path);
		debug_printf("rank:%d\n",ai[j].rank);
		for(int z=0;z<Hand_max_num;z++) {
			debug_printf("%d ",ai[j].hand[z]);
		}
		debug_printf("\n");
	}
	
}
