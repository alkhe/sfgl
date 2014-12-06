#include "GameApp.h"

GameApp::GameApp(char const* title, unsigned int width, unsigned int height) : App(title, width, height) {

}

GameApp::GameApp(const GameApp &o) : App(o) {

}

GameApp &GameApp::operator=(GameApp const &o) {
	App::operator=(o);
	return *this;
}

GameApp::~GameApp() {

}

bool GameApp::init() {
	return App::init();
}

void GameApp::update(sf::Time const& time) {
	App::update(time);
}

void GameApp::render(sf::Time const& time) {
	App::render(time);

	glBegin(GL_TRIANGLES);
	glVertex2f(-.5f, .5f);
	glVertex2f(.5f, .5f);
	glVertex2f(0, -.5f);
	glEnd();
}

void GameApp::exit() {
	App::exit();
}

void GameApp::handleEvent(sf::Event const& event) {
	App::handleEvent(event);

	switch (event.type) {
		case sf::Event::KeyPressed:
			break;
		default:
			break;
	}
}
