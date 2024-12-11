#include<stdio.h>
#include<string.h>
int main(){
	char ten[20];
	printf("moi nhap vao ten cua ban : ");
	fgets(ten, 20, stdin);
	ten[strcspn(ten, "\n")]=0;
	printf("xin chao %s\n",ten);
	return 0;

}
