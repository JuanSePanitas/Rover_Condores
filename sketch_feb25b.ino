const int OpenAirReading = 700;   
const int WaterReading = 280;     
int MoistureLevel = 0;
int SoilMoisturePercentage = 0;

void setup() {
  Serial.begin(9600); 
}
 
void loop() {
  MoistureLevel = analogRead(A0);  
  Serial.println(SoilMoisturePercentage);
  SoilMoisturePercentage = map(MoistureLevel, OpenAirReading, WaterReading, 0, 100);
 
  if (SoilMoisturePercentage >= 100)
  {
    Serial.println("\n Maximum - 100 %");
  }
  else if (SoilMoisturePercentage <= 0)
  {
    Serial.println("\n Minimum - 0 %");
  }
  else if (SoilMoisturePercentage > 0 && SoilMoisturePercentage < 100)
  {
    Serial.print(SoilMoisturePercentage);
    Serial.println("%");
  }
 
  delay(1000);
}