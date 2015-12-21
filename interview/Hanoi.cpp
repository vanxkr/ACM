#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Hanoi {
public:

    string stepWrite (string from, string to) {
        return "move from "+from+" to "+to;
    }

    vector<string> getSolution(int n) {
        // write code here
        vector<string> step;
        // �ǵݹ�ʵ�֣�ģ�µݹ�˼��
         stack s;
         stack.push(new Disk(diskNum, 'A', 'B', 'C'));
         while ((popDisk = stack.pop()) != null) {
             if (popDisk.status == 1) {
                 System.out.println(popDisk.A + " -> " + popDisk.C);
             } else {
                 // ��˳�����
                 // ��ִ���ƶ� popDisk ����һ����Disk��ӵ�Stack
                 stack.push(new Disk(popDisk.status - 1, popDisk.B, popDisk.A,
                         popDisk.C));
                 // ��һ��statusΪ "1" ���ƶ�˳���� popDisk ��ͬ��Disk ��ӵ�Stack��
                 stack.push(new Disk(1, popDisk.A, popDisk.B, popDisk.C));
                 // ��ִ���ƶ� popDisk ��ǰһ����Disk��ӵ�Stack��
                 stack.push(new Disk(popDisk.status - 1, popDisk.A, popDisk.C,
                         popDisk.B));
             }
         }
     }
private:
    struct Disk {
        int diskNum;
        char left;
        char mid;
        char right;
    };
};

void hanoi(int n, char one, char two, char three)
{
    if (1 == n)
        move(one, three);
    else
    {
        hanoi(n - 1, one, three, two);
        move(one, three);
        hanoi(n - 1, two, one, three);
    }
}

void move(char x, char y)
{
    if (x == 'A' && y == 'B')
        printf("%c -> %c\n", x, y);
    else if (x == 'A' && y == 'C')
        printf("%c ->   -> %c\n", x, y);
    else if (x == 'B' && y == 'C')
        printf("     %c -> %c\n", x, y);
    else if (x == 'B' && y == 'A')
        printf("%c <- %c\n", y, x);
    else if (x == 'C' && y == 'A')
        printf("%c <-   <- %c\n", y, x);
    else
        printf("     %c <- %c\n", y, x);
}

