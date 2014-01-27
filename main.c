/* 
 * File:   main.c
 * Author: Marco Velluto
 *
 * Created on 13 gennaio 2014, 21.21
 * 
 * View the convertion table Fahrenheit - Celsius
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    //°C = (5/9)(°F - 32)
/*
    degreesTableInteger();
    printf("\n******************************\n");
    printf("\n*********Table Real *************\n");
    printf("\n******************************\n");
    degreesTableReal();
    printf("\n******************************\n");
    printf("\n*********Table With For *************\n");
    printf("\n******************************\n");
    degreeTableWithFor();
   
    printf("\n******************************\n");
    printf("\n********* Read - Write (1° Version )*************\n");
    printf("\n******************************\n");
    readWrite1();
 */    
    printf("\n******************************\n");
    printf("\n********* Read - Write (2° Version )*************\n");
    printf("\n******************************\n");
    readWrite1();


    return (EXIT_SUCCESS);
}

/************************************************************************
 *              1.2 - Variables
 *************************************************************************/

/*
 View a tabe with integer values Fahrenheit e Celsius
 */
int degreesTableInteger() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* Valore minimo in gradi F nella tabella delle 
                           temperature */
    upper = 300; /* Valore massimo in gradi F */
    step = 20; /* Intervallo fra due temperature in gradi F 
                                   adiacenti */

    fahr = lower;

    printf("*** INTEGER ***\n");
    printf("Fahrenhei\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return (0);
}

/*
 View a table with decimal values Fahrenheit e Celsius
 */
int degreesTableReal() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* Valore minimo in gradi F nella tabella delle 
                                 temperature */
    upper = 300;        /* Valore massimo in gradi F */
    step = 20;          /* Intervallo fra due temperature in gradi F 
                                   adiacenti */

    fahr = lower;

    printf("\t*** REAL ***\n");
    printf("Fahrenhei\t\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%f\t\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return (0);
}

/************************************************************************
 *              1.3 - Constructor for
 *************************************************************************/

/*
 View the table Fahrenheit-Celsius
 */
int degreeTableWithFor() {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32.0));
    return (0);
}

/************************************************************************
 *              1.4 - Simboli di costanti
 *************************************************************************/

#define LOWER   0      /* valore minimo in gradi F nella tabella delle 
                           temperature */
#define UPPER   300    /* valore massimo in gradi F */
#define STEP    20     /* intervallo tra due temperature in gradi F 
                           adiacenti*/      


/*
 View the table Fahrenheit-Celsius with constant
 */
int degreeTableWithConstant() {

    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32.0));
    return (0);
}


/************************************************************************
 *              1.5 - Reading and Writing of characters ON FILE
 *************************************************************************/

/* 
 * Makes the output data a replication of the input data - first version 
 */
int readWrite1 (){
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return (0);
}

/* 
 * Makes the output data a replication of the input data - second version 
 */
int readWrite2 () {
    int c;
    
    while ((c = getchar()) != EOF)
        putchar(c);
    return (0);
}

