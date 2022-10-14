#include <stdio.h>
 int max(int x,int y){
 int t;
 if(x>y)t=x;
 else t=y;
 }
 int main(){
 	int a,b,m;
 	scanf("%d%d",&a,&b);
 	printf("a=%d,b=%d\n",a,b);
 	m=max(a,b);
 	printf("the max is:%d\n",m);
 }
