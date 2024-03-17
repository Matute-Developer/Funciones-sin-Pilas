#include <stdio.h>
#include <stdlib.h>
#include <time.h>
///--------PROTOTIPADO--------///
int DevolverValorRandom();
void numeros(int num1, int num2, int num3);
int sumaDeLosNumeros(int pedirValor);
int TablaDeMultiplicar(int numero,int i,int resultado);
int multiplicarNumero(int n1, int n2);
void tablaMultiplicar(int pedirNumero);
int sumarNumero(int n1, int n2);
int restarNumero(int n1, int n2);
float dividirNumero(int n1, int n2);
void calculadora();
void numeroPositivo(int *numPositivo);
void cargarNumeros(int *pedirValores, int *pedirValores2);
///--------FIN PROTOTIPADO--------///
int main()
{
    ///variables
    int random;
    int numMayor, numMenor;
    int num1,num2,num3;
    int numeroEntrada;
    int resultado;
    int numero;
    int numPositivo;
    int pedirValores;
    int pedirValores2;
    ///fin variables
    char continuar = 's';
    int decision;
    while(continuar == 's')
    {
        printf("-------------------------------\\n'FUNCIONES TE VAS PERMA VALE?'-------------------------------\n");
        printf("Que ejercicio desea hacer?                                                                    \\\n");
        printf("1. Devolver valor random                                                                      \\\n");
        printf("2. Mostrar el mayor y menor                                                                   \\\n");
        printf("3. Sumar numeros anteriores                                                                   \\\n");
        printf("4. Multiplicar numero                                                                         \\\n");
        printf("5. Calculadora                                                                                \\\n");
        printf("6. Cambiar signo                                                                              \\\n");
        printf("7. Cargar numeros usuario                                                                     \\\n");
        printf("-------------------------------\\n'FUNCIONES TE VAS PERMA VALE?'-------------------------------\n");
        printf("Su decision: ");
        scanf("%i", &decision);
        switch(decision)
        {
        case 1:
            random = DevolverValorRandom();
            printf("El numero random es: %d\n",random);
            break;
        case 2:
            printf("dele valor al num1: ");
            scanf("%d",&num1);
            fflush(stdin);
            printf("dele valor al num2: ");
            scanf("%d",&num2);
            fflush(stdin);
            printf("dele valor al num3: ");
            scanf("%d",&num3);
            fflush(stdin);
            numeros(num1,num2,num3);
            break;
        case 3:
            printf("ingrese el valor\n");
            scanf("%d",&numeroEntrada);
            resultado = sumaDeLosNumeros(numeroEntrada);
            printf("La suma de los numeros es %i\n",resultado);
            break;
        case 4:
            printf("Ingrese un numero entero: ");
            scanf("%d", &numero);
            tablaDeMultiplicar(numero);
            break;
        case 5:
            calculadora();
            break;
        case 6:
            printf("ingrese su numero:");
            scanf("%d", &numPositivo);
            printf("Numero positivo: %d\n", numPositivo);
            numeroPositivo(&numPositivo);
            printf("Numero negativo: %d\n", numPositivo);
            break;
        case 7:
            cargarNumeros(&pedirValores, &pedirValores2);
            printf("numero 1: %d\n",pedirValores);
            printf("numero 2: %d\n",pedirValores2);
            break;
        default:
            printf("La opcion ingresada es incorrecta\n");
            break;
        }
        printf("Desea continuar (s/n): ");
        fflush(stdin);
        scanf("%c", &continuar);
        system("cls");
    }
    return 0;
}
///ejercicio 1
int DevolverValorRandom()
{
    int random;
    srand(time(NULL));
    random=rand()%100+1;
    return random;
}

///ejercicio 2
void numeros(int num1, int num2, int num3)
{
    int numMayor, numMenor;
    if(num1 > num2)
    {
        numMayor=num1;
        numMenor=num2;
    }
    else
    {
        numMayor=num2;
        numMenor=num1;
    }
    if(numMayor<num3)
    {
        numMayor=num3;
    }
    else
    {
        numMenor=num3;
    }
    printf("El numero mayor es: %d, y el menor es: %d\n",numMayor,numMenor);
}

int sumaDeLosNumeros(int pedirValor)
{
    int i = pedirValor-1;
    int resultado = 0;

    while(i<= pedirValor && i>= 0)
    {
        resultado = resultado + i;
        i--;
    }

    return resultado;
}
void tablaDeMultiplicar(int num)
{
    printf("Tabla de multiplicar del %d:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
/// ejercicio 5
int multiplicarNumero(int n1, int n2)
{
    return n1 * n2;
}

int sumarNumero(int n1, int n2)
{
    int resultado = n1 + n2;
    return resultado;
}

int restarNumero(int n1, int n2)
{
    int resultado = n1 - n2;
    return resultado;
}
float dividirNumero(int n1, int n2)
{
    float resultado = (float) n1 / n2;
    return resultado;
}

void calculadora()
{
    float n1;
    float n2;
    int decision;
    float resultado;
    char continuar = 's';

    while(continuar == 's')
    {
        printf("--------------\n'CALCULADORA TE VAS PERMA VALE?'\n--------------\n");
        printf("Que operacion desea hacer?\n");
        printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n");
        printf("Su decision: ");
        scanf("%i", &decision);

        printf("Introduzca el primer numero: ");
        scanf("%f", &n1);

        printf("Introduzca el segundo numero: ");
        scanf("%f", &n2);

        switch(decision)
        {
        case 1:
            resultado = sumarNumero(n1, n2);
            break;
        case 2:
            resultado = restarNumero(n1, n2);
            break;
        case 3:
            resultado = multiplicarNumero(n1, n2);
            break;
        case 4:
            resultado = dividirNumero(n1, n2);
            break;
        default:
            printf("La opcion ingresada es incorrecta\n");
            break;
        }
        printf("El resultado es: %.1f\n", resultado);
        printf("Desea continuar (s/n): ");
        fflush(stdin);
        scanf("%c", &continuar);
        system("cls");
    }
}

///ejercicio 6
void numeroPositivo(int *numPositivo)
{
   *numPositivo = *numPositivo * (-1);
}

///ejercicio 7
void cargarNumeros(int *pedirValores, int *pedirValores2)
{
    printf("ingrese el primer numero: ");
    scanf("%d", pedirValores);

    printf("ingrese el segundo numero: ");
    scanf("%d", pedirValores2);
}
