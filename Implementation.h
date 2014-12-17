#include "App.h"

class Implementation : public App {
public:
	Implementation(char const* title, unsigned int width, unsigned int height);
	Implementation(Implementation const& o);
	Implementation & operator=(Implementation const& o);
	~Implementation();

	bool init() override;
	void update(sf::Time const& time) override;
	void render(sf::Time const& time) override;
	void exit() override;

	void handleEvent(sf::Event const& event) override;
};
