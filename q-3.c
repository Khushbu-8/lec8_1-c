#include<stdio.h>

void main(){
	int n;

	
	printf("Enter Array size :");
	scanf("%d",&n);
	
		int a[n],b[n],c[n];
		int i;
		
		printf("Enter value of A eliment\n");	
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter value of A eliment\n");	
	for(i=0; i<n; i++){
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
		
	}
	for(i=0; i<n;i++){
		c[i]=a[i]+b[i];
		printf("Sum of A and B is %d",c[i]);
	}
	
		

	
	
	
	
}
