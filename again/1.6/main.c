#include "stdio.h"

int main(){

	int pic[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
	int i = 0;
	int j = 0;

	int len = 4;
	int tmp = 0;

	for(i = 0;i < len; i++){
		for(j = 0;j < len; j++){
			printf("%d\n",pic[i][j]);	
		}
	}

	

	for(i = 0;i < len /2; i++){
		for(j = i;j < len - i - 1; j++){
			tmp = pic[i][j];
			pic[i][j] = pic[len - j - 1][i];
			pic[len - j - 1][i] = pic[len - i - 1][len - j - 1]; //pic[len - j]
			pic[len - i - 1][len - j - 1] = pic[j][len - i - 1];
			pic[j][len - i - 1] = tmp;
		}
	}

	for(i = 0;i < len; i++){
		for(j = 0;j < len; j++){
			printf("%d\n",pic[i][j]);	
		}
	}

	return 1;
}
