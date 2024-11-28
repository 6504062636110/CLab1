#include <stdio.h>

int main(){
	int a;
	int b;
	scanf("n1=%d \n",&a);
	scanf("n2=%d",&b);
	if(a>b){
		printf("n1>n2=%d \n", a-b);
	}else{
		printf("n2>n1=%d \n", b-a);
	}
	
	return 0;
}
