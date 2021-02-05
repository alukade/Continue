#include<stdio.h>
int main()
{
	int ch;

	while ((ch = getchar()) != '\n')//把获取的字符存放到ch中
	{
		if (ch == 'C')//遇到大写C时，continue,跳出
		{
			continue;
		}
		putchar(ch);//如果不是大写C，把getchar的原封不动输出

	}

	    putchar('\n');
		return 0;
}