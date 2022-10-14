#include <stdio.h>
int main(){
	int a,b,c,d,f,g;
	a=5; b=6;c=2;d=4;f=7;
	g=(a+b)*c+c*d+(a+f)/d;
	printf("(%d+%d)*%d+%d*%d+(%d+%d)/%d=%d",a,b,c,c,d,a,f,d,g);
} 
