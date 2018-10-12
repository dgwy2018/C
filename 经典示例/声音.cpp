#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> ///非标准输入输出
int main()
{
    //Beep(698,1000); /// 控制计算机中的蜂鸣器 Beep(频率，声音的持续时间（毫秒）)
    char p;
    int i = 0;
    printf("input 1234567\n");
    while(i<100)
    {
        p = getch();
        switch(p-'0')
        {
        case 1:
            Beep(554,500);
            break;
        case 2:
            Beep(622,500);
            break;
        case 3:
            Beep(682,500);
            break;
        case 4:
            Beep(740,500);
            break;
        case 5:
            Beep(831,500);
            break;
        case 6:
            Beep(932,500);
            break;
        case 7:
            Beep(1046,500);
            break;
        default:
            break;
        }
        i++;
    }
    exit(0);
    return 0;
}

