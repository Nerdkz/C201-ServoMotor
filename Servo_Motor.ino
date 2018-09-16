#include <Servo.h>

#define pot A0
#define servo 3

Servo servo_motor;

void setup() {
  Serial.begin(9600);
  servo_motor.attach( servo );
  servo_motor.write( 0 );
  pinMode( pot, INPUT );

}

void loop() {
  int valor = 0;
  int valor_lido = analogRead(pot);

  valor = map( valor_lido, 0, 1023, 0, 180);

  servo_motor.write(valor);
  Serial.println(valor);
}
