#ifndef APP_H
#define APP_H

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

class App {
public:
	App(char const* title, unsigned int width, unsigned int height);
	App(App const& o);
	App& operator=(App const& o);
	virtual ~App();

	virtual void run();

	virtual bool init();
	virtual void update(sf::Time const& time);
	virtual void render(sf::Time const& time);
	virtual void exit();

	virtual void handleEvent(sf::Event const& event);
protected:
	sf::Window* _window;
	sf::Event* _event;
	sf::Clock* _clock;
	sf::Time* _frame;
};

#endif