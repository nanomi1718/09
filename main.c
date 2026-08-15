#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square_array(int a[], int size);
void print_array(int a[], int size);

void addMatrix(int A[][COLS], int B[][COLS], int c[][COLS])
	{
		int i,j;
		for (i=0; i<ROWS; i++)
			for (j=0; j<COLS; j++)
				c[i][j] = A[i][j]+B[i][j];
	}
void printMatrix(int A[][COLS])
{
	int i,j;
	for (i=0; i<ROWS; i++)
	{
		for (j=0;j<COLS;j++)
		printf("%3d", A[i][j]);
		printf("\n");
	}
}


int main(void)
{
	int A[ROWS][COLS]={
	{1,2,3},
	{5,6,7},
	{7,8,9}};
	int B[ROWS][COLS]= {
	{1,2,4},
	{0,1,3},
	{1,0,0}};
	int C [ROWS][COLS];
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
	
}
