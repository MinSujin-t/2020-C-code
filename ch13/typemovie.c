//file: typemovie.c
#include <stdio.h>

int main(void)
{
	typedef struct movie
	{
		char* title;	//康拳力格
		int attendance;	//包按荐
	}movie;

	movie assassination;

	assassination.title = "鞠混";
	assassination.attendance = 12700000;

	printf("[%s] 包按荐: %d\n", assassination.title, assassination.attendance);

	return 0;
}