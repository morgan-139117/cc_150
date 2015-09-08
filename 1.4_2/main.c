#include "stdio.h"
#include "stdbool.h"

void main(){


	char one[] = {'a','b','c','c'};

	char other[] = {'b','c','a','c'};

	int lenone = sizeof(one);
	bool flag = true;

	int i = 0;

	int asc[256] = {0};

	for(; i < lenone; i++){
		asc[one[i]] += one[i];
		asc[other[i]] -= other[i];
	}
	
	for(i = 0; i < 256; i ++){

		if(asc[i] != 0)
		flag = false;
	}

	printf("%d\n",flag);
}
