#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <time.h>

#define PI  3.1415926535897932384626433832795
#define RAD 10000

typedef unsigned long DWORD;
typedef unsigned short WORD;//dfsdfdssdsf

///��stirling��ʽ
DWORD calcResultLen(DWORD n, DWORD rad)
{
    double r = 0.5*log(2*PI) + (n + 0.5)*log(n) - n;
    return (DWORD)(r/log(rad) + 2);
}

int main(void)
{
    DWORD i, n, carry, prod, len;
    WORD *buff, *pBeg, *pEnd, *p;
    while (scanf("%d", &n) != EOF)
    {
        long t = clock();
        len = calcResultLen(n, RAD);
        buff=(WORD*)malloc( sizeof(WORD)*len);
        if (buff==NULL)
            return 0;
        ///���´������n!
        pBeg=pEnd=buff+len-1;
        for (*pEnd = 1, i = 2; i <= n; i ++)
        {
            for (carry = 0, p = pEnd; p >= pBeg; p --)
            {
                prod = (DWORD)(*p)*i + carry;
                *p = (WORD)(prod % RAD);
                carry = prod / RAD;
            }
            while (carry > 0)
            {
                pBeg --;
                *pBeg = (WORD)(carry % RAD);
                carry /= RAD;
            }
        }
        t=clock()- t;
        ///��ʾ������
        for (p = pBeg + 1; p <= pEnd; p ++)
            printf("%04d", *p);
        printf("\n");
        printf(" %ld ms\n", t);
        free(buff);///�ͷŷ�����ڴ�
    }
    return 0;
}
