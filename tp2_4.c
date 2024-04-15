#include <stdio.h>
#include <stdlib.h>

struct {
    int velocidad;
    int anio;
    int cant;
    char *tipo_cpu;

} typedef compu;

void mostrarDatos(compu *DatosCompus, int i); 
void pcMasVieja(compu *DatosCompus, int i);
void pcMasVeloz(compu *DatosCompus, int i);

int main()
{
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    compu Compus[5];

    for (int i = 0; i < 5; i++)
    {
        Compus[i].velocidad = 1 + rand() % 3;
        Compus[i].anio = 2013 + rand() % 9;
        Compus[i].cant = 1 + rand() % 8;
        Compus[i].tipo_cpu = tipos[rand() % 6];
    }
    
    mostrarDatos(Compus, 5);
    pcMasVieja(Compus, 5);
    pcMasVeloz(Compus, 5);

    return 0;
}

void mostrarDatos(compu *DatosCompus, int i)
{
    for (int x = 0; x < i; x++)
    {


        printf("Computadora N° %d\n", x+1);
        printf("Anio: %d\n", DatosCompus[x].anio);
        printf("Velocidad: %d\n", DatosCompus[x].velocidad);
        printf("Cantidad: %d\n", DatosCompus[x].cant);
        printf("Tipo CPU: %s\n", DatosCompus[x].tipo_cpu);
        printf("-------------------------------\n");
    }
    
}

void pcMasVieja(compu *DatosCompus, int i)
{
    int aux = 2023;
    int indice = -1;
    for (int x = 0; x < i; x++)
    {
        if (DatosCompus[x].anio <= aux)
        {
            aux = DatosCompus[x].anio;
            indice = x;
        }
    }

    if (indice != -1)
    {
        printf("\nComputadora(s) más vieja(s):\n");
        printf("Anio: %d\n", DatosCompus[indice].anio);
        printf("Velocidad: %d\n", DatosCompus[indice].velocidad);
        printf("Cantidad: %d\n", DatosCompus[indice].cant);
        printf("Tipo CPU: %s\n", DatosCompus[indice].tipo_cpu);
        printf("-------------------------------\n");
    }
    else
    {
        printf("No se encontraron computadoras.\n");
    }
}

void pcMasVeloz(compu *DatosCompus, int i)
{
    int aux = 1;
    int indice = -1;
    for (int x = 0; x < i; x++)
    {
        if (DatosCompus[x].velocidad >= aux)
        {
            aux = DatosCompus[x].velocidad;
            indice = x;
        }
    }

    if (indice != -1)
    {
        printf("\nComputadora(s) más Rapida(s):\n");
        printf("Anio: %d\n", DatosCompus[indice].anio);
        printf("Velocidad: %d\n", DatosCompus[indice].velocidad);
        printf("Cantidad: %d\n", DatosCompus[indice].cant);
        printf("Tipo CPU: %s\n", DatosCompus[indice].tipo_cpu);
        printf("-------------------------------\n");
    }
    else
    {
        printf("No se encontraron computadoras.\n");
    }
}