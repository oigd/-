#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
 srand (time(0));
 int b,t;
  int a=rand()%100;
  printf("我已准备好了\n你可以输入了");
  do{scanf("%d",&t);
  if(t>a)printf("你输入的数大了\n请重新输入");
  if(t<a) printf("你输入的数小了\n请重新输入"); 
  
    }while(a!=t);
    printf("恭喜你，回答正确"); 
 }
