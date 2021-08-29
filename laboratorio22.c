#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a = 1;
    int b = 1;
    double myPi = 0;
    double teste;
    int interacao = 0;
    scanf("%lf", & a);
    for(int i = 1; i<999999999 ; i =i+2){
        myPi = myPi+(double)b*4.0/i;
        b = (b==1)?-1:1;
        interacao +=1;
        
        if(fabs(M_PI-myPi)<=a){
            break;
        }
    }

    printf("%d\n",interacao);

}