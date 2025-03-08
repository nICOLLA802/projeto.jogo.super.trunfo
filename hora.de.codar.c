#include <stdio.h>
int main(){
float temperatura, umidade;
 printf("ENTRE COM A TEMEPRATURA\n");
 scanf("%f" , &temperatura);
 printf("ENTRE COM A UMIDADE\n");
 scanf("%f", &umidade);

 if(temperatura>20){printf("ESTA CALOR\n");}
 else
 {printf("NAO ESTA CALOR\n");}
  if (umidade>30){printf("ESTA UMIDO\n");
  }
  else
  {
printf("NAO ESTA UMIDO\n");
  }
  


}