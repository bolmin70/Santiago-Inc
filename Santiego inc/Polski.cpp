#include "stdafx.h"
#include "Polski.h"
#include "sfml/graphics.hpp"

sf::Text Polski::question1;
sf::Text Polski::answer1;
sf::Text Polski::answer2;
sf::Text Polski::answer3;

int Polski::p_pytanie_true; //good answer for polish lesson
int Polski::p_pytanie_int; //numer pytania
int Polski::p_pytanie_dobrze;
int Polski::p_pytanie_koniec;
int Polski::p_pytanie_start;
bool Polski::car_game;

void Polski::Polskie_pytanie(sf::RenderWindow &x_window, sf::Font x_font)
{

	if (p_pytanie_int  < 0) {
		question1.setFont(x_font);
		question1.setString(L"PYTANIE TUTAJ");
		question1.setCharacterSize(55);

		answer1.setFont(x_font);
		answer1.setString(L"ODPOWIED TUTAJ");
		answer1.setCharacterSize(55);

		answer2.setFont(x_font);
		answer2.setString(L"ODPOWIED TUTAJ");
		answer2.setCharacterSize(55);

		answer3.setFont(x_font);
		answer3.setString(L"ODPOWIED TUTAJ");
		answer3.setCharacterSize(55);



	}
	//Szko³a


	
	if(p_pytanie_int == 1) {

		question1.setFont(x_font); 
		question1.setString(L"How do you say school in Polish?"); 
		question1.setCharacterSize(55); 
		answer1.setFont(x_font); 
		answer1.setString(L"Szko³a"); 
		answer1.setCharacterSize(55); 
		answer2.setFont(x_font); 
		answer2.setString(L"£awka"); 
		answer2.setCharacterSize(55); 
		answer3.setFont(x_font); 
		answer3.setString(L"Zupa"); 
		answer3.setCharacterSize(55);

	}

	
	if(p_pytanie_int == 2) {

		question1.setFont(x_font); question1.setString(L"What do you use to pay in the store?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"woda"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"naleœnik"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"pieni¹dze"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 3) {

		question1.setFont(x_font); question1.setString(L"Words are written in it."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"tablica"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"metro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"ksi¹¿ka"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 4) {

		question1.setFont(x_font); question1.setString(L"You take lesson notes in it?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Podrêcznik"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Zeszyt"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Prom"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 5) {

		question1.setFont(x_font); question1.setString(L"How do you say pen in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"d³ugopis"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"pies"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"o³ówek"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 6) {

		question1.setFont(x_font); question1.setString(L"A book or notebook is made of them."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zeszyt"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"kartka"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"poci¹g"); answer3.setCharacterSize(55);

	}
	
	if(p_pytanie_int == 7) {

		question1.setFont(x_font); question1.setString(L"If you write something with it, it's easy to wipe it off."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"woda"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"o³ówek"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"auto"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 8) {

	question1.setFont(x_font); question1.setString(L"It helps in learning."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"podrêcznik"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"cukierki"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"pó³noc"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 9) {

			question1.setFont(x_font); question1.setString(L"You sit in it during the lesson."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"³awka"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"kosmos"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"samolot"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 10) {

			question1.setFont(x_font); question1.setString(L"How do you say board in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"komputer"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"zeszyt"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"tablica"); answer3.setCharacterSize(55);

	}


		//Transport


	if(p_pytanie_int == 11) {

			question1.setFont(x_font); question1.setString(L"In Warsaw, it goes underground."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"szko³a"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"metro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"samolot"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 12) {

			question1.setFont(x_font); question1.setString(L"A means of transport stopping at stops."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Autobus"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Helikopter"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"zeszyt"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 13) {

			question1.setFont(x_font); question1.setString(L"A means of transport stopping at stops."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"tramwaj"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"kartka"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"szko³a"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 14) {

			question1.setFont(x_font); question1.setString(L"Means of transport stopping at stations."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"samolot"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L" poci¹g"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"statek"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 15) {

			question1.setFont(x_font); question1.setString(L"How do you say car in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"plecak"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"samochód"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"rêka"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 16) {

			question1.setFont(x_font); question1.setString(L"How do you say ferry in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"czekolada"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"metro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Prom"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 17) {

			question1.setFont(x_font); question1.setString(L"How do you say ship in Polish"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"statek"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"woda"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"samolot"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 18) {

			question1.setFont(x_font); question1.setString(L"How do you say truck in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"szko³a"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"metro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ciê¿arówka"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 19) {

			question1.setFont(x_font); question1.setString(L"Lands at the airport"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"rzeka"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"samolot"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"statek"); answer3.setCharacterSize(55);

		}

	if(p_pytanie_int == 20) {

			question1.setFont(x_font); question1.setString(L"Flies and has no wings."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"helikopter"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"metro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"góra"); answer3.setCharacterSize(55);

		}
		




	if(p_pytanie_int == 21) {

		question1.setFont(x_font); question1.setString(L"How do you say North in Polish?"); 
		question1.setCharacterSize(55); 
		answer1.setFont(x_font); 
		answer1.setString(L"Pó³noc"); 
		answer1.setCharacterSize(55); 
		answer2.setFont(x_font); 
		answer2.setString(L"Wschód"); 
		answer2.setCharacterSize(55); 
		answer3.setFont(x_font); 
		answer3.setString(L"Zachód"); 
		answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 22) {

		question1.setFont(x_font); question1.setString(L"How do you say South in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Zachód"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Wschód"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Po³udnie"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 23) {

		question1.setFont(x_font); question1.setString(L"How do you say East in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Pó³noc"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Wschód"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Zachód"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 24) {

		question1.setFont(x_font); question1.setString(L"How do you say West in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Pó³noc"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Wschód"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Zachód"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 25) {

		question1.setFont(x_font); question1.setString(L"... divided into states."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Morze"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Stolica"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Kraj"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 26) {

		question1.setFont(x_font); question1.setString(L"How do you say the city in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Morze"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Miasto"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Kraj"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 27) {

		question1.setFont(x_font); question1.setString(L"How do you say river in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Morze"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Jezioro"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Rzeka"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 28) {

		question1.setFont(x_font); question1.setString(L"How do you say the sea in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Morze"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Stolica"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Góry"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 29) {

		question1.setFont(x_font); question1.setString(L"How do you say mountain in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Deszcz"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Góra"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Miasto"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 30) {

		question1.setFont(x_font); question1.setString(L"The ... of Poland is Warsaw."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Kraj"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Stolica"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Pañstwo"); answer3.setCharacterSize(55);

	}

	//Zwierzêta

	if(p_pytanie_int == 31) {

		question1.setFont(x_font); question1.setString(L"Jumps on trees."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Koñ"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 32) {

		question1.setFont(x_font); question1.setString(L"How do you say cat in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Kot"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 33) {

		question1.setFont(x_font); question1.setString(L"How do you say dog in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Pies"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 34) {

		question1.setFont(x_font); question1.setString(L"How do you say horse in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Koñ"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 35) {

		question1.setFont(x_font); question1.setString(L"A colorful bird."); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Koñ"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Papuga"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 36) {

		question1.setFont(x_font); question1.setString(L"How do you say Tiger in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Koñ"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Tygrys"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 37) {

		question1.setFont(x_font); question1.setString(L"How do you say Elephant in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Kot"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"S³oñ"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Owca"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 38) {

		question1.setFont(x_font); question1.setString(L"Has a long neck"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Papuga"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¯yrafa"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 39) {

		question1.setFont(x_font); question1.setString(L"How do you say pig in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Kot"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Koñ"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Œwinia"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 40) {

		question1.setFont(x_font); question1.setString(L"How do you say sheep in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"Owca"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"Tygrys"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"Ma³pa"); answer3.setCharacterSize(55);

	}



	//Kolory



	if(p_pytanie_int == 41) {

		question1.setFont(x_font); question1.setString(L"How do you say red in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"czerwony"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"niebieski"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"czarny"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 42) {

		question1.setFont(x_font); question1.setString(L"How do you say green in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zielony"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"bia³y"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"niebieski"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 43) {

		question1.setFont(x_font); question1.setString(L"How do you say yellow in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zielony"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"¿ó³ty"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"br¹zowy"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 44) {

		question1.setFont(x_font); question1.setString(L"How do you say black in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"czerwony"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"bia³y"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"czarny"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 45) {

		question1.setFont(x_font); question1.setString(L"How do you say white in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"czarny"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"bia³y"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"niebieski"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 46) {

		question1.setFont(x_font); question1.setString(L"How do you say blue in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zó³ty"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"bia³y"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"niebieski"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 47) {

		question1.setFont(x_font); question1.setString(L"How do you say orange in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zó³ty"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"czarny"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"pomarañczowy"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 48) {

		question1.setFont(x_font); question1.setString(L"How do you say black in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"zó³ty"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"czarny"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"niebieski"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 49) {

		question1.setFont(x_font); question1.setString(L"How do you say brown in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"bia³y"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"czarny"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"br¹zowy"); answer3.setCharacterSize(55);

	}

	if(p_pytanie_int == 50) {

		question1.setFont(x_font); question1.setString(L"How do you say pink in Polish?"); question1.setCharacterSize(55); answer1.setFont(x_font); answer1.setString(L"bia³y"); answer1.setCharacterSize(55); answer2.setFont(x_font); answer2.setString(L"ró¿owy"); answer2.setCharacterSize(55); answer3.setFont(x_font); answer3.setString(L"br¹zowy"); answer3.setCharacterSize(55);

	}


	

	if (p_pytanie_int == 51) {
			question1.setFont(x_font);
			question1.setString(L" The color that Play often uses ");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Fioletowy");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Czarny");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Bia³y");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 52) {
			question1.setFont(x_font);
			question1.setString(L" The wood has a….color");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"¯ó³ty");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Br¹zowy");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Latawiec");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 53) {
			question1.setFont(x_font);
			question1.setString(L" They are red ");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Maliny");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Œliwki");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Trawa");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 54) {
			question1.setFont(x_font);
			question1.setString(L" What is small and blue?");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Jab³ko");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Drewno");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Borówki");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 55) {
			question1.setFont(x_font);
			question1.setString(L"You make juice from it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Jab³ko");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Komputer");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Kamieñ");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 56) {
			question1.setFont(x_font);
			question1.setString(L"A yellow vegetable");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Samochód");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Auto");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ziemniak");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 57) {
			question1.setFont(x_font);
			question1.setString(L"It's big and purple");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Ma³pa");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Ziemniak");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Burak");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 58) {
			question1.setFont(x_font);
			question1.setString(L"A hen makes them");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Jab³ko");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Jajko");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"jojo");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 59) {
			question1.setFont(x_font);
			question1.setString(L"It grows in the woods");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"£awka");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Droga");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Grzyb");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 60) {
			question1.setFont(x_font);
			question1.setString(L"A spoon  is used to eat it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Zupa");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Broku³");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Dom");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 61) {
			question1.setFont(x_font);
			question1.setString(L"An orange vegetable");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Jab³ko");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Drewno");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Marchew");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 62) {
			question1.setFont(x_font);
			question1.setString(L"It comes from animals");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miêso");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Warzywa");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Owoce");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 63) {
			question1.setFont(x_font);
			question1.setString(L" You buy things in it ");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Szko³a");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Sklep");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ma³pa");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 64) {
			question1.setFont(x_font);
			question1.setString(L"The center of the city");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Centrum");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Drzewo");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Dom");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 65) {
			question1.setFont(x_font);
			question1.setString(L"It is on the street");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Marchew");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Drzewi");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Sygnalizacja œwietlna");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 66) {
			question1.setFont(x_font);
			question1.setString(L"They are at road crossings");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Pasy");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ma³pa");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 67) {
			question1.setFont(x_font);
			question1.setString(L"You drink coffee in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Owca");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Kawiarnia");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Droga");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 68) {
			question1.setFont(x_font);
			question1.setString(L"You park cars in here");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Szko³a");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Parking");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ogród");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 69) {
			question1.setFont(x_font);
			question1.setString(L"You live in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Dom");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Ulica");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Drzewo");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 70) {
			question1.setFont(x_font);
			question1.setString(L"High building");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Drzewo");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Wie¿owiec");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Cz³owiek");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 71) {
			question1.setFont(x_font);
			question1.setString(L"A place of eductaion");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Szko³a");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Ziemia");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Zdjêcie");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 72) {
			question1.setFont(x_font);
			question1.setString(L"Tall, electrical cables hang on it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Ulica");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"S³up");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 73) {
			question1.setFont(x_font);
			question1.setString(L"You walk on it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Koza");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Ulica");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Drzewo");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 74) {
			question1.setFont(x_font);
			question1.setString(L"Small town which focuses on agriculture");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Ulica");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Wioska");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Grzyb");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 75) {
			question1.setFont(x_font);
			question1.setString(L"A large place built intensely");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Koñ");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 76) {
			question1.setFont(x_font);
			question1.setString(L"You go there to eat");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Ulica");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Restauracja");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Droga");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 77) {
			question1.setFont(x_font);
			question1.setString(L"You sit on it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Kanapa");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Gara¿");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 78) {
			question1.setFont(x_font);
			question1.setString(L"You put stuff on it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Stó³");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Dzik");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 79) {
			question1.setFont(x_font);
			question1.setString("Usually near the table"); 
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Krzes³o");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Koñ");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 80) {
			question1.setFont(x_font);
			question1.setString(L"Usually used to do homework");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Biurko");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ogród");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 81) {
			question1.setFont(x_font);
			question1.setString(L"It is transparent, and you can look through it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Okno");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Grzyb");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ma³pa");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 82) {
			question1.setFont(x_font);
			question1.setString(L"You sleep in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"£ó¿ko");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Koñ");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 83) {
			question1.setFont(x_font);
			question1.setString(L"Du¿a miejscowoœæ intensywnie zabudowana");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Koñ");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 84) {
			question1.setFont(x_font);
			question1.setString(L"you put your head on it while you sleep");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Poduszka");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Dzik");
			answer3.setCharacterSize(55);



		}
		
	if (p_pytanie_int == 85) {
			question1.setFont(x_font);
			question1.setString(L"You cook in this place");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Kuchnia");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 86) {
			question1.setFont(x_font);
			question1.setString(L"You live in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Ulica");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Kuchnia");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 87) {
			question1.setFont(x_font);
			question1.setString(L"You can park a car in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Gara¿");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Basen");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 88) {
			question1.setFont(x_font);
			question1.setString(L"You wash yourself in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Wioska");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"£azienka");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 89) {
			question1.setFont(x_font);
			question1.setString(L"You have a TV and couch in there");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Salon");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ulica");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 90) {
			question1.setFont(x_font);
			question1.setString(L"A place of work");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Gabinet");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dom");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Niebo");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 91) {
			question1.setFont(x_font);
			question1.setString(L"You have a bed in it");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Sypialnia");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Grzybobranie");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Internet");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 92) {
			question1.setFont(x_font);
			question1.setString(L"Welcoming statement"); //a Belmondo song
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Miasto");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Dzieñ dobry");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Ma³pa");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 93) {
			question1.setFont(x_font);
			question1.setString(L"A farewell statement");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Sypialnia");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Do widzenia");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Internet");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 94) {
			question1.setFont(x_font);
			question1.setString(L"Statement used in apology");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Przepraszam");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Grzybobranie");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"T³umacz");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 95) {
			question1.setFont(x_font);
			question1.setString(L"You say it to thank somebody");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Sypialnia");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Basen");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Dziêkuje");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 96) {
			question1.setFont(x_font);
			question1.setString(L"You say it to agree on something");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Nie");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"Tak");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Internet");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 97) {
			question1.setFont(x_font);
			question1.setString(L"You say it to disagree on something");
			question1.setCharacterSize(55);

			answer1.setFont(x_font);
			answer1.setString(L"Nie");
			answer1.setCharacterSize(55);

			answer2.setFont(x_font);
			answer2.setString(L"¯elazo");
			answer2.setCharacterSize(55);

			answer3.setFont(x_font);
			answer3.setString(L"Cywilizacja");
			answer3.setCharacterSize(55);



		}

	if (p_pytanie_int == 98) {
		question1.setFont(x_font);
		question1.setString(L"The best polish name");
		question1.setCharacterSize(55);

		answer1.setFont(x_font);
		answer1.setString(L"Mateusz");
		answer1.setCharacterSize(55);

		answer2.setFont(x_font);
		answer2.setString(L"Bartosz");
		answer2.setCharacterSize(55);

		answer3.setFont(x_font);
		answer3.setString(L"Aleksander");
		answer3.setCharacterSize(55);



	}

	if (p_pytanie_int == 99) {
		question1.setFont(x_font);
		question1.setString(L"you play games on it");
		question1.setCharacterSize(55);

		answer1.setFont(x_font);
		answer1.setString(L"Komputer");
		answer1.setCharacterSize(55);

		answer2.setFont(x_font);
		answer2.setString(L"Chodnik");
		answer2.setCharacterSize(55);

		answer3.setFont(x_font);
		answer3.setString(L"Barach³o");
		answer3.setCharacterSize(55);



	}




//Niemiecki

	if(p_pytanie_int == 101) {
		question1.setFont(x_font); question1.setString(L" How do you say attractive in German? "); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 102) {
		question1.setFont(x_font); question1.setString(L"How do you say fat in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 103) {
		question1.setFont(x_font); question1.setString(L"How do you say big in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"groß"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 104) {
		question1.setFont(x_font); question1.setString(L"How do you say pretty in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hübsch"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 105) {
		question1.setFont(x_font); question1.setString(L"How do you say intelligent in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"intelligent"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 106) {
		question1.setFont(x_font); question1.setString(L"How do you say little in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 107) {
		question1.setFont(x_font); question1.setString(L"How do you say boring in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"langweilig"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"klein"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 108) {
		question1.setFont(x_font); question1.setString(L"How do you say that someone is nice in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 109) {
		question1.setFont(x_font); question1.setString(L"How do you say slim in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"schlank"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 110) {
		question1.setFont(x_font); question1.setString(L" How do you say sporty in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"sportlich"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 111) {
		question1.setFont(x_font); question1.setString(L" How do you say funny in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"witzig"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 112) {
		question1.setFont(x_font); question1.setString(L"How do you say friendly in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"hässlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"freundlich"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 113) {
		question1.setFont(x_font); question1.setString(L"How do you say ugly in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"hässlich"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 114) {
		question1.setFont(x_font); question1.setString(L"How do you say young in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"jung"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 115) {
		question1.setFont(x_font); question1.setString(L"How do you say slowly in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"langsam"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"hässlich"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"witzig"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 116) {
		question1.setFont(x_font); question1.setString(L"How do you say calm in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"ruhig"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"schnell"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 117) {
		question1.setFont(x_font); question1.setString(L"How do you say fast in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"dick"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"schnell"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 118) {
		question1.setFont(x_font); question1.setString(L"How do you say sporty in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"attraktiv"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"sportlich"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"schnell"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 119) {
		question1.setFont(x_font); question1.setString(L"How do you say personable in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"sympathisch"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"schnell"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"nett"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 120) {
		question1.setFont(x_font); question1.setString(L"How do you say tolerant in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"schwer"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"tolerant"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"geduldig"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 121) {
		question1.setFont(x_font); question1.setString(L"How do you say unfriendly in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"unfreundlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L" tolerant "); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hässlich"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 122) {
		question1.setFont(x_font); question1.setString(L"How do you say patiently in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"unfreundlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"tolerant"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hässlich"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 123) {
		question1.setFont(x_font); question1.setString(L"How do you say impatient in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"unfreundlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"ungeduldig"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hässlich"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 124) {
		question1.setFont(x_font); question1.setString(L"How do you say interesting in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"unfreundlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"tolerant"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"interessant"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 125) {
		question1.setFont(x_font); question1.setString(L"How do you say heavy in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"schwer"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"tolerant"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hässlich"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 126) {
		question1.setFont(x_font); question1.setString(L"How do you say exciting in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"unfreundlich"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"spannend"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"hässlich"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 127) {
		question1.setFont(x_font); question1.setString(L"How do you say brother in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Bruder, Brüder"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Cousin, -s"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Cousine, -n "); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 128) {
		question1.setFont(x_font); question1.setString(L"How do you say cousin in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Bruder, Brüder"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Cousin, -s"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 129) {
		question1.setFont(x_font); question1.setString(L"How do you say cousin in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Bruder, Brüder"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Eltern"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Cousine, -n "); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 130) {
		question1.setFont(x_font); question1.setString(L"How do you say parents in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Bruder, Brüder"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Cousin, -s"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 131) {
		question1.setFont(x_font); question1.setString(L"How do you say grandson in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Enkelin, -nen"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Enkel, -"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 132) {
		question1.setFont(x_font); question1.setString(L"How do you say granddaughter in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L" die Familie, -n "); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Enkelin, -nen"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 133) {
		question1.setFont(x_font); question1.setString(L"How do you say family in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Enkel, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Enkelin, -nen"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 134) {
		question1.setFont(x_font); question1.setString(L"How do you say siblings in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Enkel, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 135) {
		question1.setFont(x_font); question1.setString(L"How do you say grandparents in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Großeltern"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 136) {
		question1.setFont(x_font); question1.setString(L"How do you say the grandmother in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Großmutter, -mütter "); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 137) {
		question1.setFont(x_font); question1.setString(L"How do you say mother in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L" die Geschwister "); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 138) {
		question1.setFont(x_font); question1.setString(L"How do you say grandfather in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Enkel, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Großvater, -väter"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 139) {
		question1.setFont(x_font); question1.setString(L"How do you say grandmother in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Enkel, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Oma, -s"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 140) {
		question1.setFont(x_font); question1.setString(L"How do you say uncle in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Onkel, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Arzt, Ärzte"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Eltern"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 141) {
		question1.setFont(x_font); question1.setString(L"How do you say grandpa in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Opa, -s"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 142) {
		question1.setFont(x_font); question1.setString(L"How do you say sister in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Schwester, -n"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Opa, -s"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 143) {
		question1.setFont(x_font); question1.setString(L"How do you say son in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Sohn, Söhne"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 144) {
		question1.setFont(x_font); question1.setString(L"How do you say aunt in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Tante, -n"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Opa, -s"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 145) {
		question1.setFont(x_font); question1.setString(L"How do you say daughter in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 146) {
		question1.setFont(x_font); question1.setString(L"How do you say father in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Vater, Väter"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 147) {
		question1.setFont(x_font); question1.setString(L"How do you say lawyer in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Anwalt, Anwälte"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 148) {
		question1.setFont(x_font); question1.setString(L"How do you say architect in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Architekt, -en"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 149) {
		question1.setFont(x_font); question1.setString(L"How do you say doctor in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"die Geschwister"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"der Arzt, Ärzte"); answer3.setCharacterSize(45);
	}

	if(p_pytanie_int == 150) {
		question1.setFont(x_font); question1.setString(L"How do you say teacher in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Lehrer, -"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 151) {
		question1.setFont(x_font); question1.setString(L"How do you say policeman in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Polizist, -en"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 152) {
		question1.setFont(x_font); question1.setString(L"How do you say actor in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"der Schauspieler, -"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L" der Lehrer, - "); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}
	if(p_pytanie_int == 153) {
		question1.setFont(x_font); question1.setString(L"How do you say vet in German?"); question1.setCharacterSize(45); answer1.setFont(x_font); answer1.setString(L"die Mutter, Mütter"); answer1.setCharacterSize(45); answer2.setFont(x_font); answer2.setString(L"der Tierarzt, -ärzte"); answer2.setCharacterSize(45); answer3.setFont(x_font); answer3.setString(L"die Tochter, Töchter"); answer3.setCharacterSize(45);
	}














	if (car_game == 0) {
		question1.setPosition(400, 370);
		x_window.draw(question1);

		answer1.setPosition(450, 440);
		x_window.draw(answer1);

		answer2.setPosition(450, 540);
		x_window.draw(answer2);

		answer3.setPosition(450, 640);
		x_window.draw(answer3);
	}
	if (car_game == 1) {
		question1.setPosition(500, 370);
		x_window.draw(question1);

		answer1.setPosition(670, 440);
		x_window.draw(answer1);

		answer2.setPosition(670, 540);
		x_window.draw(answer2);

		answer3.setPosition(670, 640);
		x_window.draw(answer3);
	}
}



void Polski::Polskie_pytanie_Events(sf::Event &x_event, sf::RenderWindow &x_window)
{
	
		if (answer1.getGlobalBounds().contains(x_window.mapPixelToCoords(sf::Mouse::getPosition(x_window)))) {
			answer1.setFillColor(sf::Color::Red);
			if (x_event.type == sf::Event::MouseButtonReleased && x_event.key.code == sf::Mouse::Left) {
				
				if (p_pytanie_int == 1) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 2) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 3) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 4) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 5) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 6) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 7) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 8) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 9) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 10) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 11) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 12) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 13) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 14) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 15) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 16) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 17) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 18) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 19) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 20) {
					p_pytanie_dobrze = 1;
				}
			
			}
		}
		else {
			answer1.setFillColor(sf::Color::White);
		}
		if (answer2.getGlobalBounds().contains(x_window.mapPixelToCoords(sf::Mouse::getPosition(x_window)))) {
			answer2.setFillColor(sf::Color::Red);
			if (x_event.type == sf::Event::MouseButtonReleased && x_event.key.code == sf::Mouse::Left) {
				
				if (p_pytanie_int == 1) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 2) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 3) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 4) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 5) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 6) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 7) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 8) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 9) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 10) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 11) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 12) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 13) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 14) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 15) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 16) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 17) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 18) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 19) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 20) {
					p_pytanie_dobrze = 0;
				}
			
			}
		}
		else {
			answer2.setFillColor(sf::Color::White);
		}
		if (answer3.getGlobalBounds().contains(x_window.mapPixelToCoords(sf::Mouse::getPosition(x_window)))) {
			answer3.setFillColor(sf::Color::Red);
			if (x_event.type == sf::Event::MouseButtonReleased && x_event.key.code == sf::Mouse::Left) {
			
				if (p_pytanie_int == 1) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 2) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 3) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 4) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 5) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 6) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 7) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 8) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 9) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 10) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 11) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 12) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 13) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 14) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 15) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 16) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 17) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 18) {
					p_pytanie_dobrze = 1;
				}
				if (p_pytanie_int == 19) {
					p_pytanie_dobrze = 0;
				}
				if (p_pytanie_int == 20) {
					p_pytanie_dobrze = 0;
				}
			
			}
		}
		else {
			answer3.setFillColor(sf::Color::White);
		}
	
}
