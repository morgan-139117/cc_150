class Main{

public static void main(String[] args){
	
	char[] test = {'a','a','b','c','a'};
	
	System.out.println(test[5]);

	//test[1] = test[2];

	int tail = 1;
	int j;

	for (int i = 1; i < test.length; i ++){
		for(j = 0; j < tail; j ++){
			if( test[j] == test[i]) break;		
		}	
		if(j == tail){
			test[tail] = test[i];
			tail++;
		}
		test[tail] = 0;	
	}
	System.out.println(test);

}

}
