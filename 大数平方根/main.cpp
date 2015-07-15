#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>

void sqrt(char *str)
{
	double i,r,n;
	int j,l,size,num,x[1005];
	size=strlen(str);
	if (size==1&&str[0]=='0')
	{
		cout<<0<<endl;
		return;
	}
	if (size%2==1)
	{
		n=str[0]-48;
		l=-1;
	}
	else
	{
		n=(str[0]-48)*10+str[1]-48;
		l=0;
	}
	r=0,num=0;
	while (true)
	{
		i=0;
		while (i*(i+20*r)<=n)
			++i;
		--i;
		n-=i*(i+20*r);
		r=r*10+i;
		x[num]=(int)i;
		++num;
		l+=2;
		if (l>=size)
			break;
		n=n*100+(double)(str[l]-48)*10+(double)(str[l+1]-48);
	}
	for (j=0; j<num; ++j)
		cout<<x[j];
	cout<<endl;

}
int main()
{
	char ch[1005];
	while (cin>>ch)
		sqrt(ch);
	return 0;
}
