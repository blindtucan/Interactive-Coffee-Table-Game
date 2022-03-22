//adding adafruit library
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
//defining neopixel pin
#define PIN            50
#define NUMPIXELS      16

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  for (int pinNo = 2; pinNo <= 17; pinNo++){//goes through every sensor
    pinMode(pinNo,INPUT);
  }
}

void loop()
{
  //full brightness overheats board
pixels.setBrightness(50);
int pinNo= 0;
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels
int counter = 0;
while(counter <= 3)
{//goes through all sensors and reads if it's low (sensing something) or high (nothing above it)
  for( pinNo = 0; pinNo <= 15; pinNo++)
  {
    if(digitalRead(pinNo+2) == LOW)
    {
      pixels.setPixelColor(pinNo, pixels.Color(0,0,150)); //sets color to blue when something is on top
      pixels.show();
      counter++;
    }
    else
    {
      pixels.setPixelColor(pinNo, pixels.Color(155,0,155)); //ambient color purple
      pixels.show();
    }
  }
}
    if (counter > 3)
    {
      if(digitalRead(pinNo+2) == LOW ) //if one sensor is on begin game
      {
        pixels.setPixelColor(random(2,17), pixels.Color(0, 255, 0)); //random green color in random location
       // pixels.setPixelColor(random(2,17), pixels.Color(0, 255, 0));
       // pixels.setPixelColor(random(2,17), pixels.Color(0, 255, 0));
        pixels.show();
        delay(3000); //3 second delay before it switches location
      }
    }
}
