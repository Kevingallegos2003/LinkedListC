//Kevin Gallegos 1858764 PA1


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "List.h"
//this is lex the main file
//
//

int main(int argc, char* argv[]){
	//char x;
	//char y;
	//printf("Lex ");

	//int input = scanf("%s %s", x, y);
	//if (argc != 3){fprintf(stderr, "Error: Invalid amount of inputs.\n");
	//printf("%d", argc);
	FILE* in = fopen(argv[1], "r");
	if(argv[1]==NULL){fprintf(stderr, "can't read file\n");}
	//if(argv[1]!=NULL){printf("opened!\n");}
	FILE* out =  fopen(argv[2], "w");
	if(argv[2]==NULL){fprintf(stderr, "can't OPEN file\n");}
        //if(argv[2]!=NULL){printf("writing to file!\n");}
	List L= newList();
	int lengthlimit = 100;
	int lines = 0;
	char string[lengthlimit];

	while (fgets(string, lengthlimit, in) != NULL){
		lines++;
	}
	//printf("%d", lines);
	fseek(in, 0, SEEK_SET);
	char** arr;
	arr=malloc(lines*(sizeof(char*)));
	for(int i=0; i < lines; i++){
		arr[i] = malloc(sizeof(char)*lengthlimit);
		fgets(arr[i], lengthlimit, in);
	}
	//List L= newList();
	int n;
	for(int i=0; i<lines; i++){
		if(i==0){
			append(L,0);
		}
		else{
			moveFront(L);
			for(int x = 0; x<length(L); x++){
				n = get(L);
				if((strcmp(arr[i], arr[n])<= 0)){
					insertBefore(L,i);
					break;
				}
				if(x == length(L)-1){
					append(L,i);
					break;
				}
				moveNext(L);
			}
		}
		//i++;
	}
	moveFront(L);
	for(int i=0; i<lines; i++){
		fprintf(out, "%s", arr[get(L)]);
		//printf("%s", arr[get(L)]);
		moveNext(L);
	}

	fclose(in);
	fclose(out);
	int mlen = length(L);
	for(int i=0; i<mlen; i++){
		free(arr[i]);
	}
	free(arr);
	freeList(&L);
	L=NULL;
	return 0;
	
}
