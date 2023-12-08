/*
Q.1 Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

enter row count :3
enter column count :3
enter value [0][0]:1
enter value [0][1]:2
enter value [0][2]:3
enter value [1][0]:4
enter value [1][1]:5
enter value [1][2]:6
enter value [2][0]:7
enter value [2][1]:8
enter value [2][2]:9

 1 2 3
 4 5 6
 7 8 9

 sum = 45
 */
 
#include<stdio.h>

void main(){
	
	
	int a[1000][1000];
	int r,c,i,j,sum=0,avg;

	printf("enter row count :");
	scanf("%d",&r);
	printf("enter column count :");
	scanf("%d",&c);

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf(" %d",a[i][j]);
				sum += a[i][j];

		}
		printf("\n");
			}
		printf("\n sum = %d",sum/r*c);

