#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stone(){
	int low=0;
	int high=2;
	return (rand()%(high-low+1))+low;
}
int main(){
	srand(time(NULL));
	printf("The hand in which the stone lies is\n");
        int n=stone();
	if(n==1)
		printf("LEFT HAND");
	else if(n==2)
		printf("RIGHT HAND");
	else
		printf("NONE");
	return 0;
}
