/**********************************************************************************
**                                                                               **
**                               LedPotenciòmetre                                **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 23 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {                    // S'executa un sol cop   
  pinMode(3, OUTPUT);             // Inicialitza pin 3 com una sortida.
}

//********** LOOP *****************************************************************
void loop() {                     // S'executa repetidament 
  sensorValue = analogRead(A0);
  analogWrite(3, sensorValue/4);
}

//********** FUNCIONS *************************************************************
