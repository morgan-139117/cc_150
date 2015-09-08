#include "stdio.h"


int main(){
    
	char abc[] ="abcde e";//modifiable char array
	//do not use char * abc = "abcd", which create ready-only char array
	char* end = abc;
	char* str = abc;

	char tmp;

	while(*end){
	 ++end;
	}
	end--;

	while(str < end){
	  tmp = *str;
	  *str++ = *end;
	  *end-- = tmp;
	}

	printf("%s\n",abc);
}
