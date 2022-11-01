#include<stdio.h>
#include<time.h>
int main(){
	int a,b,c;
	srand(time(NULL));
	a=rand()%50+51;
	b=rand()%50+51;
	if(a>=b)printf("%d",a);
	else printf("%d",b);
}
