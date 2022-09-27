#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int x;
	int b;
	
	printf("input a number : ");
	scanf("%ui", &x);//unsigned면 양수  
	
	for (b=0; x !=0; x >>=1)
	{
		if(x & 1)//끝자리가 1일때 참이됌  
		   b++; 
	}
	printf("the result is : %i\n", b); 
	return 0;
}
