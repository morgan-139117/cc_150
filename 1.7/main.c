#include "stdio.h"

void main(){

	int pic[4][3] = {{1,2,0},{5,0,7},{9,10,11},{13,14,15}};

	int i = 0;
	int j = 0;

	int lenh = 4;//forgot to declare variables
	int lenv = 3;

	int row[lenh] ;
	int col[lenv] ;

	for(;i < lenh; i++){
		for(j = 0;j < lenv; j++){// forgot to reset j to 0 again
			if(pic[i][j] == 0){
				row[i] = 1;
				col[j] = 1;		
			}		
		}
	}

	for(i = 0;i < lenh;i++){
		printf("row:%d\n",row[i]);
	}

	for(i = 0;i < lenv;i++){
		printf("col:%d\n",col[i]);
	}

	
/*	
	for(i = 0;i < lenh; i++){//forgot to reset i back to 0
		for(j = 0;j < lenv; j++){//forgot to reset j back to 0
			if(row[i] == 1 || col[j] == 1){
				pic[i][j] = 0;	
			}		
		}
	}
*/	
	for(i = 0;i < lenh;i++){
		if(row[i] == 1){
			for(j = 0;j < lenv;j++){
				pic[i][j] = 0;		
			}
		}
	}

	for(i = 0;i < lenv;i++){
		if(col[i] == 1){
			for(j = 0;j < lenh;j ++){
				pic[j][i] = 0; // mistake here
			}
		}
	}
	
	for(i = 0; i < lenh; i++){
		for(j = 0;j < lenv;j++){
			printf("%d\n",pic[i][j]);
		}
	}
	
}
