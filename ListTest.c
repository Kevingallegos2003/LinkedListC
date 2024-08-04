//Kevin Gallegos 1858764 PA1


#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main(){
	printf("test\n");
	List A = newList();
	List B = newList();
	List C = newList();
	int i;
	//append(C, 7);
	moveFront(B);
	for(i=1; i<=20; i++){
		append(A,i);
        	prepend(B,i);
		prepend(C,i);
		//insertAfter(C,i+21);
		//insertBefore(C,i-1);

   	}
	clear(C);
	append(C,1);
	append(C,2);
	append(C,3);
	printList(stdout,C);
	printf("\n");
	moveFront(C);
	printf("moved to front\n");
	printf("%d",get(C));
	printf("\n");
        printf("%d",index(C));
        printf("\n");
	deleteFront(C);
	printList(stdout,C);
        printf("\n");
	printf("%d",index(C));
        printf("\n");
	deleteBack(C);
        printList(stdout,C);
        printf("\n");
	moveBack(C);
	printf("%d",get(C));
	printf("\n");
	printf("%d",index(C));
        printf("\n");
	insertBefore(C, 1);
	printf("%d",index(C));
        printf("\n");
	insertAfter(C, 4);
	printf("%d",index(C));
        printf("\n");
	insertAfter(C, 3);
	printList(stdout,C);
        printf("\n");
	printf("%d",index(C));
        printf("\n");
	delete(C);
	printList(stdout,C);
	printf("\n");








   //printList(stdout,A);
   //printf("\n");
   //printf("%d", index(B));
   //printf("\n");
   //printList(stdout,B);
   //printf("\n");
   //printf("%d", index(B));
   //printf("\n");
   //printf("%d", index(C));
   //printf("\n");
   //printList(stdout,C);
   //printf("\n");
   //printf("%d", index(C));
   //printf("\n");
      //for(moveFront(A); index(A)>=0; moveNext(A)){
      	//printf("%d ", get(A));
   //}
   //printf("\n");

   
}
//this is the list test
