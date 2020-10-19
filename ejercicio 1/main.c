#include <stdio.h>
#include <stdlib.h>
#define TAM 100

float aplicarDescuento(float precio);
int main()
{
  int precio=1400;
  printf("Ingrese un precio");
  aplicarDescuento(precio);
}

float aplicarDescuento(float precio)
{
float descuento=0.05;
float total;
total=precio-precio*descuento;
printf ("El precio total es: %.2f", total);
return total;
}
