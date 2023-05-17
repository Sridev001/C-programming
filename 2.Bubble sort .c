#include<stdio.h>
int main() {
	int i,n,temp,a[100],j;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	printf("Sorted array after bubble sort : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}