#include <stdio.h> 

float ruta(float *ptrSueldo, int *ptrAcuRuta){
int viaje;

if(*ptrSueldo<5.5){ 
printf("No puedes ingresar con tu sueldo actual a la ruta\n");
}else{
*ptrSueldo -= 5.5; 
*ptrAcuRuta += 1; 

    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje); 

switch(viaje){ 

case 1: 
	if(*ptrSueldo<5.5){ 
	printf("No puedes viajar en la ruta con tu sueldo actual\n");
}else{
        *ptrSueldo -= 5.5; 
        *ptrAcuRuta += 1; 
        printf("Se desconto otro viaje de ruta\n");
	}break; 

case 2: 
        printf("Gracias por viajar en la Ruta\n");
        break; 

default: 
        printf("NO ES UN CASO VALIDO\n");
        break; 
}
}
        return *ptrSueldo, *ptrAcuRuta; 
}