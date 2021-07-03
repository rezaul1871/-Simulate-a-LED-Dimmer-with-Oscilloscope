// C++ code
//
int brightnesstime = 0;

void setup()
{
  
  pinMode(10, OUTPUT);
}

void loop()
{

  for (brightnesstime = 0; brightnesstime <= 255; brightnesstime += 5) {
    analogWrite(10, brightnesstime);
    delay(3000); // Wait for 30 millisecond(s)
  }
  for (brightnesstime = 255; brightnesstime <= 0; brightnesstime += 5) {
    analogWrite(10, brightnesstime);
    delay(3000); // Wait for 30 millisecond(s)
  }
}