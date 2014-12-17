#include "App.h"

App::App(char const* title, unsigned int width, unsigned int height) {
	_window = new sf::Window(sf::VideoMode(width, height), title);
	_event = new sf::Event;
	_clock = new sf::Clock;
	_frame = new sf::Time;
}

App::App(const App &o) {
	_window = o._window;
	_event = o._event;
	_clock = o._clock;
	_frame = o._frame;
}

App& App::operator=(App const& o) {
	_window = o._window;
	_event = o._event;
	_clock = o._clock;
	_frame = o._frame;
	return *this;
}

App::~App() {

}

void App::run() {
	if (init()) {
		while (_window->isOpen()) {
			while (_window->pollEvent(*_event)) {
				handleEvent(*_event);
			}

			*_frame = _clock->restart();

			update(*_frame);
			render(*_frame);

			_window->display();
		}
	}
}

bool App::init() {
	_window->setVerticalSyncEnabled(true);
	return true;
}

void App::update(sf::Time const &time) {

}

void App::render(sf::Time const &time) {
	glClear(GL_COLOR_BUFFER_BIT);
}

void App::exit() {

}

void App::handleEvent(sf::Event const& event) {
	switch (event.type) {
		case sf::Event::Closed:
			_window->close();
			break;
		case sf::Event::KeyPressed:
			if (event.key.control && event.key.code == sf::Keyboard::Q) {
				_window->close();
			}
			break;
		default:
			break;
	}
}
