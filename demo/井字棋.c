#include<stdio.h>
int main()
{
//打印棋盘，并默认为0// 
	int i,j,win;
	char qipan[3][3];
	for(i=0;i<3;i++)//每一行// 
	{
		for(j=0;j<3;j++)//每一列// 
		{
			qipan[i][j]='0';
			printf("  %c",qipan[i][j]);
		}
		printf("\n");
    }
//玩家下棋，判断输赢// 
    int player=1;
	while(player)
	{ 
	    int lie=0;
	    int hang=0;
	    int count=0;
	    printf("请%d玩家下棋（输入行数和列数）\n",player);
	    scanf("%d %d",&hang,&lie);
	    lie--;
	    hang--;
	    if(qipan[hang][lie]!='0')//判断该地方是否已经有棋子了// 
	    {
	    	printf("该地方已经有棋子了，请重新落棋");
			continue; 
		}
	    if (player==1)
	    {
		    qipan[hang][lie]='1';
	    }
	    else
	    {
		    qipan[hang][lie]='2';
	    }
	    for(i=0;i<3;i++)//每一行// 
	    {
		    for( j=0;j<3;j++)//每一列// 
		    {
			    printf("  %c",qipan[i][j]);
		    }
		    printf("\n");
       }
//判断输赢//
        win=0;//判断是否平局// 
		win=1;//先默认为平局// 
        for(i=0;i<3;i++)//每一行// 
	    {
		    for( j=0;j<3;j++)//每一列// 
		    {
			    if(qipan[i][j]=='0')
			    {
			    	win=0;
			    	break;
				}
		    }
       }
       if(win==0)
       {
	        for(i=0;i<3;i++)//判断每一行是否有三个相同的// 
	        {
	            if(qipan[i][0]!='0' && qipan[i][0]==qipan[i][1] && qipan[i][1]==qipan[i][2])
	            {
	        	    win=2;
	        	    break;
			   }
            }
	        for( j=0;j<3;j++)//判断每一列是否有三个相同的// 
	        {
		        if(qipan[0][j]!='0' && qipan[0][j]==qipan[1][j] && qipan[1][j]==qipan[2][j])
		        {
		    	    win=2;
		    	    break;
			    }
	        } 
//判断对角线是否有三个相同的//  
            if(qipan[0][0]!='0' && qipan[0][0]==qipan[1][1] && qipan[2][2]==qipan[1][1] || qipan[0][2]!='0' && qipan[0][2]==qipan[1][1] && qipan[1][1]==qipan[2][2])
            {
        	    win=2;
		    }
		} 
		if(win==2)
        {
        	printf("玩家%d赢了\n",player);
        	break;
    	    
	    }
	    else if(win==1)
	    { 
	        printf("平局\n");
	        printf("谢谢参与，精彩继续\n"); 
	        break;
		}
	    if(player==1)
		{
			player=2;
		}
		else if(player==2)
		{
			player=1;
		}
    } 
	return 0;
}
