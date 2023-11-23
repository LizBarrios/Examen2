#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct animales
{
    char edad[2];
    char nombre[30];
    char especie[20];
    char NumReg[3];
} Tdatos;

void consulta(Tdatos reg[], int *num_reg);
void historial(Tdatos reg[], int *num_reg);

int main(int n)
{
    Tdatos registros[n];
    int num_reg;
    consulta(registros, &num_reg);
    historial(registros, &num_reg);
}

void consulta(Tdatos reg[], int *num_reg)
{
    char nombre[30], edad[2], especie[30];
    printf("ingrese el nombre\n");
    gets(nombre);
    strcpy(reg->nombre, nombre);
    printf("ingrese la especie\n");
    gets(especie);
    strcpy(reg->especie, especie);
    printf("ingrese la edad\n");
    gets(edad);
    strcpy(reg->edad, edad);
    num_reg++;
}

void historial(Tdatos reg[], int *num_reg)
{
    int i;
    int num;
    printf("ingrese el numero de registro a consultar");
    scanf("%d", num);
    for (i = 1; i <= num_reg; i++)
    {
        if (i == num)
        {
            printf("%d", i);
            printf("%s\n", reg[i].nombre);
            printf("%s\n", reg[i].especie);
            printf("%s\n", reg[i].edad);
        }
    }
}

void Mostrar_Todo(Tdatos reg[], int *num_reg)
{
    int i, num;
    printf("registros\n");
    for (i = 1; i <= num_reg; i++)
    {
        printf("%s\t", i);
        printf("%s\t", reg[i].nombre);
        printf("%s\t", reg[i].especie);
        printf("%s\n", reg[i].edad);
        printf("----------------\n");
    }
}

void almacenar(Tdatos reg[], int *num_reg)
[
    FILE *fa;
    
]
