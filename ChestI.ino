#include "Arduino.h"
#include "chestlib.h"

int menuState = 0;
const int gameState = 0;
const int menuStandard = 1;
const int menuGame = 0;
ChestGame chest;

void setup()
{
chest.text(1); 
menuState = menuStandard;
}
void loop()
{

  switch(menuState) // menu switch
  {
    case(menuGame):
    {
     switch(gameState)
     {
      // here runs the game. insert to be continnued screen del later
     }
    }
    case(menuStandard): // standard menu state
    {
      // standard menu screen del later
    }

    case(2): // another menu state...
    {
          
    }
   }
  } 
