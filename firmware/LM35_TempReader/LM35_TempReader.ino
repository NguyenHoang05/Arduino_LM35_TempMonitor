int adcValues[3];
float nhietDo[3];
char chuoi[100];

void loop() {
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  adcValues[2] = analogRead(A2);
  nhietDo[2] = (adcValues[2] * 500.0) / 1023.0;
  
  sprintf(chuoi, "{\"nhietDoA0\":%d,\"nhietDoA1\":%d,\"nhietDoA2\":%d}\n",
          (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
  Serial.print(chuoi);
  delay(100);
}