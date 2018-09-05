#ifndef funciones_H_INCLUDED
#define funciones_H_INCLUDED

int utn_getFlotante(float* pNumero, char* mensajeOk , char* mensajeError);
float suma(float* a,float* b);
float resta(float* a,float* b);
float division(float* a,float* b);
float multiplicacion(float* a,float* b);
float factorial(float* operando);
void mostrarResultado(float* operandoUno,float* operandoDos,float* resultado_operacion,char* mensaje_resultado);
void mostrarFactorial(float* operando,float* resultado_operacion);

#endif // funciones_H_INCLUDED
