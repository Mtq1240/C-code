#include <stdio.h>
#include "game.h"

void menu()
{
	printf(" ************************\n");
	printf(" ******* 1. play  *******\n");
	printf(" ******* 0. exit  *******\n");
	printf(" ************************\n");
}

void game()
{
	//存储数据 - 二维数组创建3*3的数据
	char board[ROW][COL];

	//初始化棋盘 - 初始化为空格
	InitBoard(board, ROW, COL);

	//打印一下棋盘 - 本质是打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接收游戏状态
	while (1)	//持续进行游戏,否则会返回到菜单
	{
		//玩家走,走完打印棋盘
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家输赢
		 ret=IsWin(board, ROW, COL);
		 if (ret != 'C')
			 break;

		//电脑走,走完打印棋盘
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑输赢
		 ret=IsWin(board, ROW, COL);
		 if (ret != 'C')	//等于C,结果为假,没有break,继续进行游戏
			 break;
	}
	if (ret == '*')
	{
		printf("玩家赢得比赛.\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢得比赛.\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}
	
	int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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
