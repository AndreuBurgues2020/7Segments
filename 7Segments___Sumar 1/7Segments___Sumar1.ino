/****************************************************************
**                           TÍTOL:                            **
**                7 Segments + Boto de pausa                   **
**                                                             **
**  NOM:Andreu Burgués Chiva                  DATA: 17/01/2020 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************
//Asignar els pins segons l'ordre estandar del display de 7 segments i el boto de interrupció
const int A = 10;
const int B = 9;
const int C = 8;
const int D = 7;
const int E = 6;
const int F = 5;
const int G = 4;
const int InterruptButton = 2;

//Variable per més tard
int contador = 0;

//Variables per funcio millis
unsigned long TempsA = 0; //TempsA = Temps Actual = millis = temps que porta enses el arduino i es reseteja al cap de 49dies
unsigned long TempsP = 0; //TempsP = Temps Passat avans de un event 
const int Event = 1000;   //Cada quan pasa un event

//Variable per la interrupcióbool
bool Button = LOW;

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
  pinMode (InterruptButton, INPUT);
  Serial.begin(9600);
}

//************************** LOOP *******************************
void loop() {                // inicia el bucle del programa     

  TempsA = millis();
  //Per evitar fer servir delays per tal de poder posar una interrupció
  if (TempsA - TempsP >= Event)
  {
    if(Button == LOW)
    {
      if (contador == 9)
      {
          contador = 0;
      }
      else
      {
        contador = contador + 1;
      }
    }
    TempsP = TempsA;
  }

  if(digitalRead(InterruptButton) == HIGH)
  {
    Button = !Button;
    delay(1000);
  }

  if(contador == 0)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, LOW);
  }
  else if(contador == 1)
  {
    digitalWrite (A, LOW);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
  }
  else if(contador == 2)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, LOW);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, LOW);
    digitalWrite (G, HIGH);
  }
  else if(contador == 3)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, HIGH);
  }
  else if(contador == 4)
  {
    digitalWrite (A, LOW);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  }
  else if(contador == 5)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, LOW);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, LOW);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  }
  else if(contador == 6)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, LOW);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  }
  else if(contador == 7)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, LOW);
    digitalWrite (E, LOW);
    digitalWrite (F, LOW);
    digitalWrite (G, LOW);
  }
  else if(contador == 8)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, HIGH);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  }
  else if(contador == 9)
  {
    digitalWrite (A, HIGH);
    digitalWrite (B, HIGH);
    digitalWrite (C, HIGH);
    digitalWrite (D, HIGH);
    digitalWrite (E, LOW);
    digitalWrite (F, HIGH);
    digitalWrite (G, HIGH);
  }
}


//************************* FUNCIONS ****************************
