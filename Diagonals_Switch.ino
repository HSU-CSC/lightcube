#include "FastLED.h"
#define NUM_LEDS 16
#define DATA_PIN 3
CRGB leds[NUM_LEDS];
int ran_choice;
boolean ranloop1 = false;
boolean ranloop2 = false;
boolean ranloop3 = false;

void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  ran_choice = (int)random(0,3);
  
  do
  {
  swtich(ran_choice)
  {
	  case 0 : loop1();break;
	  case 1 : loop2();break;
	  case 2 : loop3();break;
  }
  ran_choice++;
  if (ran_choice > 2 && runloop1 != true || runloop2 != true)
  {
	  ran_choice = 0;
  }
  }while (ranloop1 !=true && ranloop2 != true && ranloop3 !=true);
  ranloop1 = false;
  ranloop2 = false;
  ranloop3 = false;
 
}

void loop1() 
{
  // put your main code here, to run repeatedly:
  
 for(int choice = 0; choice < 100; choice++ )
 {
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
	   
      else if( i == 1|| i == 4|| i == 7|| i == 10|| i == 14)
	  {  
        switch((choice+1)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(0,0,255); break;
        }
      }
	  
	  else
	  {
       switch((choice+2)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(0,0,255); break;
        }
      }
   }
    ranloop1 = true;
     FastLED.show();
     delay(200);
 }
}

void loop2() 
{
  // put your main code here, to run repeatedly:
  
 for(int choice = 0; choice < 100; choice++ )
 {
   for(int i = 0; i < NUM_LEDS ; i++)
   {
     if(i == 0 || i == 3 || i == 5|| i == 9|| i == 12|| i == 15)
       {
        switch(choice%3)
        {
          case 0: leds[i] = CRGB(0,0,255); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(255,0,0); break;
        }
       }
	   
      else if( i == 1|| i == 4|| i == 7|| i == 10|| i == 14)
	  {  
        switch((choice+1)% 3)
        {
          case 0: leds[i] = CRGB(0,0,255); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(255,0,0); break;
        }
      }
	  
	  else
	  {
       switch((choice+2)% 3)
        {
          case 0: leds[i] = CRGB(0,0,255); break;
          case 1: leds[i] = CRGB(0,255,0); break;
          case 2: leds[i] = CRGB(255,0,0); break;
        }
      }
   }
    ranloop2 = true;
     FastLED.show();
     delay(200);
 }
 
 void loop3() 
{
  // put your main code here, to run repeatedly:
  
 for(int choice = 0; choice < 100; choice++ )
 {
   for(int i = 0; i < NUM_LEDS ; i++)
   {
     if(i == 0 || i == 3 || i == 5|| i == 9|| i == 12|| i == 15)
       {
        switch(choice%3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(255,0,0); break;
          case 2: leds[i] = CRGB(255,0,); break;
        }
       }
	   
      else if( i == 1|| i == 4|| i == 7|| i == 10|| i == 14)
	  {  
        switch((choice+1)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(255,0,0); break;
          case 2: leds[i] = CRGB(255,0,); break;
        }
      }
	  
	  else
	  {
       switch((choice+2)% 3)
        {
          case 0: leds[i] = CRGB(255,0,0); break;
          case 1: leds[i] = CRGB(255,0,0); break;
          case 2: leds[i] = CRGB(255,0,); break;
        }
      }
   }
    ranloop3 = true;
     FastLED.show();
     delay(200);
 }
}