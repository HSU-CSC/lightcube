#include "FastLED.h"
#define NUM_LEDS 16
#define DATA_PIN 3
CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int choice = 0; choice < 100; choice++ ){
   for(int i = 0; i < NUM_LEDS ; i++)
   {
     if(i == 0 || i == 3 || i == 5|| i == 9|| i == 12|| i == 15)
       {
        switch(choice%3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(0,0,255); break;
        }
       }
      else if( i == 1|| i == 4|| i == 7|| i == 10|| i == 14){
        
        switch((choice+1)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(0,0,255); break;
        }
      }else{
       switch((choice+2)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(0,0,255); break;
        }
      }
   }
    
     FastLED.show();
     delay(200);
 }
}
