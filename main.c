#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char c;
	int num=0; 
	
	printf("문자열을 입력하세요: ");
	while((c=getchar())!='\n')//입력 문자가 개형문자가 나올 때까지 반복 
	{
	 if (c>='0'&&c<='9')
		//입력된 글자가 숫자인가
		num=num+1;
		//참이면 하나를 센다. 
		
	}
	
	printf("숫자의 개수는 %i개 입니다.", num);
		
	
	
	return 0;
	}
		
		 
	
	

