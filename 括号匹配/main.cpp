/*
˼·:
������"("��"{"Ϊ��ջ
������")"��"}"����ջ��ƥ��
��������ʱ(�س���Ϊ������)
1.��ջ��,���ʾƥ��ɹ�
2.��ջ�ǿ�
	��ջ��Ϊ"("��"{",���ʾȱ������
	��ջ��Ϊ")"��"}",���ʾȱ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

int main(int argc, char *argv[])
{
	char ch, stack[MAX];
	int i = 0, flag = 0;
	while (scanf("%c", &ch) != EOF && ch != '\n')
	{
		if (ch == '(' || ch == '{')
		{
			i++;
			stack[i] = ch;
		}
		else if (ch == ')' || ch == '}')
		{
			if (stack[i] == '(' && ch == ')')
				i--;
			else if (stack[i] == '{' && ch == '}')
				i--;
			else flag = 1;
		}
		else flag = 1;
	}
	printf("%s\n", (i == 0 && flag == 0) ? "YES" : "NO");
	return 0;
}
