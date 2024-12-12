#include<stdio.h>
int main(){
	int string[100];
	printf("Vui long nhap vao chuoi bat ki: ");
	gets(string);
	int size = strlen(string);
	
	printf("Chuoi vua nhap la: %s", string);
	printf("\nCo do dai la: %d",size);
	return 0;
}
