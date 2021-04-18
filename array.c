#include <stdio.h>


int main() {

	int aiFeld[5] = {3,2,1}; //Array mit 5 Werten
	
	int i; 
	for (i=0; i<5;i++) {
		aiFeld[i]=aiFeld[i+1];
		printf("%d ", aiFeld[i]);
	}


//printf("%d \n", aiFeld[2]);
printf("Das Array besteht aus %d Bytes \n",sizeof(aiFeld));

}
