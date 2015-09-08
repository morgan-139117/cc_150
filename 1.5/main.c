#include "stdio.h"


void main(){

	char test[] = {'a','b',' ','c',' ','d'};
 	int len = sizeof(test);
	int i = 0;
	int zcounter = 0;
	for(;i < len; i++){
		if(test[i] == ' '){
			zcounter++;
		}
	}
	char res[len + zcounter*2];
	int lenres = len + zcounter * 2;
	res[lenres] = '\0'; 
	int j = 0;
	for(j = len - 1;j >= 0;j --){
		if(test[j] == ' '){
			res[lenres - 1] = '0';
			res[lenres - 2] = '2';
			res[lenres - 3] = '%';
			lenres -= 3;
		}else{
		res[lenres - 1] = test[j];
		lenres -= 1;
		}
	}

	printf("%s\n", res);

}
