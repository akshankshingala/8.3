/*
Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
For example,
Input:
Enter array's elements: 3

Enter size of n = 3
enter any value [0][0]1
enter any value [0][1]2
enter any value [0][2]3

enter any value [1][0]4
enter any value [1][1]5
enter any value [1][2]6

enter any value [2][0]7
enter any value [2][1]8
enter any value [2][2]9

123
456
789
border sum = 40
*/

#include<stdio.h>

main(){

	int a[100][100];
	int i,j,sum,n;

	printf("Enter size of n = ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("enter any value [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}	
		printf("\n");
	}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d",a[i][j]);
				if(i==0 || i==n-1 || j==0 || j==n-1){
				sum += a[i][j];
			}	

	}	
		printf("\n");
	}
	printf("border sum = %d",sum);
}

