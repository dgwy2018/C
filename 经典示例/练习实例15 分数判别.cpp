//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int score;
    char grade;
    printf("请输入分数： ");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
