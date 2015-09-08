#include "stdio.h"

int main(){
	
	char a[] = "a b c";

	int i = 0; 

	int cnt = 0;

	for(i = 0; i < sizeof(a) - 1;i ++){
		if(a[i] == ' ') cnt++;//if(a[i] == 0) cnt++;
	}printf("%d\n",cnt);	

	int resize = sizeof(a) - 1 + cnt * 2;

	
	char b[resize];
	
	int j = resize;
	
	for(i = sizeof(a) - 1; i > 0; i --){ this way i start from 5,4,3,2,1 rather than 4,3,2,1,0 
		if(a[i] == ' ')
		{
			b[j] = '0';
			b[j - 1] = '2';
			b[j - 2] = '%';
			j-= 3;
		}else{
			b[j] = a[i];
			j--;
		}			
	}


	for(i = 0; i < sizeof(b) ;i ++){
		
		printf("%c\n",b[i]);
	}	

  return 0;
}
