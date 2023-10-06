#include<stdio.h>

main(){
    /*
    Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.
    */

   float reais = 120.0, cotacaoDolar = 4.87, valorConvertido;

   valorConvertido = reais/cotacaoDolar;

   printf("O valor em dolar e: %.2f", valorConvertido);

}