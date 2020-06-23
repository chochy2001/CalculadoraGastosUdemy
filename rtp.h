#include <stdio.h> 

float rtp(float *ptrSueldo, int *ptrAcuRTP){
int viaje; 

if(*ptrSueldo<3){ 
printf("No puedes entrar al rtp\n");
}else{
*ptrSueldo -= 3; 
*ptrAcuRTP += 1; 
    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje); 

switch(viaje){ 
    
case 1: 
	if(*ptrSueldo<3){ 
	printf("No puedes viajar en el rtp con tu sueldo actual\n");
    }else{
        *ptrSueldo -= 3; 
        *ptrAcuRTP += 1; 
        printf("Se desconto otro viaje de rtp\n");
}break; 

case 2:
        printf("Gracias por viajar en el rtp\n");
        break; 

default: 
        printf("NO ES UN CASO VALIDO\n");
        break; 
}
}
        return *ptrSueldo, *ptrAcuRTP; 
}