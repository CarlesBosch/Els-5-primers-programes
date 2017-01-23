/**********************************************************************************
**                                                                               **
**                               Blink                                           **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 21 / 01 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************

//********** SETUP ****************************************************************
void setup() {               // S'executa un sol cop                      
  pinMode(13, OUTPUT);       // Inicialitza pin 13 com una sortida.
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament
  digitalWrite(13, HIGH);    // Encén el LED
  delay(1000);               // Espera 1 segon
  digitalWrite(13, LOW);     // Apaga el LED
  delay(1000);               // Espera 1 segon
}

//********** FUNCIONS *************************************************************
