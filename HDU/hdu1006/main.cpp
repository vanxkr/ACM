#include <cstdio>
#include <iostream>
#define max1(a,b,c) (a>b?a:b)>c?(a>b?a:b):c
#define min1(a,b,c) (a<b?a:b)<c?(a<b?a:b):c
#define HM 43200.0/11
#define MS 3600.0/59
#define SH 43200.0/719
#define DHM 120.0/11
#define DMS 10.0/59
#define DSH 120.0/719
using namespace std;
int main()
{
    double sum = 0.0, d, timex, timey;
    double dms, dsh, dhm, tdms, tdsh, tdhm;
    while(scanf("%lf", &d) && -1 != d)
    {
        sum=0;
        dhm = d*DHM;
        tdhm = HM - dhm;
        dms = d*DMS;
        tdms = MS - dms;
        dsh = d*DSH;
        tdsh = SH - dsh;
        timex = max1(dhm, dms, dsh);
        timey = min1(tdhm, tdms, tdsh);
        while(timex <= 43200 && timey <= 43200)
        {
            timex = max1(dms, dsh, dhm);
            timey = min1(tdms, tdsh, tdhm);
            if (timex < timey)
                sum += timey - timex;
            if (timey==tdms)
            {
                dms += MS;
                tdms += MS;
            }
            else if (timey == tdsh)
            {
                dsh += SH;
                tdsh += SH;
            }
            else if (timey == tdhm)
            {
                dhm += HM;
                tdhm += HM;
            }
        }
        printf("%.3lf\n",sum/432);
    }
    return 0;
}
