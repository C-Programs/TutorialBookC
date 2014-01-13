/* 
 * File:   main.c
 * Author: MarcoVelluto
 *
 * Created on 13 gennaio 2014, 21.21
 * 
 * Visualizza la tabella di conversione tra Fahrenheit e Celsius
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    //°C = (5/9)(°F - 32)

    degreesTableInteger();
    printf("\n******************************\n");
    degreesTableReal();
        
    return (EXIT_SUCCESS);
} 

/************************************************************************
 *              1.2 - Variables
 *************************************************************************/

/*
 Visualizza una tabella con i valori INTERI Fahrenheit e Celsius
 */
int degreesTableInteger (){
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;                  /* Valore minimo in gradi F nella tabella delle 
                                 temperature */
    upper = 300;                /* Valore massimo in gradi F */
    step = 20;                  /* Intervallo fra due temperature in gradi F 
                                   adiacenti */
    
    fahr = lower;
    
    printf("*** INTEGER ***\n");
    printf("Fahrenhei\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return(0);
}

/*
 Visualizza una tabella con i valori IN VIRGOLA Fahrenheit e Celsius
 */
int degreesTableReal (){
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;                  /* Valore minimo in gradi F nella tabella delle 
                                 temperature */
    upper = 300;                /* Valore massimo in gradi F */
    step = 20;                  /* Intervallo fra due temperature in gradi F 
                                   adiacenti */
    
    fahr = lower;
    
    printf("\t*** REAL ***\n");
    printf("Fahrenhei\t\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%f\t\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return(0);
}

/************************************************************************
 *              1.3 - Constructor for
 *************************************************************************/