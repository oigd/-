#include <stdio.h>
 int max(int x,int y,int z,int h){
 int t;
 if(x>y,x>z,x>h)t=x;
 if(y>x,y>z,y>h)t=y;
 if(z>x,z>y,z>h)t=z;
 else t=h;
 
 }
 int main(){
 	int a,b,c,d,m;
 	scanf("%d%d%d%d",&a,&b,&c,&d);
 	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
 	m=max(a,b,c,d);
 	printf("the max is:%d\n",m);
 }
