#include <stdio.h>
#include <math.h>
int main(){
	int a=3;
	int b=4;
	float At= (b*a)/2;
	float Pt= a+b+(sqrt((pow(a, 2)+pow (b,2))));
	printf("El perimeyrl total es = %f", Pt);
	printf("\n El area total es = %f", At);
	return 0;
}
