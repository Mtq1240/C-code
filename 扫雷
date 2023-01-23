#define _CRT_SECURE_NO_WARNINGS 1

#include"game2.h"

void menu()
{
	printf(" ************************\n");
	printf(" ******* 1. play  *******\n");
	printf(" ******* 0. exit  *******\n");
	printf(" ************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 }; //存放布置好雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0' );//'0'
	InitBoard(show, ROWS, COLS, '*' );//'*'

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}
