#include<iostream>
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Window.hpp>

int main()
{
	//window
	sf::RenderWindow window(sf::VideoMode(720, 480), "My Game", sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize);
	sf::Event ev;

	//Game Loop
	while (window.isOpen())
	{
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case ::sf::Event::Closed:
					window.close();
					break;
			case ::sf::Event::KeyPressed:
					if (ev.key.code == sf::Keyboard::Escape)
					window.close();
					break;
			}
		}

		//update 



		//Render
		window.clear();

		window.display();
	}

	//End of application
	return 0;
}