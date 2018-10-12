//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015年 菜鸟教程. All rights reserved.
//
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int day, x1 = 0, x2;
    day=9;
    x2=1;
    while(day>0) {
        x1=(x2+1)*2;  // 第一天的桃子数是第2天桃子数加1后的2倍
        x2=x1;
        day--;
    }
    printf("总数为 %d\n",x1);
    
    return 0;
}
