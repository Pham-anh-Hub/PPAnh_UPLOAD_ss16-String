#include<stdio.h>
int main(){
	char string[]= "Phuong Anh"; 
	int size = strlen(string);
	printf("Thanh phan cua chuoi la: \n"); 
	for(int i=0; i<size; i++){
		printf("%c   ",string[i]); 
	}
	return 0; 
}
