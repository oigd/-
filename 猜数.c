#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
 srand (time(0));
 int b,t;
  int a=rand()%100;
  printf("����׼������\n�����������");
  do{scanf("%d",&t);
  if(t>a)printf("�������������\n����������");
  if(t<a) printf("���������С��\n����������"); 
  
    }while(a!=t);
    printf("��ϲ�㣬�ش���ȷ"); 
 }
