#include<stdio.h>

void main(){
	int n, cnt;

	
	printf("Enter Array size");
	scanf("%d",&n);
	
		int a[n];
		int i;
		
		
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		cnt=i;
	}
	
		printf(" lengh is %d",cnt);

	
	
	
	
}
