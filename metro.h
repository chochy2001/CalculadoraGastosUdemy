#include <stdio.h>

float metro(float *ptrSueldo, int *ptrAcuMetro){
int viaje;

if (*ptrSueldo<5){
    printf("No tienes saldo suficiente para usar el metro\n");
}else{
    *ptrSueldo -=5;
    *ptrAcuMetro +=1;
    printf("Ya se desconto un viaje\nQuieres descontar otro?\n");
    printf("1)Si\n2)No\n");
    scanf("%d",&viaje);

    switch (viaje)
    {
    case 1:
        if (*ptrSueldo<5){
            printf("No puedes pasar de nuevo con tu sueldo actual\n");
        }else{
        *ptrSueldo -=5;
        *ptrAcuMetro +=1;
        printf("Ya se desconto otro viaje de metro\n");
        }break;
    
    case 2:
        printf("Gracias por viajar en metro\n");
        break;
    
    default:
    printf("NO ES UN CASO VALIDO\n");   
        break;
    }
}
    return *ptrSueldo,*ptrAcuMetro;
}