#include "stdio.h"

int main(){

	char test[6] = {'a','a','b','c','a'};
	printf("%s\n", test);

	int len = sizeof(test);
	int tail = 1;
	int j = 0;
        int i = 1;	
	for(; i < len; i++){
		for(j = 0; j < tail; j++){
			if(test[i] == test[j])break;
		}
		if(j == tail){
			test[tail] = test[i];
			tail++;
		}
		test[tail] = '\0';
	}
	printf("%s\n", test);
return 0;
}
