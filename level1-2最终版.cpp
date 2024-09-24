#include <stdio.h>

int main()
{
	
	//初始化 
	int price=0;
	int bill=0;
	//读入金额和票面 
	printf("请输入总价："); 
	scanf("%d",&price);
	printf("请输入票面：");
	while(bill<price)
	{
	int a=0;
	scanf("%d",&a);
	     if(a==1 or a==2 or a==5)
		{
		bill=bill+a;
		}
	    else
		{
		printf("输入错误\n");
		return 0;
		}
    }
    printf("应找您%d元\n",bill-price);	
	return 0;
} 
