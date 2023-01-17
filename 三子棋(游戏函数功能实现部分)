#include"game.h"



//1.初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



//2.打印棋盘 - 本质是打印数组
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//只适用于三行三列:
	/*int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
			printf("---|---|---\n");
	}*/

	//适用于多行多列:
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);	//第一次打印第0,0,第二次0,1,第三次0.3
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}	
			printf("\n");
		
	}
}



//3.玩家下棋,判断合法性:
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:\n");
	
	//判断坐标合法性
	//玩家输入的坐标
	while (1)	//一直进行游戏
	{
		printf("请输入下棋的坐标-> :");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断合法性,因为是数组下标,玩家输入要-1.
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用,请重新输入!\n");
			}

		}
		else
		{
			printf("坐标非法,请重新输入!\n");
		}
	}
}


//4.电脑走,判断合法性
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	//rand函数随机生成随机值
	//引用rand函数前需要调用srand函数
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int IsFull(char board[ROW][COL], int row, int  col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘不满
			}
		}
	}
	return 1;//棋盘满了
}

//5.判断输赢
//1.玩家赢  -  返回*
//2.电脑赢  -  返回#
//3.平局    -  返回Q
//4.游戏继续-  返回c
char IsWin(char board[ROW][COL], int row, int  col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	//如果棋盘满了返回1,不满返回0
	int ret=IsFull(board,row,col);
	if (ret == 1)
	{
		return 'Q';
	}

	//继续
	return 'C';
}


