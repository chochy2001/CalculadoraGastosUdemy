switch (gasto){
    case 1:
        printf("Seleccionaste metro\n\n");
        metro(ptrSueldo,ptrAcuMetro);
	    printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
        break;

    case 2:
	    printf("Seleccionaste cablebus\n\n");
        cablebus(ptrSueldo,ptrAcuCable);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
        break;

    case 3:
	    printf("Seleccionaste ecobici\n\n");
        ecobici(ptrSueldo,ptrAcuEco);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 4:
	    printf("Seleccionaste rtp\n\n");
        rtp(ptrSueldo, ptrAcuRTP);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 5:
	    printf("Seleccionaste metrobus\n\n");
        metrobus(ptrSueldo,ptrAcuMBus);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 6:
	    printf("Seleccionaste ruta\n\n");
        ruta(ptrSueldo,ptrAcuRuta);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 7:
	    printf("Seleccionaste Tren Ligero\n\n");
        trenLigero(ptrSueldo,ptrAcuTren);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 8:
	    printf("Seleccionaste gasolina\n\n");
        gasolina(ptrSueldo,ptrAcuGas,ptrGastoGas);
        printf("Tu sueldo actual es %0.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
    break;

    case 9:
        printf("INSTRUCCIONES: \n");
        arch=fopen("instrucciones.txt","r+");

        if(arch==NULL){
            printf("Error al abrir el archivo\n");
            return -1;
        }while ((caracter=fgetc(arch))!= EOF){
            printf("%c",caracter);
        }fclose(arch);
    break;

    case 10:

    printf("Servicio\tViajes\t\tMonto Gastado\n");
    printf("Metro\t\t%d\t\t%d\n", *ptrAcuMetro, (*ptrAcuMetro * 5));
    printf("Cablebus\t%d\t\t%d\n", *ptrAcuCable, (*ptrAcuCable * 5));
    printf("Ecobici\t\t%d\t\t%d\n", *ptrAcuEco, (*ptrAcuEco * 13));
    printf("RTP\t\t%d\t\t%d\n", *ptrAcuRTP, (*ptrAcuRTP * 3));
    printf("Metrobus\t%d\t\t%d\n", *ptrAcuMBus, (*ptrAcuMBus * 6));
    printf("Ruta\t\t%d\t\t%0.2f\n", *ptrAcuRuta, (*ptrAcuRuta * 5.5));
    printf("Tren Ligero\t%d\t\t%d\n", *ptrAcuTren, (*ptrAcuTren * 3));
    printf("Gasolina\t%d\t\t%0.2f\n", *ptrAcuGas, *ptrGastoGas);
    printf("\nSu sueldo restante es: %0.2f\n\n", *ptrSueldo);
    break;

    case 11:
        fd =fopen(direccion,"at");

    if (fd==NULL){
        printf("Error al crear el archivo\n");
    }
    printf("Escribe la fecha\n");
    gets(fecha);

    printf("El Archivo de Texto ha sido creado/Actualizado\n");
    printf("Con el nombre de Gastos.txt\n");

    fprintf(fd,"Fecha: %s\n",fecha);
    fprintf(fd,"Servicio\tViajes\tMonto Gastado\n");
    fprintf(fd,"Metro\t\t%d\t\t%d\n", *ptrAcuMetro, (*ptrAcuMetro * 5));
    fprintf(fd,"Cablebus\t%d\t\t%d\n", *ptrAcuCable, (*ptrAcuCable * 5));
    fprintf(fd,"Ecobici\t\t%d\t\t%d\n", *ptrAcuEco, (*ptrAcuEco * 13));
    fprintf(fd,"RTP\t\t\t%d\t\t%d\n", *ptrAcuRTP, (*ptrAcuRTP * 3));
    fprintf(fd,"Metrobus\t%d\t\t%d\n", *ptrAcuMBus, (*ptrAcuMBus * 6));
    fprintf(fd,"Ruta\t\t%d\t\t%0.2f\n", *ptrAcuRuta, (*ptrAcuRuta * 5.5));
    fprintf(fd,"Tren Ligero\t%d\t\t%d\n", *ptrAcuTren, (*ptrAcuTren * 3));
    fprintf(fd,"Gasolina\t%d\t\t%0.2f\n", *ptrAcuGas, *ptrGastoGas);
    fprintf(fd,"Su sueldo restante es: %0.2f\n\n\n\n", *ptrSueldo);
    break;

    case 0:
        printf("Gracias por usar el programa :)\n");
        hola=false;
    break;

    default:
	printf("Esa opcion no es valida\n\n");
        break;
    }
