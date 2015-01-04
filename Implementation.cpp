#include "Implementation.h"

Implementation::Implementation(char const* title, unsigned int width, unsigned int height) : App(title, width, height) {

}

Implementation::Implementation(const Implementation &o) : App(o) {

}

Implementation &Implementation::operator=(Implementation const &o) {
	App::operator=(o);
	return *this;
}

Implementation::~Implementation() {

}

bool Implementation::init() {
	return App::init();
}

void Implementation::update(sf::Time const& time) {
	App::update(time);
}

void Implementation::render(sf::Time const& time) {
	App::render(time);

	glBegin(GL_TRIANGLES);
	glVertex2f(-.5f, .5f);
	glVertex2f(.5f, .5f);
	glVertex2f(0, -.5f);
	glEnd();

	glFlush();
}

void Implementation::exit() {
	App::exit();
}

void Implementation::handleEvent(sf::Event const& event) {
	App::handleEvent(event);

	switch (event.type) {
		case sf::Event::KeyPressed:
			break;
		case sf::Event::MouseMoved:
			break;
		case sf::Event::MouseButtonPressed:
			break;
		case sf::Event::MouseWheelMoved:
			break;
		default:
			break;
	}
}
