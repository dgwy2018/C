//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015�� ����̳�. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int i,j,result;
    printf("\n");
    for (i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            result=i*j;
            printf("%d*%d=%-3d",i,j,result); /*-3d��ʾ����룬ռ3λ*/
        }
    printf("\n"); /*ÿһ�к���*/
    }
}

//  http://www.runoob.com/cprogramming/c-exercise-example8.html 
