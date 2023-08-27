#include "sfml/graphics.hpp"
#pragma once




class Polski
{
public:

	static sf::Text question1;
	static sf::Text answer1;
	static sf::Text answer2;
	static sf::Text answer3;

	static int p_pytanie_true; //good answer for polish lesson
	static int p_pytanie_int; //numer pytania

	static int p_pytanie_dobrze; //zdane pytania
	static int p_pytanie_koniec;

	static int p_pytanie_start;

	static bool car_game;

	static void Polskie_pytanie(sf::RenderWindow &x_window, sf::Font x_font);

	static void Polskie_pytanie_Events(sf::Event &x_event, sf::RenderWindow &x_window);

};

