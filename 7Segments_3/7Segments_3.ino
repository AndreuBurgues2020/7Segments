
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
  //Fer un A
  digitalWrite (A, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un N
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un D
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un R
  digitalWrite (A, LOW);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, LOW);
  digitalWrite (E, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un E
  digitalWrite (A, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (C, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
  delay (Delay);

  //Fer un U
  digitalWrite (A, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (E, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, LOW);
  delay (Delay);
}

//************************* FUNCIONS ****************************
