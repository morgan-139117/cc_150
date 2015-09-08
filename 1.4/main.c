#include "stdio.h"
#include "stdbool.h"

void main(){

	char one[] = {'a','b','c','d'};
	char other[] = {'b','c','a','a'};

	int asc[256] = {0};
	bool flag = false;

	int pos = 0;
	int neg = 0;

	int i = 0;
	int j = 0;

	int lenone = sizeof(one);
	int lentwo = sizeof(other);

	for(;i < lenone;i++){
		asc[one[i]]++;
		pos++;
	}	
	for(;j < lentwo;j++){
		if(asc[other[j]] == 0) {
			break;
		}
		asc[other[j]] = asc[other[j]] - 1;
		neg++;
	}
	if(pos == neg) 
		flag = true;
	printf("%d\n",flag);

}
