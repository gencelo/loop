#include<stdio.h>
//gcc ile gerlenirken -fno-stack-protector parametresi kullanılmalı
//10 sefer ekrana Havil yazar
void k(){
int x ;
*(&x+2)-=31;
}
int main(void){
int x  = 0;

	printf("Havil\n");
x++;
if(x<10){ 
  k();
}
else{
return -1;
}
}
