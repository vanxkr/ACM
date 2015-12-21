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
        // 非递归实现：模仿递归思想
         stack s;
         stack.push(new Disk(diskNum, 'A', 'B', 'C'));
         while ((popDisk = stack.pop()) != null) {
             if (popDisk.status == 1) {
                 System.out.println(popDisk.A + " -> " + popDisk.C);
             } else {
                 // 反顺序添加
                 // 将执行移动 popDisk 的下一步的Disk添加到Stack
                 stack.push(new Disk(popDisk.status - 1, popDisk.B, popDisk.A,
                         popDisk.C));
                 // 将一个status为 "1" 且移动顺序与 popDisk 相同的Disk 添加到Stack中
                 stack.push(new Disk(1, popDisk.A, popDisk.B, popDisk.C));
                 // 将执行移动 popDisk 的前一步的Disk添加到Stack中
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

