#define pwm_a 5
#define pwm_b 6
#define motor_direito_a 10
#define motor_direito_b 9
#define motor_esquerdo_a 7
#define motor_esquerdo_b 8
byte velocidade = 255;
char bt;

void setup() {
  Serial.begin(9600);
  pinMode(motor_direito_a, OUTPUT);
  pinMode(motor_direito_b, OUTPUT);
  pinMode(motor_esquerdo_a, OUTPUT);
  pinMode(motor_esquerdo_b, OUTPUT);
  analogWrite(pwm_a, velocidade);
  analogWrite(pwm_b, velocidade);
}

void loop() {

  bt = Serial.read();

  while ( bt == 'A' ) {
    digitalWrite(motor_direito_a, HIGH);
    digitalWrite(motor_direito_b, LOW);
    digitalWrite(motor_esquerdo_a, HIGH);
    digitalWrite(motor_esquerdo_b, LOW);
    bt = Serial.read();
  }

  while ( bt == 'B' ) {
    digitalWrite(motor_direito_a, LOW);
    digitalWrite(motor_direito_b, HIGH);
    digitalWrite(motor_esquerdo_a, LOW);
    digitalWrite(motor_esquerdo_b, HIGH);
    bt = Serial.read();
  }

  while ( bt == 'C' ) {
    digitalWrite(motor_direito_a, LOW);
    digitalWrite(motor_direito_b, HIGH);
    digitalWrite(motor_esquerdo_a, HIGH);
    digitalWrite(motor_esquerdo_b, LOW);
    bt = Serial.read();
  }

  while ( bt == 'D' ) {
    digitalWrite(motor_direito_a, HIGH);
    digitalWrite(motor_direito_b, LOW);
    digitalWrite(motor_esquerdo_a, LOW);
    digitalWrite(motor_esquerdo_b, HIGH);
    bt = Serial.read();
  }

  while ( bt == 'E' ) {
    digitalWrite(motor_direito_a, LOW);
    digitalWrite(motor_direito_b, LOW);
    digitalWrite(motor_esquerdo_a, LOW);
    digitalWrite(motor_esquerdo_b, LOW);
    bt = Serial.read();
  }

  delay(50);
}
