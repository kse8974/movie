#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"
#include "linkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fp; //FILE pointer for reading movie data 
	char name[200]; //movie name
	char country[10]; //movie country
	int runTime; //movie runtime
	float score; //movie score
	
	int exit_flag = 0; //flag variable for while loop
	int option; //user input option
	void *list, *mvInfo; //pointers for linked list and a specific structure instance for a movie data
	int (*repFunc)(void* obj, void* arg); //function pointer for using list_repeatFunc() function
	void *arg; //a void pointer for passing argument to repFunc
	int cnt; //integer variable
	char temp[100]; // case1에서 한줄 불러올때 사용함 
	
	
	//1. reading the movie.dat-----------------------------
	fp = fopen("movie.dat","r"); //1.1 FILE open
	
	//1.2 list generation (use function list_genList() )
	list = list_genList();
	
	//1.3 read each movie data from the file and add it to the linked list
	while ( EOF != fscanf(fp, "%c %c %i %f", &name, &country, &runTime, &score)/* read name, country, runtime and score*/ )
	{	
		//generate a movie info instance(mvInfo) with function mv_genMvInfo()
		list_addTail(mvInfo, list);
	}

	fclose(fp); //1.4 FILE close
	
	//2. program start
	while(exit_flag == 0)
	{
		//2.1 print menu message and get input option
		printf("---------------Menu---------------\n");
		printf("1. print all the movies\n");
		printf("2. search for specific country movies\n");
		printf("3. search for specific runtime movies\n");
		printf("4. search for specific score movies\n");
		printf("5. exit\n");
		printf("---------------Menu---------------\n");
		printf("\n");
		printf("--select an option :  ");
		scanf("%i", &cnt);
		
		switch(cnt)
		{
			case 1: //print all the movies
				printf("\nprinting all the movies in the list.....\n\n\n");
				printf("----------------------------------------\n");
				fp = fopen("movie.dat","r");
				while(NULL != fgets(temp, sizeof(temp), fp))
				{
					printf("%s\n", temp);
				}
				fclose(fp);
				arg = NULL;
				break;
				
			case 2: //print movies of specific country
				
				break;
				
			case 3: //print movies with long runtime
			
			
				
				break;
				
			case 4: //print movies with high score
				*int lowest_score;
			
				printf("lowest score:  ");		// 가장 작은 평점을 입력하시오 
				scanf("%d", &lowest_score);
				
				
				if()
				
				 	
				break;
				
			case 5:
				printf("\n\nBye!\n\n");
				exit_flag = 1;
				
				break;
				
			default:
				printf("wrong command! input again\n");
				break;
		}
		
		//2.2 printing operation by function pointer (list_repeatFunc() is called here)
		printf("-totally %d movies are listed\n");//2.3 print number of movies
	}
	
	return 0;
}
