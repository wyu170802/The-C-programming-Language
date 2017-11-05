/*
 * File  Name: sin_and_cos
 * Data: 2017-10-28 16:03:27
 * Author: Ian
 * 
 */

// 上面只是举例，还有很多种写法
// 现在这个还不是重点，暂时别把时间放在研究代码注释风格上面
// 下面才是正题

#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1415926 // 宏定义，全局常量建议大家都这么定义

int main()
{
	int x;
	double sin_ans,cos_ans;
	printf("Input angle(0 to 360):"); // 输入最好有规定范围
	scanf("%d", &x);
	// 测试输入值是否符合要求,现在大家可写可不写，等输入复杂了，就必须要写了
	if(x<0 || x>360)
	{
		printf("Please input again(0 to 360):");
		scanf("%d", &x);
	}
	// 角度和弧度的换算关系：180度 = pi * 1弧度
	sin_ans = sin(x * (PI/180));
	cos_ans = cos(x * (PI/180));
	printf("sin%d = %lf\n" ,x ,sin_ans);
	printf("cos%d = %lf\n" ,x ,cos_ans);
	system("pause");
	return 0;
}