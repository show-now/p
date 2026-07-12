#include<stdio.h>
#include<conio.h>

struct array{
	int data[100];
	int size;
};

int i;

int linearsearch(struct array arr,int key){
	for( i=0;i<arr.size;i++){
		if(arr.data[i]==key)
			return i;
	}
	return -1;
}
int binarysearch(struct array arr,int key){
	int left=0,right=arr.size-1;

	while(left<=right){
		int mid=left+(right-left)/2;
		if(arr.data[mid]==key)
			return mid;
		if(arr.data[mid]<key)
			left=mid+1;
		else
			right=mid-1;
	}
	return -1;
}

void main(){
	struct array arr;
	int key,choice,i,result;
	clrscr();

	printf("Enter the number of elements in array: ");
	scanf("%d",&arr.size);
	printf("Enter %d element(sorted array): ",arr.size);

	for( i=0;i<arr.size;i++){
		scanf("%d",&arr.data[i]);
	}

	printf("Enter the element to search:");
	scanf("%d",&key);

	printf("Choose search method:\n 1.linearsearch \n 2.binarysearch\n");
	scanf("%d",&choice);

	if(choice==1){
		result=linearsearch(arr,key);
	}
	else if(choice==2){
		result=binarysearch(arr,key);
	}
	else{
		printf("Invalid choice!\n");
	}

	if (result!=1){
		printf("Element found at index: %d\n",result);
	}
	else{
		printf("Element not found ");
	}

	getch();
}