#include "stdio.h"
#include <windows.h>
#include <conio.h> ///�Ǳ�׼�������
int main(void)
{
   int i,j;
   for(j = 0;j <5;j++)
{
   sound(1000);
   for(i = 0;i < 10;i++)
   delay(10000);
   sound(700);
   for(i = 0; i <10;i++)
   delay(10000);
}
   nosound();
   return 0;
}

