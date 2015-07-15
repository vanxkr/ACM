#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,d,e,f,s;
	int n;
	while(scanf("%d",&n) && n!=0)
	{
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
		s = (a*d+b*e+c*f-a*f-b*c-d*e)/2;
		n -=3;
		while(n--)
		{
			c = e,d = f;
			scanf("%lf%lf",&e,&f);
			s += (a*d+b*e+c*f-a*f-b*c-d*e)/2;
		}
		printf("%.1lf\n",s);
	}
}
