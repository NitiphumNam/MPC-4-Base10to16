#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
    int result[100];
    char ch[30];
    int round[30];
main()
{
	int Number;
	int bin,left,I=0;
	int Temp=0,j=0,k=0;
	printf("Put Your number");
	scanf("%d",&Number);
	system("cls");
	printf("Your result is:");
	do{
		bin = Number % 16;
		result[j] = bin;
		left = Number / 16;
		Number = left;
		Temp += 1;
		j++;
		printf("\n%d<<bin\n",bin);
	}while(Number);
	for(I=Temp-1;I>=0;I--)
	{
		if(result[I] >= 10)
		{
			if(result[I] == 10)
			{
				printf(" %c ",'A');
			}
			else if(result[I] == 11)
			{
				printf(" %c ",'B');
			}
			else if(result[I] == 12)
			{
				printf(" %c ",'C');
			}
			else if(result[I] == 13)
			{
				printf(" %c ",'D');
			}
			else if(result[I] == 14)
			{
				printf(" %c ",'E');
			}
			else if(result[I] == 15)
			{
				printf(" %c ",'F');
			}
		}
		else
		{
		printf(" %d ",result[I]);
		}
	}
}
