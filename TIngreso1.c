// Librería Estándar //
#include <stdio.h>
int main(){
 // Declaración de variables //
    int numentero; // Variable con Valor de Entero //
    float numdeci; // Variable con Valor de Decimal //
    char letracar; // Variable con Valor de Caracter //

 // Presento un Mensaje de bienvenida //
 // La función printf permite mostrar mensajes o valores //
    printf("Bienvenido a este programa de ingreso de datos!\n");

 // Solicito al usuario que ingrese valores //
 // La función scanf permite leer los valores ingresados y registrarlos en una variable // 
    printf("Ingrese su número entero favorito: ");
    scanf("%d", &numentero);
    printf("Ingrese su número decimal favorito: ");
    scanf("%f", &numdeci);
    printf("Ingrese su carácter favorito: ");
 // Este espacio antes de %c es importante, ya que permite ignorar cualquier carácter de nueva línea anterior //
    scanf(" %c", &letracar);

 // Muestro los valores ingresados por el usuario utilizando printf //
    printf("Su número entero favorito es: %d\n", numentero);
    printf("Su número decimal favorito es: %f\n", numdeci);
    printf("Su carácter favorito es: %c\n", letracar);
    return 0;
 // Return 0 indica que el programa finalizó correctamente //
}