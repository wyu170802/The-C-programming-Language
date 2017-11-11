/*
 * File Name: pai
 * Author: None
 * Data: 2017-11-5 12:16:18 
 */
#include <stdio.h> 
#include <math.h>       /* �����е��þ���ֵ���� fabs������� math.h  */  
int main( ) 
{      
	int flag, t;            
	double item, pi;      /* pi ���ڴ���ۼӺ� */       
	/* ѭ����ʼ�� */         
	flag = 1;            /* ���� flag ��ʾ�� i ��ķ��ţ���ʼΪ�� */      
	t = 1;                  /* ���� t ��ʾ�� i ��ķ�ĸ���õ� 1 ��ķ�ĸΪ1  */      
	item = 1.0;            /*  item �д�ŵ� i ���ֵ����ֵȡ 1 */     
	pi = 0;                 /* ���ۼӺ� pi �ĳ�ֵΪ0 */              
	while(fabs (item) >= 1e-6)
	{             
		item = flag * 1.0 / t;    /* ����� i ���ֵ */         
		pi = pi + item;             /* �ۼӵ� i ���ֵ */          
		flag = -flag;           /*  �ı���ţ�Ϊ��һ��ѭ����׼�� */         
		t = t + 2;                 /* ��ĸ����2 ��Ϊ��һ��ѭ����׼�� */     
	}      
	pi = pi * 4;              /* ѭ������Ľ���� pi/4 */      
	printf("pi = %f\n", pi);  
	system("pause");
	return 0;
}
