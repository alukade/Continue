#include<stdio.h>
int main()
{
	int ch;

	while ((ch = getchar()) != '\n')//�ѻ�ȡ���ַ���ŵ�ch��
	{
		if (ch == 'C')//������дCʱ��continue,����
		{
			continue;
		}
		putchar(ch);//������Ǵ�дC����getchar��ԭ�ⲻ�����

	}

	    putchar('\n');
		return 0;
}