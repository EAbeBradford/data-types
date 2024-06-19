//constants
#define LED_PIN 2

//vars

//ints - > whole numbers
//limits = -32,768 to 32,767
int a= 5;

// float or double- > decimals
float b = 3.3;
double c = 65.3;

//bool - > true or false
bool d = false;

//String - > words, chars, sentances
//fun fact does not exist in C++ 
//only exists in ardrino
String e = "hello world";

//long - > whole numbers
//can store more than ints
//-2,147,483,648 to 2,147,483,647
long f = 300000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("over flow error examle");
  Serial.println(" a before");
  a = 32767;
  Serial.println(a);
  Serial.println("add 2....");
  a = a + 2;
  Serial.println("a after");
  Serial.println(a);

}

void loop() {
  // put your main code here, to run repeatedly:

}
