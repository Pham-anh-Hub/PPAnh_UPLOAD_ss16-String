#include<stdio.h>
int main(){
	char string[] = "My name is Pham Phuong Anh";
	int size = strlen(string);
	int count = 0;
	for(int i = 0; i<size-1; i++){
		if(string[i]==' '){
			count++;
		}
	}
	printf("Chuoi da nhap co %d tu ", count+1);
	return 0;
}
