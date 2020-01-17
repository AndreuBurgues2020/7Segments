
/****************************************************************
**                           TÍTOL:                            **
**                         7 Segments                          **
**                                                             **
**  NOM:Andreu Burgués Chiva                  DATA: xx/xx/20xx **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************
//Asignar els pins segons l'ordre estandar del display de 7 segments
const int A = 8;
const int B = 7;
const int C = 6;
const int D = 5;
const int E = 4;
const int F = 3;
const int G = 2;

unsigned int Delay = 1000;



//************************* SETUP *******************************
void setup() {              // configura el final de sortida   
  //Asignar els pins com a sortida   
  pinMode (A, OUTPUT);
  pinMode (B, OUTPUT);
  pinMode (C, OUTPUT);
  pinMode (D, OUTPUT);
  pinMode (E, OUTPUT);
  pinMode (F, OUTPUT);
  pinMode (G, OUTPUT);
}

//************************** LOOP *******************************
void loop() {                // inicia el bucle del programa     
  //Fer un 0
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, LOW);
  delay (Delay);

  //Fer un 1
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  delay (Delay);

  //Fer un 2
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 3
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 4
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 5
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 6
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 7
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
  delay (Delay);

  //Fer un 8
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un 9
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

}

//************************* FUNCIONS ****************************
