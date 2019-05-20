#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void prva();
void druga();

int main(void){
	prva();
	return 0;
}

void prva(){
	druga();
}

void druga(){
	printf("raidm");
}