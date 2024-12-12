#include<stdio.h>
int main(){
	char string[]= "Lap trinh C"; 
	int size = strlen(string);
	printf("Thanh phan cua chuoi la: \n"); 
	for(int i=size-1; i>=0; i--){
		printf("%c   ",string[i]); 
	}
	return 0; 
}
