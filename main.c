#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int eleccionUsuario;//ELECCION DEL USUARIO
    float operandoUno; //PRIMER NUMERO QUE INGRESA EL USUARIO
    float operandoDos;// SEGUNDO NUMERO QUE INGRESA EL USUARIO
    float resultado_suma,resultado_resta,resultado_multiplicacion,resultado_division,resultado_factorial_1,resultado_factorial_2; //VARIABLES QUE ALMACENAN LOS RESULTADOS DE LAS OPERACIONES
    int salir=0; //VARIABLE QUE GUARDA LA OPCION DE SALIR DE LA CALCULADORA
    int flag_error; //FLAG EN CASO DE QUE NO SE INGRESE UNA OPCION CORRECTA


 do
  {
        printf("\n1. Ingresar 1er operando (A=%.2f)\n",operandoUno);
        printf("2. Ingresar 2do operando (B=%.2f)\n",operandoDos);
        printf("3. Calcular todas las operaciones\n");
        printf("  a). Calcular la suma (A+B)\n");
        printf("  b). Calcular la resta (A-B)\n");
        printf("  c). Calcular la division (A/B)\n");
        printf("  d). Calcular la multiplicacion (A*B)\n");
        printf("  f). Calcular el factorial (A!)\n");
        printf("4). Informar resultados\n");
        printf("5). Salir\n");

        flag_error=scanf("%d",&eleccionUsuario);
        fflush(stdin);
        if(flag_error==0)
           {
               eleccionUsuario=6;
           }


       switch(eleccionUsuario)
        {
            case 1:
                    system("cls");
                    utn_getFlotante(&operandoUno,"\nA = %.2f","\nerror - Numero invalido");
                    break;
            case 2:
                    system("cls");
                    utn_getFlotante(&operandoDos,"\nB = %.2f","\nerror - Numero invalido");
                    break;
            case 3:
                    resultado_suma=suma(&operandoUno,&operandoDos);
                    resultado_resta=resta(&operandoUno,&operandoDos);
                    resultado_division=division(&operandoUno,&operandoDos);
                    resultado_multiplicacion=multiplicacion(&operandoUno,&operandoDos);
                    resultado_factorial_1=factorial(&operandoUno);
                    resultado_factorial_2=factorial(&operandoDos);

                    break;
            case 4:
                    mostrarResultado(&operandoUno,&operandoDos,&resultado_suma,"\nEl resultado de %.2f + %.2f es: %.2f");
                    mostrarResultado(&operandoUno,&operandoDos,&resultado_resta,"\nEl resultado de %.2f - %.2f es: %.2f");
                    if(operandoDos==0)
                    {
                        printf("\nERROR - NO SE PUEDE DIVIDIR POR 0");
                    }
                    else
                        {
                            mostrarResultado(&operandoUno,&operandoDos,&resultado_division,"\nEl resultado de %.2f / %.2f es: %.2f");
                        }
                    mostrarResultado(&operandoUno,&operandoDos,&resultado_multiplicacion,"\nEl resultado de %.2f * %.2f es: %.2f\n");
                    mostrarFactorial(&operandoUno,&resultado_factorial_1);
                    mostrarFactorial(&operandoDos,&resultado_factorial_2);
                    break;
            case 5:
                    system("cls");
                    printf("Adios.");
                    salir=1;
                    break;
            default:
                    printf("\n\n ERROR - Ingrese un numero/opcion valida\n\n");
        }
    }while(salir==0);

    return 0;
}
