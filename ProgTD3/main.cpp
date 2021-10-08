#include <SFML\Graphics.hpp>
#include <iostream>
#include "personnage.h"

using namespace std;
using namespace sf;

int main()
{
	/****************  Initialisations  ****************//*
	Clock maclock;
	Time getTimeDelta;
	RenderWindow window(VideoMode(1250, 750), "Petit jeu SFML!"/*, Style::Fullscreen);

	CircleShape essai1(100);
	essai1.setPosition(500, 233);*/

	/***********  Fenetre  ************//*
	while (window.isOpen())
	{
		getTimeDelta = maclock.restart(); // ajoute un - devant maclock pour la balle... sinon enleve la clock... ou bien lancer le jeu avec la balle sur la barre
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(essai1);
		window.display();
	}
	*/


	cout << "fkjqlmfjqfjqf" << endl;

	return 1;
}