#include <stdio.h>
int main(){
int TP;
int IN;
printf("Quieres un Pizza normal o vegetariana?\n(contestar 1 para normal o 2 para vegetariana)\n");
scanf("%d",&TP);
if(TP==1){
    printf("\n Elige un ingrediente para tu pizza:\n 1.Pimiento \n  2.Tofu\n");
    scanf("%d",&IN);
    switch (IN){
    case 1: printf("Tu pizza es vegetariana y lleva mozzarella, tomate y pimiento");break;
    case 2: printf("Tu pizza es vegetariana y lleva mozzarella, tomate y tofu");break;
    default: printf("El ingrediente no existe, vuelva a intentar ");
    }
}else if(TP==2){
 printf("\n Elige un ingrediente para tu pizza:\n 1.Peperoni \n  2.Jamon \n 3.Salmon\n");
    scanf("%d",&IN);
    switch (IN){
    case 1: printf("Tu pizza es Normal y lleva mozzarella, tomate y peperoni");break;
    case 2: printf("Tu pizza es Normal y lleva mozzarella, tomate y jamon");break;
    case 3: printf("Tu pizza es Normal y lleva mozzarella, tomate y salmon");break;
    default: printf("El ingrediente no existe, vuelva a intentar");
    }

}else{
printf("El tipo de pizza no existe");
}
return 0;
}
