//Declaracion de las entradas en los pines digitales 2 y 3 del arduino uno
int led1 = 2;
int led2 = 3;

int estado = 0; //sin pulsp, variable inicializada en cero

void setup()
{
  Serial.begin(9600); //pin de la comunicacion entre el bluetooth y el arduino uno
  //Declaracion de las salidas en los pines digitales 2 y 3 del arduino uno
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}
//Inicio del programa
void loop()
{
  if( Serial.available()>0)
  {
    estado = Serial.read();
  }
  switch( estado)
  {
    case 'a'://cuando la variable que corresponde a este caso es alta el led 1 enciende 
    digitalWrite(led1, HIGH);
    break;
    case 'b'://cuando la variable que corresponde a este caso es alta el led 1 apaga
    digitalWrite(led1, LOW);
    break;
    
    case 'c'://cuando la variable que corresponde a este caso es alta el led 2 enciende
    digitalWrite(led2, HIGH);
    break;
    case 'd':: //cuando la variable que corresponde a este caso es baja el led 2 se apaga
    digitalWrite(led2, LOW);
    break;
  }
}
