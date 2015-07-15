#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int m,n,a[101],b[101],i,j,c;
	while(scanf("%d%d",&m,&n),m+n)
	{
		for(i=0;i<m;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
					a[i]=0;
			}
		}
		sort(a,a+m);
		for(i=0,c=0;i<m;i++)
		{
			if(a[i]!=0)
			{
				c++;
				printf("%d ",a[i]);
			}

		}
		if(c==0)
			printf("NULL");
		printf("\n");
	}
	return 0;
}
