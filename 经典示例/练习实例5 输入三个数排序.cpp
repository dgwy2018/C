//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015�� ����̳�. All rights reserved.
//
 
#include <stdio.h>
 
int main()
{
    int x,y,z,t;
    printf("\n��������������:\n");
    scanf("%d%d%d",&x,&y,&z);
    if (x>y) { /*����x,y��ֵ*/
        t=x;x=y;y=t;
    }
    if(x>z) { /*����x,z��ֵ*/
        t=z;z=x;x=t;
    }
    if(y>z) { /*����z,y��ֵ*/
        t=y;y=z;z=t;
    }
    printf("��С��������: %d %d %d\n",x,y,z);

} 
