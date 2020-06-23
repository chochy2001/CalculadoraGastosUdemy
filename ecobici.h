#include <stdio.h>

float ecobici(float *ptrSueldo, int *ptrAcuEco){
int viaje;
if(*ptrSueldo<13){ 
printf("No puedes rentar una ecobici con tu sueldo actual\n");
}else{
*ptrSueldo -= 13; 
*ptrAcuEco += 1; 

    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje); 
    
switch(viaje){ 

case 1: 
	if(*ptrSueldo<13){ 
printf("No puedes rentar una bicicleta con tu sueldo actual\n");
}else{
        *ptrSueldo -= 13; 
        *ptrAcuEco += 1; 
        printf("Se desconto otra renta de Ecobici\n");
}break; 
case 2: 
        printf("Gracias por viajar en la Ecobici\n");
        break; 

default: 
        printf("NO ES UN CASO VALIDO\n");
        break; 
}
}
    return *ptrSueldo,*ptrAcuEco;
}