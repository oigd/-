#include<stdio.h>
int main(){
	char c;
	c=getchar();
	if(c>='a'&&c<='z')printf("%c",c-32);
} 
