/*
 * File Name: factorial
 * Author: liurujia
 * Data: 2017-11-5 12:16:18 
 */
#include<stdio.h>
int main()
{
  int n, S = 0;
  int i = 1,j;
  int factorial;
  scanf("%d", &n);
  for(; i <= n; i++)
  {
    factorial = j = 1;
    for(; j <= i; j++)
    	factorial *= j;
    S += factorial;

  }
  printf("%d\n", S% 1000000); // 因为只要末6位，所以输出时对10^6取模
  return 0;
}

