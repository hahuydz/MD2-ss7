#include<stdio.h>
int main(){
	int num[5];
	for(int i=0; i<5; i++){
		printf("So thu %d:  ",i+1);
		scanf("%d",&num[i]);
	}
	for(int i=0; i<5; i++){
		printf("num[%d] = %d \n ",i,num[i]);
	}
	return 0;
}
