/*
 *    NOTE        - Game.cpp
 *    Copyright   - NULL
 *
 *    Created     - 2021.09.20
 *    Author      - 2033112012 CLJ
 *    Contact     - vine9151@gmail.com
 */

#include "Game.hpp"


/*----------------------------------------//
                Game Title
//----------------------------------------*/

void Game::title(void)
{
  begin();
  setRotation(0);

  fillScreen(WHITE);
  drawBitmap(0, 30, 160, 80, logoAtmel, BLACK, RED, BLUE, WHITE);
  _delay_ms(500);

  drawBitmapTwice(0, 30, 320, 160, logoAtmel, BLACK, RED, BLUE, WHITE);
  _delay_ms(3000);

  fillScreen(BLACK);
  setFont(fontASCII);
  setColor(BLACK, WHITE);
  print(30, 70, "Hello, World!");
  _delay_ms(1000);

  setColor(BLACK, CYAN);
  print(30, 120, "And Welcome to");
  setColor(BLACK, RED);
  print(30, 136, "Atmega Game (^0^)");
  _delay_ms(5000);
}

/*----------------------------------------//
                Start Game
//----------------------------------------*/

void Game::start(void)
{

  fillScreen(BLACK);
  _delay_ms(100);

  Player user;

  while (1)
  {
    user.startPlayer();
  }

}