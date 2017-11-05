/*
 * File Name: discount
 * Data:2017-10-28 16:03:27
 * Author: Ian
 * 
 */

// 上面只是举例，还有很多种写法
// 现在这个还不是重点，暂时别把时间放在研究代码注释风格上面
// 下面才是正题

#include <stdio.h>
#include <windows.h>

int main()
{
	int price = 95,number;
	float sum = 0;
	printf("Please the number of closes:");
	scanf("%d", &number);
	sum = number * price;
	if(sum > 300)
	{
		printf("cost: %.2f \n", sum*0.85);
	}
	else
	{
		printf("cost: %.2f \n", sum);
	}
	system("pause");
	return 0;
}