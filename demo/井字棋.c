#include<stdio.h>
int main()
{
//��ӡ���̣���Ĭ��Ϊ0// 
	int i,j,win;
	char qipan[3][3];
	for(i=0;i<3;i++)//ÿһ��// 
	{
		for(j=0;j<3;j++)//ÿһ��// 
		{
			qipan[i][j]='0';
			printf("  %c",qipan[i][j]);
		}
		printf("\n");
    }
//������壬�ж���Ӯ// 
    int player=1;
	while(player)
	{ 
	    int lie=0;
	    int hang=0;
	    int count=0;
	    printf("��%d������壨����������������\n",player);
	    scanf("%d %d",&hang,&lie);
	    lie--;
	    hang--;
	    if(qipan[hang][lie]!='0')//�жϸõط��Ƿ��Ѿ���������// 
	    {
	    	printf("�õط��Ѿ��������ˣ�����������");
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
	    for(i=0;i<3;i++)//ÿһ��// 
	    {
		    for( j=0;j<3;j++)//ÿһ��// 
		    {
			    printf("  %c",qipan[i][j]);
		    }
		    printf("\n");
       }
//�ж���Ӯ//
        win=0;//�ж��Ƿ�ƽ��// 
		win=1;//��Ĭ��Ϊƽ��// 
        for(i=0;i<3;i++)//ÿһ��// 
	    {
		    for( j=0;j<3;j++)//ÿһ��// 
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
	        for(i=0;i<3;i++)//�ж�ÿһ���Ƿ���������ͬ��// 
	        {
	            if(qipan[i][0]!='0' && qipan[i][0]==qipan[i][1] && qipan[i][1]==qipan[i][2])
	            {
	        	    win=2;
	        	    break;
			   }
            }
	        for( j=0;j<3;j++)//�ж�ÿһ���Ƿ���������ͬ��// 
	        {
		        if(qipan[0][j]!='0' && qipan[0][j]==qipan[1][j] && qipan[1][j]==qipan[2][j])
		        {
		    	    win=2;
		    	    break;
			    }
	        } 
//�ж϶Խ����Ƿ���������ͬ��//  
            if(qipan[0][0]!='0' && qipan[0][0]==qipan[1][1] && qipan[2][2]==qipan[1][1] || qipan[0][2]!='0' && qipan[0][2]==qipan[1][1] && qipan[1][1]==qipan[2][2])
            {
        	    win=2;
		    }
		} 
		if(win==2)
        {
        	printf("���%dӮ��\n",player);
        	break;
    	    
	    }
	    else if(win==1)
	    { 
	        printf("ƽ��\n");
	        printf("лл���룬���ʼ���\n"); 
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
