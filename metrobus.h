#include <stdio.h> 

float metrobus(float *ptrSueldo, int *ptrAcuMBus){
int viaje; 

if(*ptrSueldo<6){ 
printf("No puedes ingresar al metrobus con tu sueldo actual\n");
}else{
    *ptrSueldo -= 6; 
    *ptrAcuMBus += 1; 

    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje); 

switch(viaje){ 
case 1: 
	if(*ptrSueldo<6){ 
	printf("No puedes viajar en el metrobus con tu sueldo actual\n");
}else{
        *ptrSueldo -= 6; 
        *ptrAcuMBus += 1; 
        printf("Se desconto otro viaje de Metrobus\n");
}break; 

case 2: 
        printf("Gracias por viajar en el Metrobus\n");
        break; 

default: 
        printf("NO ES UN CASO VALIDO\n");
        break; 
}
}
        return *ptrSueldo, *ptrAcuMBus; 
}
