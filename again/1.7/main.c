#include "stdio.h"

int main(){

	int a[4][3] = {{1,2,0},{4,0,6},{7,8,9},{10,11,12}};
	int i = 0;
	int j = 0;
	int row = 4;
	int col = 3;

	int testrow[4] = {1,1,1,1};
	int testcol[3] = {1,1,1};

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\n", a[i][j]);
		}
	}


	for(i = 0;i < row; i++){
		for(j = 0;j < col;j++){
			if(a[i][j] == 0){
				testrow[i] = 0;	testcol[j] = 0;			
			}			
		}
	}

	for(i = 0;i < row;i++){
		if(testrow[i] == 0)
		for(j = 0;j < col;j++){
			a[i][j] = 0;
		}	
	}
	

	for(j = 0;j < col;j++){
		if(testcol[j] == 0)//forgot to change to j 
		for(i = 0;i < row;i++){
			a[i][j] = 0;//wrong here again
		}	
	}
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d\n", a[i][j]);
		}
	}

	return 0;
}
