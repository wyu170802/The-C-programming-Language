/*
 * File Name: bubblesort
 * Author: andrewasq
 * Data: 2017-11-5 13:05:17
 */
#include <stdio.h>  
int main()  
{   
    int a[10];   
    int i, j, temp;   
  
    // ����10����������   
    printf("Please input ten numbers: \n");   
    for (i = 0; i < 10; i++)   
        scanf("%d", &a[i]);   
  
    // ����   
    for (i = 0; i < 9; i++) // 10������10 - 1��ð�ݣ�ÿһ�ֶ�����ǰ�������Ƶ����   
    {   
        for (j = 0; j < 9 - i; j++) // 9 - i����˼��ÿ������һ��ð�ݺ󣬾ͼ���һ�αȽ�   
        if (a[j] > a[j+1])   
        {   
            temp = a[j];   
            a[j] = a[j+1];   
            a[j+1] = temp;   
        }   
    }   
    // ��ӡ������   
	for (i = 0; i < 10; i++)   
		printf("%d ", a[i]);   
	printf("\n");
    system("pause");
    return 0;   
}  
