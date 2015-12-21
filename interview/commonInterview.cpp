// 常见面试易错题
// by xyx9436
// 2015-8-1 00:05:52
#include <cstdio>

int main()
{
    union pp {
        short a;
        struct {
            char x;
            char y; 
        }b;
    };
    pp p;
    p.b.x = 253;
    p.b.y = 253;
    printf("0X%08X\n", p.a);

    int st[] = {1, 2, 3, 4, 5};
    printf("%d\n", sizeof(st));

    


    return 0;
}
