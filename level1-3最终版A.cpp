#include <stdio.h>
#include<string.h>

int main()
{
	//��ʼ�� 
	char x[1];
	int a,b,c;
	printf("�������������:");
	gets(x);
	printf("������ͨ���������ۡ����������\n");
	scanf("%d %d %d",&a,&b,&c);
	//��ʼ���� 
	while(c>=0)
	{
		//ѡ���Ƿ���
		int choice;
		printf("�����밴1���˳��밴2\n");
		scanf("%d",&choice);
		if(choice==1)
		{	
			
			char y[1];
	        int m,n;	
			printf("��ѡ����������ࣺ\n");
			gets(y);
			printf("������ͨ���������������\n");
			scanf("%d %d",&m,&n);
	        //������ȷ������������ѭ�� 
	        
			//��ʼ���� 
			if(strcmp(x,y)==0&&n>c&&a==m)
			{
			printf("�뿪ʼͶ�ң�\n");
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
		        printf("�������\n");
		        break;
		        }
                
			}
            printf("Ӧ����%dԪ\n",bill-price);
            c=c-n;
            }
            else
	        {
	        	printf("�������,���������룡\n");
	        	return 0;
			}
       	
       	
	    }
	    if(choice==2)
       		{
			printf("�ڴ����´ι���\n");
       		break;
       	    }
       	else
       		{
			printf("�������\n");
       		break;
       	    }
		
	}
		return 0;
}

