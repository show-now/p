#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<ctype.h>

typedef struct node{
	int info;
	struct node* link;
} NODE;

NODE* header = NULL;

void DISPLAY(){
	NODE* start = header;
	printf("\n***LIST***: ");
	while(start != NULL){
		printf("%d ", start->info);
		start = start->link;
	}
}

void INSERT(int item){
	NODE* newnode, * curptr;
	newnode = (NODE*)malloc(sizeof(NODE));

	newnode->info = item;
	newnode->link = NULL;

	if(header == NULL)
		header = newnode;
	else{
		curptr = header;
		while(curptr->link != NULL){
			curptr = curptr->link;
		}
		curptr->link = newnode;
	}

	DISPLAY();
}

void DELETE(int item){
	NODE *curptr = header, *prevptr = NULL;

	if(header == NULL){
		printf("\nEMPTY LIST");
		return;
	}

	while(curptr != NULL){
		if(curptr->info == item){
			if(curptr == header){
				header = curptr->link;
				free(curptr);
				curptr = header;
			}
			else{
				prevptr->link = curptr->link;
				free(curptr);
				curptr = prevptr->link;
			}
		}
		else{
			prevptr = curptr;
			curptr = curptr->link;
		}
	}

	DISPLAY();
}

void main(){
	int item, choice;
	clrscr();

	printf("\nInsertion: ");
	INSERT(61);
	INSERT(16);
	INSERT(8);
	INSERT(27);

	printf("\nDeletion: ");
	DELETE(8);
	DELETE(61);
	DELETE(27);

	getch();
}
