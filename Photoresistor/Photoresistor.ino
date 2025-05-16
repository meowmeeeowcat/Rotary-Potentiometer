int ledPin = 13;      // LED 燈連接到數位 pin 9
int analogPin = A0;   // 可變電阻連接到類比 pin 3
int val = 0;         // 儲存讀取到的電壓數值
 
void setup()
{
  pinMode(ledPin, OUTPUT);   // 設定 pin 9 腳為輸出
  Serial.begin(9600);
}
 
void loop()
{
  //int sensorValue=analogRead(A0);
  val = analogRead(analogPin);   // 讀取類比輸入 pin 腳
  Serial.println(val);
  if(val<100) val=100;
  if(val>800) val=800;
  int ledDimming=map(val,100,800,100,255)
  analogWrite(ledPin, val / 4);  // analogRead 數值從 0 到 1023 
  //Serial.println(sensorValue);                               // analogWrite 數值從 0 到 255
  delay(1);
}