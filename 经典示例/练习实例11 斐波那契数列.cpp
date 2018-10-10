//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015Äê ²ËÄñ½Ì³Ì. All rights reserved.
//
 
#include<stdio.h>
 
int main()
{
    int f1=1,f2=1,i;
    for(i=1;i<=20;i++)
    {
        printf("%12d%12d",f1,f2);
        if(i%3==0) printf("\n");
        f1=f1+f2;
        f2=f1+f2;
    }
    
    return 0;
}
