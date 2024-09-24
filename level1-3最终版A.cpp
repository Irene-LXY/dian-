#include <stdio.h>

int main()
{
	//初始化
	int z; 
	char x;
	int a,b,c;
	printf("请输入货物种类、请输入通道数、单价、货物个数:");
	scanf("%c %d %d %d",&x,&a,&b,&c);
	while ((z = getchar()) != '\n' && z != EOF);
	//开始购买 
	while(c>0)
	{
		//选择是否购买
		int choice;
		printf("购买请按1，退出请按2\n");
		scanf("%d",&choice);
		while ((z = getchar()) != '\n' && z!= EOF);
		if(choice==1)
		{		
			char y;
	        int m,n;	
			printf("请选择购买货物种类、通道数、购买个数：\n");
			scanf("%c %d %d",&y,&m,&n);
			while ((z = getchar()) != '\n' && z != EOF);
			//开始找零 
			if(x==y&&n<=c&&a==m)
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
		        continue;
		        }    
			}
            printf("应找您%d元\n",bill-price);
            c=c-n;
            printf("还剩余%d件存量",c);
            }      
            else
	        {
	        	printf("输入错误,请重新输入！\n");
	        	continue;
			}   
			    	
	    }
	    if(choice==2)
       		{
			printf("期待您下次光临\n");
       		break;
       	    }
       	else if(choice!=1&&choice!=2)
       		{
			printf("输入错误\n");
       		continue;
       	    }		
	}
		return 0;
}

