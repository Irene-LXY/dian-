#include <stdio.h>

int main()
{
	
	//��ʼ�� 
	int price=0;
	int bill=0;
	//�������Ʊ�� 
	printf("�������ܼۣ�"); 
	scanf("%d",&price);
	printf("������Ʊ�棺");
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
		return 0;
		}
    }
    printf("Ӧ����%dԪ\n",bill-price);	
	return 0;
} 
