#include <stdio.h>
int main() {
    double p;
    double a;
    double iMC;

    printf("Ingrese su peso en Kg \n");
   scanf("%lf", &p);
    printf("Ingrese su estatura en m \n");
   scanf("%lf", &a);
    iMC = p/(a * a);
    if (iMC >= 40.0) {
       printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que tienes Obesidad clase 3");
    } else if (iMC >= 35.0) {
           printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que tienes Obesidad clase 2");
        } else if (iMC >= 30.0) {
                   printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que tienes Obesidad clase 1");
            } else if (iMC >= 25.0) {
                   printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que tienes Sobrepeso");
                } else if (iMC >= 18.5) {
                       printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que tienes un peso normal");
                    } else {
                   printf("\n Tu IMC es de : %lf", iMC);
       printf("\n por lo que estas bajo de peso");
                    }
    return 0;            }



