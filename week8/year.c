/*
 * File Name: year
 * Data:2017-10-28 16:03:27
 * Author: Ian
 * 
 */

// 上面只是举例，还有很多种写法
// 现在这个还不是重点，暂时别把时间放在代码注释代码风格上面
// 下面才是正题

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
	int year;
	float sum = 0;
	printf("Please enter a year:");
	scanf("%d", &year);
	/*
	如果是整百年份,则除以400,能够整除则是闰年,否则为平年;
	如果不是整百年份,则除以4,能够整除则是闰年,否则为平年
	*/
	if((year%100!=0 && year%4==0) || (year%400==0))
		printf("yes\n");
	else
		printf("no\n");
	system("pause");
	return 0;
}