#include<stdio.h>
 int main(){
 	int a,b,c;
  	scanf("%d%d%d",&a,&b,&c);
 	if((a+b>=c)&&(a+c>=b)&&(b+c>=a))
	 {if (a==b&&b==c&&a==c)printf("是等腰三角形");
	 else printf("是普通三角形");
}
	 else printf("不是三角形"); 
 }
