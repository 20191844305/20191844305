#include<stdio.h>
#include<math.h>
int main()
	{
	 int num,place;
	 printf("������һ����������λ������:");
	 scanf("%d",&num);
	 if(num>9999)
	    place=5;
	 else if(num>999)
		     place=4;
	 else if(num>99)
		     place=3;
	 else if(num>9)
		     place=2;
	 else place=1;
	 printf("λ��:%d\n",place);
	 return 0;
	}