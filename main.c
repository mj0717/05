#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int x;
	int trial;
	
	do
	{
		printf("Guess a number :");//�Է��ض� ���� ���
		scanf("%i", &x);//�Է��� ����
		
		
		if (x<59)
			printf("low!\n");
		else if (x>59)
			printf("high!\n");
		else
			printf("Congratulation!\n");
		trial++;
		//�Է¼��ڰ� ���亸�� ū�� ������ ���	
			
	}while (x!=59);
	
	printf("Number of trial=%i\n", trial);
	

	
   
	
		
	
	
	return 0;
	}
		
		 
	
	

