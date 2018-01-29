#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void display();//显示棋盘//
void initChessboard();//初始化棋盘// 
void playerSet();//玩家下棋//
void OplayerSet();//对方下棋// 
bool Iswin();//判断是否赢了//
bool Isfull();//判断是否满棋// 
unsigned short chessboard [3][3];//棋盘，1代表空格，2代表玩家，5代表电脑下棋// 
int main()
{
	srand(time(NULL));
	initChessboard();
	display(); 
	playerSet();

	while (!Iswin)
	{
		if(Isfull)
		{
			printf("平局");
			exit (0); 
		}
	}
	display(); 
	return 0;
	
}
//函数功能：输出棋盘//  
void initChessboard()//初始化棋盘//
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			chessboard[i][j]=1;
		}
	} 
}
//函数功能：是初始化棋盘，1代表空格，2代表玩家，5代表电脑下棋//
void display()//显示棋盘//
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			switch (chessboard[i][j])
			{
				case 1:
					printf (" ");
					break;
				case 2:
					printf("x");
					break;
				case 5:
					printf("0");
					break;
			}
		}
	}
	printf("\n"); 
} 
//函数功能：玩家下棋//  
void playerSet()//玩家下棋//
{
	int x,y,i,j;
	i=rand()%3+1;
	j=rand()%3+1;
	printf("请输入坐标x和y:");
    scanf("%d %d",&x,&y);
	while(chessboard[y][x]!=1)
	{
		while(getchar()!='\n');//清除错误的数组// 
		printf("请输入坐标x和y:");
		scanf("%d %d",&x,&y);
	}
	chessboard[y][x]=2; 
	chessboard[i][j]=5;
}



