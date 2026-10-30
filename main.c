#include <stdio.h>

int main(void) 
{
	
	int i;
	int grade[5];  // array declaration
    
	grade [0]=10;
	grade [1]=20;
	grade [2]=30;
	grade [3]=40;
	grade [4]=50;
	
	for (i=0;i<5;i++)
		printf("grade[%d]= %d\n",i, grade[i]);
	
	return 0;
}
