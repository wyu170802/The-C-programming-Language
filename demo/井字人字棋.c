#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void display();//��ʾ����//
void initChessboard();//��ʼ������// 
void playerSet();//�������//
void OplayerSet();//�Է�����// 
bool Iswin();//�ж��Ƿ�Ӯ��//
bool Isfull();//�ж��Ƿ�����// 
unsigned short chessboard [3][3];//���̣�1����ո�2������ң�5�����������// 
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
			printf("ƽ��");
			exit (0); 
		}
	}
	display(); 
	return 0;
	
}
//�������ܣ��������//  
void initChessboard()//��ʼ������//
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
//�������ܣ��ǳ�ʼ�����̣�1����ո�2������ң�5�����������//
void display()//��ʾ����//
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
//�������ܣ��������//  
void playerSet()//�������//
{
	int x,y,i,j;
	i=rand()%3+1;
	j=rand()%3+1;
	printf("����������x��y:");
    scanf("%d %d",&x,&y);
	while(chessboard[y][x]!=1)
	{
		while(getchar()!='\n');//������������// 
		printf("����������x��y:");
		scanf("%d %d",&x,&y);
	}
	chessboard[y][x]=2; 
	chessboard[i][j]=5;
}



