#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
* \brief Pide un numero tipo float al usuario y lo guarda en una variable
* \param Puntero a la variable donde almacenar el flotante en caso de que se haya ingresado correctamente
* \param Mensaje de operacion correcta
* \param mensaje de operacion incorrecta
* \return devuelve 0 en caso de obtener un float / de lo contrario devuelve -1

*/
int utn_getFlotante(float* pNumero, char* mensajeOk , char* mensajeError)
{
    float auxFloat;
    int resultadoScanf;
    int retorno = -1;

    printf("\nIngrese el numero");
    resultadoScanf=scanf("%f",&auxFloat);

        if(resultadoScanf==1)
         {
            *pNumero=auxFloat;
            retorno=0;
           // printf("\n%s",mensajeOk);

         }

         else
         {
             printf(mensajeError);
             fflush(stdin);
         }

        return retorno;

}

/**
* \brief suma dos numeros float
* \param puntero a primer numero float
* \param puntero a segundo numero float
* \return el resultado de la suma

*/
float suma(float* a,float* b)
{
    float resultado;

    resultado=(*a)+(*b);
    return resultado;
}

/**
* \brief resta dos numeros float
* \param puntero a primer numero float
* \param puntero a segundo numero float
* \return el resultado de la resta

*/
float resta(float* a,float* b)
{
    float resultado;

    resultado= (*a) - (*b);
    return resultado;
}

/**
* \brief Divide dos numeros float
* \param puntero a primer numero float (dividendo)
* \param puntero a segundo numero float (divisor)
* \return el resultado de la división

*/
float division(float* a,float* b)
{
    float resultado;
    resultado=(*a)/(*b);
    return resultado;
}

/**
* \brief multiplica dos numeros float
* \param puntero a primer numero float
* \param puntero a segundo numero float
* \return el resultado de la multiplicación

*/
float multiplicacion(float* a,float* b)
{
    float resultado;

    resultado = (*a)*(*b);
    return resultado;
}

/**
* \brief calcula el factorial de un float
* \param puntero al numero float
* \return el resultado del factorial

*/
float factorial(float* operando)
{
    int i;
    float factorial=1;

    for(i=1;i<=(*operando);i++)
    {
        factorial*=i;
    }
    return factorial;
}

/**
* \brief Imprime por pantalla los resultados de una operacion entre dos numeros punteros a float
* \param puntero a primer numero float
* \param puntero a segundo numero float
* \param puntero a resultado de la operacion
* \param mensaje a mostrar junto con el numero resultado

*/
void mostrarResultado(float* operandoUno,float* operandoDos,float* resultado_operacion,char* mensajeResultado)
{
    printf(mensajeResultado,*operandoUno,*operandoDos,*resultado_operacion);
}

/**
* \brief Imprime por pantalla el resultado del factorial de un puntero a float*
* \param puntero a numero float
* \param resultado de la operacion factorial

*/
void mostrarFactorial(float* operando,float* resultado_operacion)
{
    printf("El resultado del factorial de ! %.2f es: %.2f\n",*operando,*resultado_operacion);
}
