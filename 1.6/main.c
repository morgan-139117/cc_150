#include "stdio.h"


void main(){

	int pic[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	int i = 0;

	for(; i < 3 / 2; i++){
		for(j = i; j < 3  - i; j++){
			printf("top%d\n",pic[i][j]);	
		}
	}

	 i = 0;

	for(; i < 3 / 2; i++){
		for(j = i; j < 3  - i; j++){	
			printf("bottom%d\n",pic[3 - 1 - i][3 - 1 - j]);
		
		}
	}
	 i = 0;

	for(; i < 3 / 2; i++){
		for(j = i; j < 3  - i; j++){	
			printf("left%d\n",pic[3 - j - 1][i]);
			
		}
	}
	 i = 0;

	for(; i < 3 / 2; i++){
		for(j = i; j < 3  - i; j++){	
			printf("right%d\n",pic[j][3 - 1 - i]);
		}
	}


	






	for(i = 0; i < 3; i++){
		for(j = 0;j < 3;j++){
			printf("%d\n",pic[i][j]);
		}
	}


}
