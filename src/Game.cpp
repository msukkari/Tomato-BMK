#include "Game.h"	

Game* Game::s_pInstance = NULL;

bool Game::init() {
	//Init SDL

	//Init other game components

	m_bRunning = true;
	return true;
}

void Game::render() {
	//call render functions
}

void Game::update() {
	//call update functions
}

void Game::clean() {
	//clean up
}

void Game::handleEvents() {
	//handle events
}