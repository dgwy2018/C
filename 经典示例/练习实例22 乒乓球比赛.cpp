//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015年 菜鸟教程. All rights reserved.
//
 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char i,j,k;
    for(i='x';i<='z';i++) {
        for(j='x';j<='z';j++) {
            if(i!=j) {
                for(k='x';k<='z';k++) {
                    if(i!=k&&j!=k) {
                        if(i!='x'&&k!='x'&&k!='z') {
                            printf("顺序为：a--%c\tb--%c\tc--%c\n",i,j,k);
                        }
                    }
                }
            }
        }
    }
}
