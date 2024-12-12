#include<stdio.h>
int main(){
	char string[] = "Pham Phuong Anh";
	int size = strlen(string);
	int count = 0;
	for(int i = 0; i<size-1; i++){
		if(string[i]==' '){
			count++;
		}
	}
	printf("Chuoi '%s' co %d chu cai ",string, size - count);
	return 0;
}
