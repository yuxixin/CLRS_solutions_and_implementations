#include <stdio.h>

int insertionSort(int input[],int len){
	int i,key,j;
	for(j = 2; j<len; j++){
		key = input[j];
		i = j-1;
		while(i>0 && input[i]>key){
			input[i+1]=input[i];
			i = i - 1;
		}
		input[i+1] = key;
	}

	for (int k = 0; k<len; k++){
		printf("%d\n",input[k]);
	}

	return 0;
}

int main(void){
	int input[] = {354,347,7692,827,296523,562,8756,803,734}; //sample input
	int len = sizeof(input)/sizeof(int); //C language can not calculate the length of an array after parameter passing.
	insertionSort(input,len);
	return 0;
}