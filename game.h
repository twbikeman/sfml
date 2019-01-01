#ifndef GAME_H
#define GAME_H

#include "window.h"

class Game {
public:
  Game();
  ~Game();

  //void HandleInput();
  void Update();
  void Render();
  Window* GetWindow();
private:
  void MoveMushroom();
  Window m_window;
  sf::Sprite m_mushroom;
  sf::Texture m_mushroomTexture;
  sf::Vector2i m_increment;

};

#endif
