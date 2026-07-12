#include <stdio.h>
#include <conio.h>

void insertionsort(int arr[],int n);
void selectionsort(int arr[],int n);
void printArray(int arr[],int n);

void insertionsort(int arr[],int n){
	int i, j, key;

	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;

		while(j>=0 && arr[j] < key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1]=key;
	}
}

void selectionsort(int arr[],int n){
	int i, j, maxidx, temp;

	for(i=0;i<n-1;i++){
		maxidx=i;
		for(j=i+1;j<n;j++){
			if(arr[j]>arr[maxidx]){
				maxidx=j;
			}
		}

		temp=arr[maxidx];
		arr[maxidx]=arr[i];
		arr[i]=temp;
	}
}

void printArray(int arr[], int n){
	int i;

	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	printf("\n");
}

int main(){
	int arr1[]={75,8,1,16,48,3,7,0};
	int arr2[]={75,8,1,16,48,3,7,0};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	clrscr();

	insertionsort(arr1, n);
	printf("Array sorted using insertion sort(descending order):\n");
	printArray(arr1, n);

	selectionsort(arr2, n);
	printf("Array sorted using selection sort(descending order):\n");
	printArray(arr2, n);

	getch();
	return 0;
}
