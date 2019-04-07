/*
 * ----------------------------------
 * Autor: Ruben Rodriguez Esteban ---
 * Fecha: 1-4-19 --------------------
 * ----------------------------------
 */

#ifndef TARJETACREDITO_H
#define TARJETACREDITO_H

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <conio.h>
#include "operaciones.h"

/*
 * Fichero de implemetacion del modulo Tarjeta credito
 */

using namespace std;

// constantes del modulo
const int BASE = 10;
const int MAX_DIGITOS_TARJETA = 16;



/*
 * Pre: <<tarjeta>> es una cadena de caracteres que identifica una
 *       posible tarjeta de credito autentica
 * Post: Ha devuelto <<true>> si y solo si la tarjeta de credito <<tarjeta>> es
 *       una tarjeta de credito valida. En caso contrario ha devuelto <<false>>
 */
bool esTarjetaValida(string tarjeta);



/*
 * Pre: ---
 * Post: Ha devuelto una tarjeta de credito valida
 */
string generarTarjeta();



/*
 * Pre: ----
 * Post: Ha guardadado en <<tarjeta>> una secuencia de MAX_DIGITOS_TARJETA
 *       caracteres para crear una tarjeta de credito
 */
void introducirTarjetaCredito(string& tarjeta);




/*
 * Pre: <<tarjeta>> es una secuencia de caracteres que conforma una
 *      tarjeta de credito
 * Post: Ha mostrado por pantalla la tarjeta de credito <<tarjeta>>
 */
void mostrarTarjetaCredito(string tarjeta);




/*
 * Pre: <<fichero>> es un fichero de texto que alamcena a razon de una por linea
 *      una secuencia de tarjetas de credito
 * Post: Ha escrito en pantalla un listado con todas las tarjetas de credito almacenadas
 *       en el fichero <<fichero>> de acuerdo con el formato que se muestra en el
 *       siguiente ejemplo
 *
 *       LISTADO DE TARJETAS DE CREDITO
 *
 *       Posicion              Tarjeta     Resultado
 *      ---------     ----------------   -----------
 *              1     1066654591158236        valida
 *              2     1527614232216853        valida
 *              3     1740948824551710      invalida
 *              4     4113874277931980      invalida
 *              5     4575826696910186        valida
 *              6     7618927954312339        valida
 *              7     7974791042538695        valida
 */
void analizarTarjetasFichero(const char fichero[]);


#endif
