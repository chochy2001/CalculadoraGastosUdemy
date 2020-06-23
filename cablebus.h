#include <stdio.h>

float cablebus(float *ptrSueldo,int *ptrAcuCable){
int viaje;

if (*ptrSueldo<5){
printf("No puedes usar el cablebus con tu sueldo actual\n");
}else{
        *ptrSueldo -= 5; 
        *ptrAcuCable += 1; 
    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje); 

    switch (viaje){
    case 1:
	if(*ptrSueldo>5){
        *ptrSueldo -= 5; 
        *ptrAcuCable += 1; 
        printf("Se desconto otro viaje de Cablebus\n");
        }else{
	printf("No puedes viajar de nuevo con tu saldo actual\n");
}
	break; 

    case 2: 
        printf("Gracias por viajar en el Cablebus\n");
        break;
    
    default:
    printf("NO ES UN CASO VALIDO\n");
        break;
    }
}
    return *ptrSueldo,*ptrAcuCable;
}