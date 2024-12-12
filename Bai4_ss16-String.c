#include<stdio.h>
int main(){
	char string[]= "Phuong Anh"; 
	char item; 
	int size = strlen(string), count;
	printf("Moi nhap vao 1 ky tu bat ki: ");
	scanf("%c",&item); 
	for(int i=0; i<size; i++){
		if(string[i]==item){
			count++;
		} 
	}
	printf("Ky tu '%c' xuat hien %d lan trong chuoi ",item, count);
	return 0; 
}
