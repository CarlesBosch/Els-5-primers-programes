/**********************************************************************************
**                                                                               **
**                               LedPolsador                                     **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 21 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {               // S'executa un sol cop  
pinMode( 1, OUTPUT);         // Inicialitza pin 1 com una sortida.
pinMode( 3, INPUT);          // Inicialitza pin 3 com una entrada.  
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
if (digitalRead(3)) {        // Si està activat...
digitalWrite(1, HIGH) ;      // Encén el LED
} else {                     // Si no està activat...
digitalWrite(1, LOW) ;       // Apaga el LED
}  
}

//********** FUNCIONS *************************************************************
