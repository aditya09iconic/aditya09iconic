#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,choice;
	int sum,sub,mul,div;
	char c='y';
	
	     while(c=='y')
	     {
	     	printf("\nAddition->1 \nSubstraction->2 \nMultiplication->3 \ndivision->4\n");
	     	printf("Enetr your choice of operation");
	     	scanf("%d",&choice);
	     	printf("Enter the values of a and b\n");
	     	scanf("%d%d",&a,&b);
	     	switch(choice)
	     	{
	     		case 1: sum= a+b;
	     		printf("\nsum= %d",sum);
	     		break;
	     		
	     		case 2: sub =a-b;
	     		printf("\nsub= %d", sub);
	     		break;
	     		
	     		case 3: mul= a*b;
	     		printf("\nmul= %d",mul);
	     		break;
	     		
	     		case 4: div= a/b;
	     		printf("\ndiv= %d",div);
	     		break;
	     		
	     		default: printf("\n wrong choice");
	     		
			 }
		    printf("\nDo you want to continue : Y / N");
		    c = getch();
		}
		getch();
		 
	     
}
