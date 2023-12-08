/*
Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

enter row count :3
enter column count :3
enter value[0][0] :1
enter value[0][1] :2
enter value[0][2] :3
enter value[1][0] :7
enter value[1][1] :8
enter value[1][2] :9
enter value[2][0] :4
enter value[2][1] :5
enter value[2][2] :6

1  2  3
7  8  9
4  5  6

 daigonal sum = 15


 */
#include<stdio.h>

main(){
	
	int a[10][10];
	int r,c,i,j,sum;

	printf("enter row count :");
	scanf("%d",&r);
	printf("enter column count :");
	scanf("%d",&c);

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
	}
}
	printf("\n");
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf("%d  ",a[i][j]);
		if(i==j){
		sum += a[i][j];
		}	

	}
		printf("\n");
	}
	printf("\n daigonal sum = %d",sum);

}
