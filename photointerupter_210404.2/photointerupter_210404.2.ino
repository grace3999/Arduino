int buttonpin0 = A0; // define photo interrupter signal pin
int buttonpin1 = A1; // define photo interrupter signal pin
int buttonpin2 = A2; // define photo interrupter signal pin
int buttonpin3 = A3; // define photo interrupter signal pin

void setup()
{
pinMode(buttonpin0, INPUT); //photo interrupter pin as input
pinMode(buttonpin1, INPUT); //photo interrupter pin as input
pinMode(buttonpin2, INPUT); //photo interrupter pin as input
pinMode(buttonpin3, INPUT); //photo interrupter pin as input
Serial.begin(9600);
}

void loop()
{
float sensorValue0 = analogRead(buttonpin0);  
float sensorValue1 = analogRead(buttonpin1);  
float sensorValue2 = analogRead(buttonpin2);  
float sensorValue3 = analogRead(buttonpin3);  
{
Serial.print("A0: ");
Serial.println(sensorValue0);
Serial.print("A1: ");
Serial.println(sensorValue1);
Serial.print("A2: ");
Serial.println(sensorValue2);
Serial.print("A3: ");
Serial.println(sensorValue3);
}
delay(20);
//exit(0);
}
