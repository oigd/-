#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	scanf("%d",&a);
	if(a<2000){
		if(a<1000){
			if(a<500)printf("%d",a); 
			else printf("%d",b=a*0.95);}
		else printf("%d",c=a*0.9);}
    else{
	if(a<3000)printf("%d",d=a*0.85);
	else printf("%d",e=a*0.8);
	}}

