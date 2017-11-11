/*
 * File Name: pai
 * Author: None
 * Data: 2017-11-5 12:16:18 
 */
#include <stdio.h> 
#include <math.h>       /* 程序中调用绝对值函数 fabs，需包含 math.h  */  
int main( ) 
{      
	int flag, t;            
	double item, pi;      /* pi 用于存放累加和 */       
	/* 循环初始化 */         
	flag = 1;            /* 变量 flag 表示第 i 项的符号，初始为正 */      
	t = 1;                  /* 变量 t 表示第 i 项的分母，置第 1 项的分母为1  */      
	item = 1.0;            /*  item 中存放第 i 项的值，初值取 1 */     
	pi = 0;                 /* 置累加和 pi 的初值为0 */              
	while(fabs (item) >= 1e-6)
	{             
		item = flag * 1.0 / t;    /* 计算第 i 项的值 */         
		pi = pi + item;             /* 累加第 i 项的值 */          
		flag = -flag;           /*  改变符号，为下一次循环做准备 */         
		t = t + 2;                 /* 分母递增2 ，为下一次循环做准备 */     
	}      
	pi = pi * 4;              /* 循环计算的结果是 pi/4 */      
	printf("pi = %f\n", pi);  
	system("pause");
	return 0;
}
