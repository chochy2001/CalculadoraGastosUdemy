#include "librerias.h"
#include "declaracionesVariables.h"

int main() {
#include "asignacionApuntadores.h"

printf("****Bienvenido a tu calculadora de Gastos****\n\n");
printf("Ingrese su sueldo mensual: ");
scanf("%f",&sueldo); 

printf("\nQue desea hacer?\n");

while (hola){ //* mientras hola == true
    printf("\n\n1) Entrar al metro\n2) Usar el Cablebus");
    printf("\n3) Rentar una Ecobici\n4) Usar el rtp\n5) Entrar al metrobus\n6) Usar la ruta");
    printf("\n7) Entrar al Tren Ligero\n8) Cargar Gasolina\n9) Ver Instrucciones\n10) Ver gastos");
    printf("\n11) Imprimir Gastos en Archivo txt");
    printf("\n0) Salir del programa\nOpcion: ");

    scanf("%d",&gasto); 
    scanf("%c",&letra); 

    if (letra){
        printf("\n\n");
    }
    #include "casesPrincipal.h"
}

    return 0;
}
