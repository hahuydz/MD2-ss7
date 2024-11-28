#include<stdio.h>
int main(){
	int max,numbers[5] = {1,3,7,27,41};
	for(int i=0;i<5;i++){
		printf("array[%d] = %d\n",i,numbers[i]);
    max = numbers[0];
	if(numbers[i]>max){
		max = numbers[i];
	}	
		if(numbers[i]%2==0){
		printf("So chan la:%d\n",numbers[i]);
	}
	}
	printf("gia tri lon nhat la: %d",max);

	return 0;
}

	
