#include "stdio.h"


//how many elements do I need to move for each row? Row number minus one.
//what is the looping range of j? i ~ len -i. 

void main(){

	int pic[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	int i = 0;
	int j = 0;

	for(i = 0; i < 4; i++){
		for(j = 0;j < 4;j++){
			printf("%d\n",pic[i][j]);
		}
	}

	for( i = 0; i < 4; i++){
		for(j = i; j < 4 - 1 - i;j++){
			printf("left%d\n", pic[4 - j - 1][i]);		
		}
	}

	

	for( i = 0; i < 4; i++){
		for(j = i; j < 4 - 1 - i;j++){
			printf("right%d\n", pic[j][4 - i - 1]);		
		}
	}


	for( i = 0; i < 4; i++){
		for(j = i; j < 4 - 1 - i;j++){
			printf("top%d\n", pic[i][j]);		
		}
	}


	for( i = 0; i < 4; i++){
		for(j = i; j < 4 - 1  - i;j++){
			printf("bottom%d\n", pic[4 - 1 - i][4 - 1 -j]);		
		}
	}	

	int len = 4;
	int tmp = 0;

	for(i = 0; i < len/2; i++){
		for(j = i; j < len - 1 - i; j ++){
			tmp = pic[i][j];
			pic[i][j] = pic[len - 1 - j][i];
			pic[len - 1 - j][i] = pic[len - 1 - i][len - 1 - j];
			pic[len - 1 - i][len - 1 - j] = pic[j][len - i - 1];
			pic[j][len - i - 1] = tmp;
		}
	}

	
	for(i = 0; i < 4; i++){
		for(j = 0;j < 4;j++){
			printf("%d\n",pic[i][j]);
		}
	}
}
