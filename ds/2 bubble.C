#include <stdio.h>
#include <conio.h>

void main(){
	int a[50];
	int i,j,n,temp;
	clrscr();

	printf("Enter the value of num: ");
	scanf("%d",&n);

	printf("Enter the element one by one: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if (a[j] > a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("Sorted array is:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}

	getch();
}
