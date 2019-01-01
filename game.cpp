#include <SFML/Graphics.hpp>
#include "game.h"

Game::Game(): m_window("Chapter 2", sf::Vector2u(800,600)) {
  m_mushroomTexture.loadFromFile("mushroom.png");
  m_mushroom.setTexture(m_mushroomTexture);
  m_increment = sf::Vector2i(4,4);
}

Game::~Game() {}

void Game::Update() {
  m_window.Update();
  MoveMushroom();
}

void Game::MoveMushroom() {


}

void Game::Render() {
  m_window.BeginDraw();
  m_window.Draw(m_mushroom);
  m_window.EndDraw();

}

Window* Game::GetWindow() {return &m_window;}
