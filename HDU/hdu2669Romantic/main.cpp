#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
int extgcd(int a, long long b, int  &x, int &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	int d = extgcd(b, a % b, x , y);
	int t = x;
	x = y;
	y = t - a / b * y;
	return d;
}
int main()
{
	int a, b;
	int x, y;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		int gcd = extgcd(a, b, x, y);
		if (gcd == 1)
			if (x > 0)
				printf("%d %d\n", x, y);
			else
			{
				while (x < 0)
				{
					x = x + b; //其实应该是 x = x / gcd + b / gcd * t;
					y = y - a; //其实应该是 y = y / gcd + b / gcd * t;
				}
				printf("%d %d\n", x, y);
			}
		else
			printf("sorry\n");
	}
	return 0;
}
