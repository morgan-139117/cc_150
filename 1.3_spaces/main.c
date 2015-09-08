#include "stdio.h"
#include "stdbool.h"

int main(){

	char test[] = "aabca";
	bool asc[256] = {false};
	asc[test[0]] = true; //asc[0] = true;
	int tail = 1;	
	int i = 0;
	int len = sizeof(test);
	for(;i < len;i ++){
		if(asc[test[i]] != true){
			test[tail] = test[i];
			tail++;
			asc[test[i]] = true;//just forgot this
		}

	}
	test[tail] = '\0';
	printf("%s\n",test);


return 0;
}
