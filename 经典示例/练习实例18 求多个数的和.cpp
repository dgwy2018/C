//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015�� ����̳�. All rights reserved.
//
 
#include<stdio.h>
int main()
{
    int s=0,a,n,t;
    printf("������ a �� n��\n");
    scanf("%d%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}
