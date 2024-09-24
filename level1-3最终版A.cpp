#include <stdio.h>
#include<string.h>

int main()
{
	//初始化 
	char x[1];
	int a,b,c;
	printf("请输入货物种类:");
	gets(x);
	printf("请输入通道数、单价、货物个数：\n");
	scanf("%d %d %d",&a,&b,&c);
	//开始购买 
	while(c>=0)
	{
		//选择是否购买
		int choice;
		printf("购买请按1，退出请按2\n");
		scanf("%d",&choice);
		if(choice==1)
		{	
			
			char y[1];
	        int m,n;	
			printf("请选择购买货物种类：\n");
			gets(y);
			printf("请输入通道数、购买个数：\n");
			scanf("%d %d",&m,&n);
	        //输入正确，则跳出下列循环 
	        
			//开始找零 
			if(strcmp(x,y)==0&&n>c&&a==m)
			{
			printf("请开始投币：\n");
	    	int price=b*n;
	    	int bill=0;
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
		        break;
		        }
                
			}
            printf("应找您%d元\n",bill-price);
            c=c-n;
            }
            else
	        {
	        	printf("输入错误,请重新输入！\n");
	        	return 0;
			}
       	
       	
	    }
	    if(choice==2)
       		{
			printf("期待您下次光临\n");
       		break;
       	    }
       	else
       		{
			printf("输入错误\n");
       		break;
       	    }
		
	}
		return 0;
}

