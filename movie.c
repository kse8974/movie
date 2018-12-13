#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

//structure definition
typedef struct movInfo {
	char name[100];
	float score;
	int runTime;
	char madeIn[10];
} movInfo_t;

void* mv_genMvInfo(char* name, float score, int runTime, char* country)
{
	movInfo_t* mvPtr;
	
	//allocate memory and set the member variables
	
	return (void*)mvPtr;
}

void printMv(void* obj)
{
	movInfo_t* mvPtr = (movInfo_t*)obj;
	if (mvPtr == NULL)
	{
		printf("[ERROR] failed to print the movie Info! (object is NULL)\n");
	}
	
	printf("Name : %s (%s)\n", mvPtr->name, mvPtr->madeIn);
	printf("running time : %i, score : %f\n", mvPtr->runTime, mvPtr->score);
	
	return;
}

int mv_printAll(void* obj, void* arg)
{
	struct movInfo movInfo_t;
	obj = fopen("movie.dat","r");
	fscanf(obj, "Name: %c (%c)\n", &movInfo_t.name, &movInfo_t.madeIn );
	fscanf(obj, "running time: %d, score: %f", &movInfo_t.runTime, &movInfo_t.score);
	fclose(obj);
	
	printf("Name: %c (%c)\n", movInfo_t.name, movInfo_t.madeIn );
	printf("running time: %d, score: %f", movInfo_t.runTime, movInfo_t.score);
	printf("----------------------------------------\n");
	
	return 0;
}

int mv_printScore(void* obj, void* arg)
{
	
}

int mv_printRunTime(void* obj, void* arg)
{
	
}

int mv_printCountry(void* obj, void* arg)
{
	
}




