#include "App.h"

class GameApp : public App {
public:
	GameApp(char const* title, unsigned int width, unsigned int height);
	GameApp(GameApp const& o);
	GameApp& operator=(GameApp const& o);
	~GameApp();

	bool init() override;
	void update(sf::Time const& time) override;
	void render(sf::Time const& time) override;
	void exit() override;

	void handleEvent(sf::Event const& event) override;
};
