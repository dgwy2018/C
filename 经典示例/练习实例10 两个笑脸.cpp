//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015�� ����̳�. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int i,j;
    printf("\1\1\n"); /*�������Ц��*/
    for(i=1;i<20;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c%c",29,29);
        printf("\n");
    }
    return 0;
}
