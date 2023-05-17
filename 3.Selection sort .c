#include<stdio.h>
int main () {
	int i,n,temp,a[100],a1[100],j;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]){
				a1[i]=a[i];
			}
		}
	}
	printf("Sorted array using Selection sort : ");
	for(i=0;i<n;i++){
		printf("%d \t",a1[i]);
	}
	return 0;
}