/*
思路:
①输入"("或"{"为入栈
②输入")"或"}"则与栈顶匹配
当输入完时(回车作为结束符)
1.若栈空,则表示匹配成功
2.若栈非空
	若栈顶为"("或"{",则表示缺右括号
	若栈顶为")"或"}",则表示缺左括号
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
