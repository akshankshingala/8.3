/*
Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter the array's row size: 2
Enter the array's column size: 2

enter row count :2
enter column count :2
enter value A:[0][0]1
enter value A:[0][1]2
enter value A:[1][0]3
enter value A:[1][1]4
enter value B:[0][0]5
enter value B:[0][1]6
enter value B:[1][0]7
enter value B:[1][1]8
c= 6  c= 8  c= 10  c= 12
*/
#include<stdio.h>

main(){
	
	int a[100][100],b[100][100],d[200][200];
	int r,c,i,j;

	printf("enter row count :");
	scanf("%d",&r);
	printf("enter column count :");
	scanf("%d",&c);

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("enter value A:[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf("enter value B:[%d][%d]",i,j);
				scanf("%d",&b[i][j]);
		}
	}

		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				d[i][j]=a[i][j]+b[i][j] ;
		}

	}
		for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf("c= %d  ",d[i][j]);
		}

	}
