#include "stdafx.h"
#include "sfml/graphics.hpp"
#include "sfml/audio.hpp"
#include "sstream"
#include "string"
#include "iostream"
#include "dos.h"
#include "cstdlib"
#include "time.h"
#include "string"
#include "stdio.h"
#include "fstream"
#include "conio.h"
#include "windows.h"
#include "stdlib.h"
#include "Polski.h"
#include "stdafx.h"

using namespace std;



//integers
int minutes = 0;
int hours = 6;
int day = 4;
int month = 1;
int year = 1;
int endgame = 0;
int currentgame = 0;
int travel_type = 0;

int end_game_level = 0;

int flight_level = 1;

int time_level = 0;

int easyb = 0;
int normalb = 0;
int hardb = 0;

bool tip1;

bool sound1;
bool sound2;
bool sound3;


bool mission = false;
bool first = true;
bool good = false;
bool travel = false;
bool cantafford = false;
bool in_world = false;


int ques_reapet = 0;
int random = 0;
int question_counter = 0;
int question = 0;

int actualtravelint = 0;
int futuretravelint = 0;
int travelint = 0;
int switc = 0;

bool low_set = false;
bool med_set = true;
bool ult_set = false;

bool low_vol = false;
bool med_vol = false;
bool ult_vol = true;

int timeint = 0;
int fadeint = 0;

int money = 200;
int level = 0;
int points = 0;

int targetplace = 0;
int place = 0; //0 - Santiego; 1 - hungary; 2 - norway; 3 - denmark; 4 - sweden 
int case0 = 0;
int scene = 0;
int menuset = 0;


int creditsint = 950;
int creditsint2 = 1200;
int menu1 = 0;
//strings
string attackin; //in - indicator
string oattackin; //o - opponent
string healthin; //b - branch
string blockin;
string stin;
string campin;
string weightin;
string levelin;
string dungeon_flourin;
string hungerin;
string hourin;
string yearin;
string monthin;
string minutein;
string vitalityin;
string speedin;
string dayin;
string agilityin;
string arcanein;
string strengthin;
string stamina2in;
string woundin;
string pointsin;
string moneyin;
//stringstreams
stringstream fighta;
stringstream fightoa;
stringstream healthss;
stringstream blockss;
stringstream attackss;
stringstream dungeon_flourss;
stringstream goldss;
stringstream staminass;
stringstream campss;
stringstream weightss;
stringstream levelss;
stringstream hungerss;
stringstream minutess;
stringstream monthss;
stringstream yearss;
stringstream hourss;
stringstream vitalityss;
stringstream speedss;
stringstream agilityss;
stringstream arcaness;
stringstream strengthss;
stringstream stamina2ss;
stringstream woundss;
stringstream dayss;
stringstream pointsss;
stringstream moneyss;


int musict = 0;

void levelfunction() {
	levelss.str("");
	levelss << level;
	levelin = levelss.str();
}

void minutefunction() {
	minutess.str("");
	minutess << minutes;
	minutein = minutess.str();
}
void hourfunction() {
	hourss.str("");
	hourss << hours;
	hourin = hourss.str();
}
void dayfunction() {
	dayss.str("");
	dayss << day;
	dayin = dayss.str();
}
void monthfunction() {
	monthss.str("");
	monthss << month;
	monthin = monthss.str();
}
void yearfunction() {
	yearss.str("");
	yearss << year;
	yearin = yearss.str();
}

void moneyfunction() {
	moneyss.str("");
	moneyss << money;
	moneyin = moneyss.str();

}

void pointsfunction() {
	pointsss.str("");
	pointsss << points;
	pointsin = pointsss.str();

}

//Tutorial
int tutorial = 0;

void Save()
{
	ofstream SaveFile;
	SaveFile.open("Tiago.dat", std::ofstream::trunc);

	SaveFile << tutorial << " " << musict;


	SaveFile.close();
}

void Load()
{

	ifstream LoadFile;
	LoadFile.open("Tiago.dat", std::ofstream::in);

	LoadFile >> tutorial >> musict;

	LoadFile.close();
}




int main()
{
	srand(time(NULL));

	sf::Font mfont; //main font
	if (!mfont.loadFromFile("BACKTO1982.TTF"))
	{
		// error...
	}

	sf::Font xfont; //main font
	if (!xfont.loadFromFile("Graphic/Silver.ttf"))
	{
		// error...
	}


	sf::RenderWindow window(sf::VideoMode(1600, 900, 32), "Santiago Inc. 2.0"); //Santiago Inc. 2.0
	window.setFramerateLimit(60); //144
	sf::Image image;
	image.loadFromFile("Graphic/icon.png");
	window.setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());

	

	
	sf::Clock fadeclock;
	sf::Clock timeclock;
	sf::Clock menuclock;
	sf::Clock creditsclock;
	

	//tree
	sf::Texture upgrade_texture;
	upgrade_texture.loadFromFile("Graphic/up.png");

	sf::Sprite upgrade_sprite;
	upgrade_sprite.setTexture(upgrade_texture);

	upgrade_sprite.setScale(2.75f, 2.75f);


	sf::Texture gold_up_texture;
	gold_up_texture.loadFromFile("Graphic/gold_up.png");

	sf::Sprite gold_up_sprite;
	gold_up_sprite.setTexture(gold_up_texture);

	gold_up_sprite.setScale(2.75f, 2.75f);

	sf::Texture bar_texture;
	bar_texture.loadFromFile("Graphic/bar.png");

	sf::Sprite bar_sprite;
	bar_sprite.setTexture(bar_texture);

	bar_sprite.setScale(2.75f, 2.75f);

	sf::Texture plus1_texture;
	plus1_texture.loadFromFile("Graphic/plus_on.png");

	sf::Sprite plus1_sprite;
	plus1_sprite.setTexture(plus1_texture);

	plus1_sprite.setScale(2.75f, 2.75f);

	sf::Sprite plus2_sprite;
	plus2_sprite.setTexture(plus1_texture);

	plus2_sprite.setScale(2.75f, 2.75f);

	sf::Sprite plus3_sprite;
	plus3_sprite.setTexture(plus1_texture);

	plus3_sprite.setScale(2.75f, 2.75f);

	sf::Text trans;
	trans.setFont(mfont);
	trans.setString("200 => 1");
	trans.setCharacterSize(50);

	sf::Text points_in;
	points_in.setFont(mfont);
	points_in.setString(pointsin);
	points_in.setCharacterSize(50);

	sf::Texture plus2_texture;
	plus2_texture.loadFromFile("Graphic/plus_off.png");

	sf::Sprite plus4_sprite;
	plus4_sprite.setTexture(plus2_texture);

	plus4_sprite.setScale(2.75f, 2.75f);
	//music
	sf::Music mmusic1;
	mmusic1.openFromFile("Music/crimson.flac");
	mmusic1.setVolume(80);

	sf::Music mmusic2;
	mmusic2.openFromFile("Music/theme_integral.ogg");
	mmusic2.setVolume(80);

	sf::Music mmusic3;
	mmusic3.openFromFile("Music/mood.flac");
	mmusic3.setVolume(80);

	sf::Music menu2;
	menu2.openFromFile("Music/menu1.ogg");
	menu2.setVolume(80);

	sf::Music theme;
	theme.openFromFile("Music/theme.ogg");
	theme.setVolume(80);
	//misc
	sf::RectangleShape fade;
	fade.setPosition(sf::Vector2f(0, 0));
	fade.setFillColor(sf::Color(0, 0, 0, 0));
	fade.setSize(sf::Vector2f(1920, 1080));

	sf::RectangleShape menu_grim;
	menu_grim.setPosition(sf::Vector2f(0, 0));
	menu_grim.setFillColor(sf::Color(0, 0, 0, 100));
	menu_grim.setSize(sf::Vector2f(1920, 1080));

	sf::Text hours_in; //hours indicator
	hours_in.setFont(mfont);
	hours_in.setString(hourin);
	hours_in.setCharacterSize(35);

	sf::Text minutes_in; //minutes indicator
	minutes_in.setFont(mfont);
	minutes_in.setString(minutein);
	minutes_in.setCharacterSize(35);

	sf::Text day_in; //days indicator
	day_in.setFont(mfont);
	day_in.setString(dayin);
	day_in.setCharacterSize(35);

	sf::Text month_in; //month indicator
	month_in.setFont(mfont);
	month_in.setString(monthin);
	month_in.setCharacterSize(35);

	sf::Text year_in; //year indicator
	year_in.setFont(mfont);
	year_in.setString(yearin);
	year_in.setCharacterSize(35);

	sf::Text money_in; //money indicator
	money_in.setFont(mfont);
	money_in.setString(moneyin);
	money_in.setCharacterSize(35);

	sf::Text zero;
	zero.setFont(mfont);
	zero.setString("0");
	zero.setCharacterSize(35);


	sf::SoundBuffer popupb;
	popupb.loadFromFile("Music/pop_up.ogg");
	sf::Sound popup;
	popup.setBuffer(popupb);
	popup.setVolume(50);

	sf::Texture map_texture;
	map_texture.loadFromFile("Graphic/map.png");

	sf::Sprite map_sprite;
	map_sprite.setTexture(map_texture);

	map_sprite.setScale(2.1f, 1.95f);


	sf::Texture map_icon_texture;
	map_icon_texture.loadFromFile("Graphic/map_icon.png");


	sf::Sprite map_icon;
	map_icon.setTexture(map_icon_texture);

	map_icon.setScale(0.4f, 0.4f);


	sf::Texture search_icon_texture;
	search_icon_texture.loadFromFile("Graphic/search_icon.png");

	sf::Sprite search_icon;
	search_icon.setTexture(search_icon_texture);

	search_icon.setScale(7.0f, 7.0f);


	sf::Texture wanted_icon_texture;
	wanted_icon_texture.loadFromFile("Graphic/wanted_icon.png");

	sf::Sprite wanted_icon;
	wanted_icon.setTexture(wanted_icon_texture);

	wanted_icon.setScale(5.0f, 5.0f);

	sf::Texture tree_icon_texture;
	tree_icon_texture.loadFromFile("Graphic/tree.png");

	sf::Sprite tree_icon;
	tree_icon.setTexture(tree_icon_texture);

	tree_icon.setScale(5.5f, 5.5f);
	
	sf::Texture map_marker_texture;
	map_marker_texture.loadFromFile("Graphic/map_marker.png");

	sf::Texture map_marker_fill_texture;
	map_marker_fill_texture.loadFromFile("Graphic/map_marker_fill.png");



	sf::Sprite map_marker_australia_sprite;
	map_marker_australia_sprite.setTexture(map_marker_texture);

	map_marker_australia_sprite.setScale(3.0f, 3.0f);


	sf::Sprite map_marker_greenland_sprite;
	map_marker_greenland_sprite.setTexture(map_marker_texture);

	map_marker_greenland_sprite.setScale(3.0f, 3.0f);



	sf::Sprite map_marker_africa_sprite;
	map_marker_africa_sprite.setTexture(map_marker_texture);

	map_marker_africa_sprite.setScale(3.0f, 3.0f);


	sf::Sprite map_marker_europe_sprite;
	map_marker_europe_sprite.setTexture(map_marker_texture);

	map_marker_europe_sprite.setScale(3.0f, 3.0f);

	sf::Sprite map_marker_europehigh_sprite;
	map_marker_europehigh_sprite.setTexture(map_marker_texture);

	map_marker_europehigh_sprite.setScale(3.0f, 3.0f);


	sf::Sprite map_marker_asia_sprite;
	map_marker_asia_sprite.setTexture(map_marker_texture);

	map_marker_asia_sprite.setScale(3.0f, 3.0f);


	sf::Sprite map_marker_usa_sprite;
	map_marker_usa_sprite.setTexture(map_marker_texture);

	map_marker_usa_sprite.setScale(3.0f, 3.0f);

	sf::Sprite map_marker_usa_high_sprite;
	map_marker_usa_high_sprite.setTexture(map_marker_texture);

	map_marker_usa_high_sprite.setScale(3.0f, 3.0f);


	sf::Sprite map_marker_base_sprite;
	map_marker_base_sprite.setTexture(map_marker_texture);

	map_marker_base_sprite.setScale(3.0f, 3.0f);



	sf::Sprite map_marker_brazil_sprite;
	map_marker_brazil_sprite.setTexture(map_marker_texture);

	map_marker_brazil_sprite.setScale(3.0f, 3.0f);
	//text
	sf::Text programmer_credits;
	programmer_credits.setFont(mfont);
	programmer_credits.setString("Lead Programmer - Mateusz Bolminski \n \n \n \n \n Questions - Aleksander Laptaszynski\n \n \n Bartosz Dabrowski \n \n \n \n \n   special thanks to Adam Zaluska \n \n \n \n \n                   Additional Help:\n \n \nMaciek Rudzik\n \n \nSanSayu\n\n8bit Tube\n\nCraftpix.net\n\nDGHZ\n\nLinden Street ");
	programmer_credits.setCharacterSize(30);

	sf::Text copyright;
	copyright.setFont(xfont);
	copyright.setString(L"   Mateusz Bolmiński"); //\nAleksander Łaptaszyński\n   Bartosz Dąbrowski
	copyright.setCharacterSize(10);

	sf::Texture engineo_texture;
	engineo_texture.loadFromFile("Graphic/o.png");
	sf::Sprite engineo_sprite;
	engineo_sprite.setTexture(engineo_texture);

	engineo_sprite.setScale(3.0f, 3.0f);

	sf::Text engine;
	engine.setFont(xfont);
	engine.setString("presents");
	engine.setCharacterSize(70);

	sf::Text semicolon;
	semicolon.setFont(mfont);
	semicolon.setString(":");
	semicolon.setCharacterSize(20);

	sf::Text easy;
	easy.setFont(mfont);
	easy.setString("easy");
	easy.setCharacterSize(50);

	sf::Text normal;
	normal.setFont(mfont);
	normal.setString("normal");
	normal.setCharacterSize(50);

	sf::Text hard;
	hard.setFont(mfont);
	hard.setString("hard");
	hard.setCharacterSize(50);


	sf::Text title;
	title.setFont(mfont);
	title.setString("Santiago");
	title.setCharacterSize(60);

	sf::Text title2;
	title2.setFont(xfont);
	title2.setString("Integral");
	title2.setCharacterSize(60);
	
	sf::Text eco;
	eco.setFont(mfont);
	eco.setString("economic");
	eco.setCharacterSize(20);

	sf::Text bus;
	bus.setFont(mfont);
	bus.setString("bussines");
	bus.setCharacterSize(20);

	sf::Text firstc;
	firstc.setFont(mfont);
	firstc.setString("first");
	firstc.setCharacterSize(20);

	sf::Text play;
	play.setFont(mfont);
	play.setString("Play");
	play.setCharacterSize(40);

	sf::Text soundtrack;
	soundtrack.setFont(mfont);
	soundtrack.setString("soundtrack");
	soundtrack.setCharacterSize(40);

	sf::Text reset_progress;
	reset_progress.setFont(mfont);
	reset_progress.setString("reset progress");
	reset_progress.setCharacterSize(40);

	sf::Text credits;
	credits.setFont(mfont);
	credits.setString("credits");
	credits.setCharacterSize(40);

	sf::Text graphics;
	graphics.setFont(mfont);
	graphics.setString("graphics");
	graphics.setCharacterSize(40);

	sf::Text volume;
	volume.setFont(mfont);
	volume.setString("volume");
	volume.setCharacterSize(40);

	sf::Text very_low;
	very_low.setFont(mfont);
	very_low.setString("very low");
	very_low.setCharacterSize(30);

	sf::Text medium;
	medium.setFont(mfont);
	medium.setString("medium");
	medium.setCharacterSize(30);

	sf::Text ultra;
	ultra.setFont(mfont);
	ultra.setString("ultra");
	ultra.setCharacterSize(30);

	sf::Text none;
	none.setFont(mfont);
	none.setString("0");
	none.setCharacterSize(30);

	sf::Text t50t;
	t50t.setFont(mfont);
	t50t.setString("50");
	t50t.setCharacterSize(30);

	sf::Text t100t;
	t100t.setFont(mfont);
	t100t.setString("100");
	t100t.setCharacterSize(30);

	sf::Text settings;
	settings.setFont(mfont);
	settings.setString("settings");
	settings.setCharacterSize(40);

	sf::Text soundtrack1;
	soundtrack1.setFont(mfont);
	soundtrack1.setString("Epitaph - King Crimson");
	soundtrack1.setCharacterSize(40);

	sf::Text soundtrack2;
	soundtrack2.setFont(mfont);
	soundtrack2.setString("Nights in White Satin - Moody Blues");
	soundtrack2.setCharacterSize(40);

	sf::Text soundtrack3;
	soundtrack3.setFont(mfont);
	soundtrack3.setString("alternate theme");
	soundtrack3.setCharacterSize(40);

	sf::Text exit1;
	exit1.setFont(mfont);
	exit1.setString("back");
	exit1.setCharacterSize(40);

	sf::Text exit2;
	exit2.setFont(mfont);
	exit2.setString("back");
	exit2.setCharacterSize(40);

	sf::Text exit;
	exit.setFont(mfont);
	exit.setString("exit");
	exit.setCharacterSize(40);

	
	sf::Text good_text;
	good_text.setFont(mfont);
	good_text.setString("you're getting closer to the criminal");
	good_text.setCharacterSize(40);

	sf::Text victory_text;
	victory_text.setFont(mfont);
	victory_text.setString("Congratulations!\n\nYou have cought the criminal!\n\nYou were rewarded with some cash");
	victory_text.setCharacterSize(40);

	sf::Text lose_text;
	lose_text.setFont(mfont);
	lose_text.setString("What have you done!\n\nThe warrant expired and the criminal got away");
	lose_text.setCharacterSize(40);

	sf::Text bad_text;
	bad_text.setFont(mfont);
	bad_text.setString("the criminal is getting away from you");
	bad_text.setCharacterSize(40);

	sf::Text clue_place1;
	clue_place1.setFont(mfont);
	clue_place1.setString("restauracja");
	clue_place1.setCharacterSize(40);

	sf::Text clue_place2;
	clue_place2.setFont(mfont);
	clue_place2.setString("lotnisko");
	clue_place2.setCharacterSize(40);

	sf::Text clue_place3;
	clue_place3.setFont(mfont);
	clue_place3.setString("");
	clue_place3.setCharacterSize(40);

	sf::Text shifttext;
	shifttext.setFont(mfont);
	shifttext.setString("click anywhere to continue");
	shifttext.setCharacterSize(30);

	sf::Text brieftext2;
	brieftext2.setFont(mfont);
	brieftext2.setString("yesterday the declaration of independence was stolen\n\nyou have to find the criminal responsible for this\n\nremember that you have a limited amount of time\n\nbefore the arrest warrant expires\n\nGood Luck! ");
	brieftext2.setCharacterSize(30);

	sf::Text brieftext1;
	brieftext1.setFont(mfont);
	brieftext1.setString("yesterday there was a robbery at the bank\n\nyou have to find the criminal responsible for this\n\nremember that you have a limited amount of time\n\nbefore the arrest warrant expires\n\nGood Luck! ");
	brieftext1.setCharacterSize(30);

	sf::Text brieftext3;
	brieftext3.setFont(mfont);
	brieftext3.setString("yesterday there was an attempt to assassinate the president\n\nyou have to find the criminal responsible for this\n\nremember that you have a limited amount of time\n\nbefore the arrest warrant expires\n\nGood Luck! ");
	brieftext3.setCharacterSize(30);
	//graphics
	sf::Texture background_texture;
	background_texture.loadFromFile("Graphic/backg.png");


	sf::Sprite background_sprite;
	background_sprite.setTexture(background_texture);

	background_sprite.setScale(3.0f, 3.0f);


	sf::Texture cantafford_texture;
	cantafford_texture.loadFromFile("Graphic/cant.png");

	sf::Sprite cantafford_sprite;
	cantafford_sprite.setTexture(cantafford_texture);

	cantafford_sprite.setScale(3.0f, 3.0f);

	sf::Texture answer_box_texture;
	answer_box_texture.loadFromFile("Graphic/gui10.png");


	sf::Sprite answer_box_sprite;
	answer_box_sprite.setTexture(answer_box_texture);

	answer_box_sprite.setScale(5.0f, 5.0f);

	sf::Sprite answer_box2_sprite;
	answer_box2_sprite.setTexture(answer_box_texture);

	answer_box2_sprite.setScale(5.0f, 5.0f);

	sf::Sprite answer_box3_sprite;
	answer_box3_sprite.setTexture(answer_box_texture);

	answer_box3_sprite.setScale(5.0f, 5.0f);



	sf::Texture level1_icon_texture;
	level1_icon_texture.loadFromFile("Graphic/level1.png");

	sf::Sprite level1_icon;
	level1_icon.setTexture(level1_icon_texture);

	level1_icon.setScale(5.0f, 5.0f);


	sf::Texture level2_icon_texture;
	level2_icon_texture.loadFromFile("Graphic/level2.png");

	sf::Sprite level2_icon;
	level2_icon.setTexture(level2_icon_texture);

	level2_icon.setScale(5.0f, 5.0f);


	sf::Texture level3_icon_texture;
	level3_icon_texture.loadFromFile("Graphic/level3.png");

	sf::Sprite level3_icon;
	level3_icon.setTexture(level3_icon_texture);

	level3_icon.setScale(5.0f, 5.0f);





	sf::Texture class_texture;
	class_texture.loadFromFile("Graphic/box.png");

	sf::Texture class_fill_texture;
	class_fill_texture.loadFromFile("Graphic/box_fill.png");

	sf::Sprite ekonomic_sprite;
	ekonomic_sprite.setTexture(class_texture);

	ekonomic_sprite.setScale(6.0f, 6.0f);

	sf::Sprite business_sprite;
	business_sprite.setTexture(class_texture);

	business_sprite.setScale(6.0f, 6.0f);

	sf::Sprite first_sprite;
	first_sprite.setTexture(class_texture);

	first_sprite.setScale(6.0f, 6.0f);

	sf::Texture tip_texture;
	tip_texture.loadFromFile("Graphic/tip.png");

	sf::Sprite tip_sprite;
	tip_sprite.setTexture(tip_texture);

	tip_sprite.setScale(2.5f, 1.8f);






	sf::Texture text_box_texture;
	text_box_texture.loadFromFile("Graphic/button.png");

	sf::Sprite text_box1_sprite;
	text_box1_sprite.setTexture(text_box_texture);

	text_box1_sprite.setScale(2.5f, 1.8f);

	sf::Sprite text_box2_sprite;
	text_box2_sprite.setTexture(text_box_texture);

	text_box2_sprite.setScale(2.5f, 1.8f);

	sf::Sprite text_box3_sprite;
	text_box3_sprite.setTexture(text_box_texture);

	text_box3_sprite.setScale(2.5f, 1.8f);



	sf::Texture pocket_texture;
	pocket_texture.loadFromFile("Graphic/pocket_gui.png");

	sf::Texture mission_texture;
	mission_texture.loadFromFile("Graphic/pocket_gui_no.png");

	sf::Sprite pocket_sprite;
	pocket_sprite.setTexture(pocket_texture);

	pocket_sprite.setScale(3.3f, 3.3f);

	sf::Texture gui1_texture;
	gui1_texture.loadFromFile("Graphic/gui1.png");

	sf::Sprite gui1_sprite;
	gui1_sprite.setTexture(gui1_texture);

	gui1_sprite.setScale(6.0f, 6.0f);

	sf::Texture gui2_texture;
	gui2_texture.loadFromFile("Graphic/gui2.png");

	sf::Sprite gui2_sprite;
	gui2_sprite.setTexture(gui2_texture);

	gui2_sprite.setScale(6.0f, 6.0f);


	sf::Texture arrow_texture;
	arrow_texture.loadFromFile("Graphic/arrow.png");

	sf::Sprite arrow_sprite;
	arrow_sprite.setTexture(arrow_texture);

	arrow_sprite.setScale(4.0f, 4.0f);
	//hungary
	sf::Text place1_question1;
	place1_question1.setFont(xfont);
	place1_question1.setString("The criminal was heading towards\nthe country,in which there are\nthe most thermal springs in the world");
	place1_question1.setCharacterSize(55);

	sf::Text place1_question2;
	place1_question2.setFont(xfont);
	place1_question2.setString("He flew to the country,where people\nnever knock glasses when drinking\nbecause they find it offensive");
	place1_question2.setCharacterSize(55);

	sf::Text place1_question3;
	place1_question3.setFont(xfont);
	place1_question3.setString("He went to the country where the famous\n composer Franc Liszt comes from ");
	place1_question3.setCharacterSize(55);


	sf::Text place1_question4;
	place1_question4.setFont(xfont);
	place1_question4.setString("The robber was going to escape to a\ncountry where in Europe (not counting\nFinnish and Estonian)one speaks\na language from the group\nof Ugrian languages.");
	place1_question4.setCharacterSize(55);

	sf::Text place1_question5;
	place1_question5.setFont(xfont);
	place1_question5.setString("He flew to the country where the\ncreator of the Rubik's cube was born.");
	place1_question5.setCharacterSize(55);

	sf::Text place1_question6;
	place1_question6.setFont(xfont);
	place1_question6.setString("He flew to a country where pepper\nis added to every dish,\n and the most popular dish made\nfrom it is Gulyásleves.");
	place1_question6.setCharacterSize(55);


	sf::Text place1_question7;
	place1_question7.setFont(xfont);
	place1_question7.setString("The criminal was about to flee to a\ncountry that has a dispute with Romania\nabout Transylvania.");
	place1_question7.setCharacterSize(55);

	sf::Text place1_question8;
	place1_question8.setFont(xfont);
	place1_question8.setString("He flew to a country that was brought to\nEurope by a king from the Arpads dynasty.");
	place1_question8.setCharacterSize(55);

	sf::Text place1_question9;
	place1_question9.setFont(xfont);
	place1_question9.setString("He went to a country whose capital is\ntwo interconnected cities, between which\nthe Danube flows.");
	place1_question9.setCharacterSize(55);



	sf::Text place1_answer1;
	place1_answer1.setFont(xfont);
	place1_answer1.setString("Did you know, that this country has the\nmostthermal springs in the world");
	place1_answer1.setCharacterSize(55);

	sf::Text place1_answer2;
	place1_answer2.setFont(xfont);
	place1_answer2.setString("Did you know, that in this country people\nfind knocking glasses offensive");
	place1_answer2.setCharacterSize(55);

	sf::Text place1_answer3;
	place1_answer3.setFont(xfont);
	place1_answer3.setString("Did you know, that famous composer\nFranc Liszt comes from here");
	place1_answer3.setCharacterSize(55);

	sf::Text place1_answer4;
	place1_answer4.setFont(xfont);
	place1_answer4.setString("Did you know, that this is the only\ncountry where citizens speak the\nlanguage from the group of\nUgrian languages.");
	place1_answer4.setCharacterSize(55);

	sf::Text place1_answer5;
	place1_answer5.setFont(xfont);
	place1_answer5.setString("Did you know, that the creator of rubiks\nqube comes from here");
	place1_answer5.setCharacterSize(55);

	sf::Text place1_answer6;
	place1_answer6.setFont(xfont);
	place1_answer6.setString("Did you know, that people here add\npepper to every meal");
	place1_answer6.setCharacterSize(55);


	sf::Text hungary;
	hungary.setFont(mfont);
	hungary.setString("Hungary");
	hungary.setCharacterSize(40);


	sf::Texture hungary_texture;
	hungary_texture.loadFromFile("Graphic/hungary.png");



	sf::Sprite hungary_sprite;
	hungary_sprite.setTexture(hungary_texture);

	hungary_sprite.setScale(2.21f, 1.68f);
	//norwey
	sf::Text place2_question1;
	place2_question1.setFont(xfont);
	place2_question1.setString("He went to a country with a surface area\nof 3403 thousand square kilometers\nand 5,200 million inhabitants");
	place2_question1.setCharacterSize(55);

	sf::Text place2_question2;
	place2_question2.setFont(xfont);
	place2_question2.setString("he fled to the country which is the\nsecond least populous European country\nafter Iceland");
	place2_question2.setCharacterSize(55);

	sf::Text place2_question3;
	place2_question3.setFont(xfont);
	place2_question3.setString("the criminal is in the country where,\nProtestantism is the most popular\nreligion (76%)");
	place2_question3.setCharacterSize(55);

	sf::Text place2_question4;
	place2_question4.setFont(xfont);
	place2_question4.setString("Apparently, the criminal went to a\ncountry that borders with Sweden,\nFinland and Russia");
	place2_question4.setCharacterSize(55);

	sf::Text place2_question5;
	place2_question5.setFont(xfont);
	place2_question5.setString("He went to the country which is the\nlongest Scandinavian state");
	place2_question5.setCharacterSize(55);

	sf::Text place2_question6;
	place2_question6.setFont(xfont);
	place2_question6.setString("He escaped to a country where the\nsecond largest national minority are\nPoles");
	place2_question6.setCharacterSize(55);

	sf::Text place2_question7;
	place2_question7.setFont(xfont);
	place2_question7.setString("he fled to a country where 98% of its\nenergy is obtained from hydroelectric\npower");
	place2_question7.setCharacterSize(55);

	sf::Text place2_question8;
	place2_question8.setFont(xfont);
	place2_question8.setString("He went to a country whose flag has\nthree colors and a cross in the middle\nwhite, red and navy blue");
	place2_question8.setCharacterSize(55);

	sf::Text place2_question9;
	place2_question9.setFont(xfont);
	place2_question9.setString("He flew to the country whose capital\nis Oslo");
	place2_question9.setCharacterSize(55);



	sf::Text place2_answer1;
	place2_answer1.setFont(xfont);
	place2_answer1.setString("Did you know, that this country has an\narea of 3404 thousand square\nkilometers and 5,200 million\ninhabitants");
	place2_answer1.setCharacterSize(55);

	sf::Text place2_answer2;
	place2_answer2.setFont(xfont);
	place2_answer2.setString("Did you know, that this country is the\nsecond most populated European country");
	place2_answer2.setCharacterSize(55);

	sf::Text place2_answer3;
	place2_answer3.setFont(xfont);
	place2_answer3.setString("Did you know, that here Protestantism is\nthe most popular religion");
	place2_answer3.setCharacterSize(55);

	sf::Text place2_answer4;
	place2_answer4.setFont(xfont);
	place2_answer4.setString("Did you know, that norway borders with\nSweden, Finland and Russia");
	place2_answer4.setCharacterSize(55);

	sf::Text place2_answer5;
	place2_answer5.setFont(xfont);
	place2_answer5.setString("Did you know, that norway is the longest\nScandinavian state");
	place2_answer5.setCharacterSize(55);

	sf::Text place2_answer6;
	place2_answer6.setFont(xfont);
	place2_answer6.setString("Did you know, that the second largest\nnational minority are Poles");
	place2_answer6.setCharacterSize(55);



	sf::Text norway;
	norway.setFont(mfont);
	norway.setString("Norway");
	norway.setCharacterSize(40);

	sf::Texture norway_texture;
	norway_texture.loadFromFile("Graphic/norway.png");

	sf::Sprite norway_sprite;
	norway_sprite.setTexture(norway_texture);

	norway_sprite.setScale(2.21f, 1.68f);

	sf::Text place2_question10;
	place2_question10.setFont(xfont);
	place2_question10.setString("Udał się do kraju, które graniczy z morzem północnym i Norweskim");
	place2_question10.setCharacterSize(55);
	//denmark
	sf::Text place3_question1;
	place3_question1.setFont(xfont);
	place3_question1.setString("He flew to a country that is divided into\nfive regions");
	place3_question1.setCharacterSize(55);

	sf::Text place3_question2;
	place3_question2.setFont(xfont);
	place3_question2.setString("He flew to the country located where there\nare almost no mountains");
	place3_question2.setCharacterSize(55);

	sf::Text place3_question3;
	place3_question3.setFont(xfont);
	place3_question3.setString("He fled to the country where people\nspeak Danish");
	place3_question3.setCharacterSize(55);

	sf::Text place3_question4;
	place3_question4.setFont(xfont);
	place3_question4.setString("Apparently, the criminal went to the\ncountry in which is the best index\nof freedom in the entire European Union");
	place3_question4.setCharacterSize(55);

	sf::Text place3_question5;
	place3_question5.setFont(xfont);
	place3_question5.setString("He went to a country where Bornholm\nis one of the islands");
	place3_question5.setCharacterSize(55);

	sf::Text place3_question6;
	place3_question6.setFont(xfont);
	place3_question6.setString("He escaped to a country where there\nare straits called the small and the big Belt");
	place3_question6.setCharacterSize(55);

	sf::Text place3_question7;
	place3_question7.setFont(xfont);
	place3_question7.setString("he fled to a country that has two\ndependent territories - Faroe Islands\nand Greenland");
	place3_question7.setCharacterSize(55);

	sf::Text place3_question8;
	place3_question8.setFont(xfont);
	place3_question8.setString("He went to a country that borders\nGermany and Sweden");
	place3_question8.setCharacterSize(55);

	sf::Text place3_question9;
	place3_question9.setFont(xfont);
	place3_question9.setString("He flew to the country whose capital\nis Copenhagen");
	place3_question9.setCharacterSize(55);



	sf::Text place3_answer1;
	place3_answer1.setFont(xfont);
	place3_answer1.setString("Did you know, that Denmark is divided\ninto five regions");
	place3_answer1.setCharacterSize(55);

	sf::Text place3_answer2;
	place3_answer2.setFont(xfont);
	place3_answer2.setString("Did you know, that this country joined\nthe European Union in 1973");
	place3_answer2.setCharacterSize(55);

	sf::Text place3_answer3;
	place3_answer3.setFont(xfont);
	place3_answer3.setString("Did you know, that the most dominant\nreligion here is Lutheranism");
	place3_answer3.setCharacterSize(55);

	sf::Text place3_answer4;
	place3_answer4.setFont(xfont);
	place3_answer4.setString("Did you know, that Denmark has the best\nindex of freedom in European Union");
	place3_answer4.setCharacterSize(55);

	sf::Text place3_answer5;
	place3_answer5.setFont(xfont);
	place3_answer5.setString("Did you know, that Bornholm is one of\nthis country islands");
	place3_answer5.setCharacterSize(55);

	sf::Text place3_answer6;
	place3_answer6.setFont(xfont);
	place3_answer6.setString("Did you know, that the small and the\nbig Belt are located in here");
	place3_answer6.setCharacterSize(55);






	sf::Text denmark;
	denmark.setFont(mfont);
	denmark.setString("Denmark");
	denmark.setCharacterSize(40);

	sf::Texture denmark_texture;
	denmark_texture.loadFromFile("Graphic/denmark.png");

	sf::Sprite denmark_sprite;
	denmark_sprite.setTexture(denmark_texture);

	denmark_sprite.setScale(2.21f, 1.68f);
	//sweden
	sf::Text place4_question1;
	place4_question1.setFont(xfont);
	place4_question1.setString("He flew to the country where Minecraft\nwas created");
	place4_question1.setCharacterSize(55);

	sf::Text place4_question2;
	place4_question2.setFont(xfont);
	place4_question2.setString("He went to a country whose neighbor is a\ncountry bordering the North Sea and\nNorwegian Sea");
	place4_question2.setCharacterSize(55);

	sf::Text place4_question3;
	place4_question3.setFont(xfont);
	place4_question3.setString("He went to the country that has the\nlargest population of all Scandinavian\ncountries");
	place4_question3.setCharacterSize(55);

	sf::Text place4_question4;
	place4_question4.setFont(xfont);
	place4_question4.setString("Apparently, the criminal went to a\ncountry whose largest lake is Vanern");
	place4_question4.setCharacterSize(55);

	sf::Text place4_question5;
	place4_question5.setFont(xfont);
	place4_question5.setString("He escaped to the country that joined the European Union in 1995");
	place4_question5.setCharacterSize(55);

	sf::Text place4_question6;
	place4_question6.setFont(xfont);
	place4_question6.setString("it borders with Norwey and Denmark");
	place4_question6.setCharacterSize(55);

	sf::Text place4_question7;
	place4_question7.setFont(xfont);
	place4_question7.setString("he fled to a country whose flag consists\nof two colors - yellow and blue");
	place4_question7.setCharacterSize(55);

	sf::Text place4_question8;
	place4_question8.setFont(xfont);
	place4_question8.setString("He went to a country where it is believed\nthat the safest cars in the world are\nproduced");
	place4_question8.setCharacterSize(55);

	sf::Text place4_question9;
	place4_question9.setFont(xfont);
	place4_question9.setString("He went to a country whose capital is\nStockholm");
	place4_question9.setCharacterSize(55);



	sf::Text place4_answer1;
	place4_answer1.setFont(xfont);
	place4_answer1.setString("Did you know, that the famous director\nIngmar Bergman comes from here");
	place4_answer1.setCharacterSize(55);

	sf::Text place4_answer2;
	place4_answer2.setFont(xfont);
	place4_answer2.setString("Did you know, that Sweden is a neighbor\nwith a country bordering the\nNorth Sea and Norwegian Sea");
	place4_answer2.setCharacterSize(55);

	sf::Text place4_answer3;
	place4_answer3.setFont(xfont);
	place4_answer3.setString("Did you know, that Sweden is the most\npopulated Scandinavian country");
	place4_answer3.setCharacterSize(55);

	sf::Text place4_answer4;
	place4_answer4.setFont(xfont);
	place4_answer4.setString("Did you know, that the largest lake\nin here is called Vanern");
	place4_answer4.setCharacterSize(55);

	sf::Text place4_answer5;
	place4_answer5.setFont(xfont);
	place4_answer5.setString("Did you know, that Sweden joined the\nEuropean Union in 1995");
	place4_answer5.setCharacterSize(55);

	sf::Text place4_answer6;
	place4_answer6.setFont(xfont);
	place4_answer6.setString("Did you know, that Sweden is the largest\nScandinavian country");
	place4_answer6.setCharacterSize(55);





	sf::Text sweden;
	sweden.setFont(mfont);
	sweden.setString("Sweden");
	sweden.setCharacterSize(40);

	sf::Texture sweden_texture;
	sweden_texture.loadFromFile("Graphic/sweden.png");

	sf::Sprite sweden_sprite;
	sweden_sprite.setTexture(sweden_texture);

	sweden_sprite.setScale(2.21f, 1.68f);
	//merica
	sf::Text place5_question1;
	place5_question1.setFont(xfont);
	place5_question1.setString("I heard the criminal was heading towards\nthe country where there is no official\nlanguage");
	place5_question1.setCharacterSize(55);

	sf::Text place5_question2;
	place5_question2.setFont(xfont);
	place5_question2.setString("Apparently, the criminal went to a\ncountry where the lowest point is\nlocated in the Death Valley (86 m p.p.m)");
	place5_question2.setCharacterSize(55);

	sf::Text place5_question3;
	place5_question3.setFont(xfont);
	place5_question3.setString("Apparently, the criminal went to a\ncountry where the hottest temperature\nregistered was 56 degrees Celsius ");
	place5_question3.setCharacterSize(55);

	sf::Text place5_question4;
	place5_question4.setFont(xfont);
	place5_question4.setString("The criminal went to the country where\nthe highest point is located\non McKinley (6194 m n.p.m)");
	place5_question4.setCharacterSize(55);

	sf::Text place5_question5;
	place5_question5.setFont(xfont);
	place5_question5.setString("He flew to the country made out of\n50 states");
	place5_question5.setCharacterSize(55);

	sf::Text place5_question6;
	place5_question6.setFont(xfont);
	place5_question6.setString("He went to the country where the civil\nwar took place");
	place5_question6.setCharacterSize(55);

	sf::Text place5_question7;
	place5_question7.setFont(xfont);
	place5_question7.setString("He flew to the country whose capital is\nNew York");
	place5_question7.setCharacterSize(55);

	sf::Text place5_question8;
	place5_question8.setFont(xfont);
	place5_question8.setString("The country he was heading had 50 stars\non its flag");
	place5_question8.setCharacterSize(55);

	sf::Text place5_question9;
	place5_question9.setFont(xfont);
	place5_question9.setString("He went to the country which shares its\nborder with canada");
	place5_question9.setCharacterSize(55);



	sf::Text place5_answer1;
	place5_answer1.setFont(xfont);
	place5_answer1.setString("Did you know, that there is no official\nlanguage in this country");
	place5_answer1.setCharacterSize(55);

	sf::Text place5_answer2;
	place5_answer2.setFont(xfont);
	place5_answer2.setString("Did you know, that the lowest point in\nthe USA is below the sea level");
	place5_answer2.setCharacterSize(55);

	sf::Text place5_answer3;
	place5_answer3.setFont(xfont);
	place5_answer3.setString("Did you know, that the highest point in\nhere is located on McKinley");
	place5_answer3.setCharacterSize(55);

	sf::Text place5_answer4;
	place5_answer4.setFont(xfont);
	place5_answer4.setString("Did you know, that USA is made out of\n50 states ");
	place5_answer4.setCharacterSize(55);

	sf::Text place5_answer5;
	place5_answer5.setFont(xfont);
	place5_answer5.setString("Did you know, that the civil war\ntook place here");
	place5_answer5.setCharacterSize(55);

	sf::Text place5_answer6;
	place5_answer6.setFont(xfont);
	place5_answer6.setString("Did you know, that the hottest\ntemperature registered in USA\nwas 56 degrees Celsius");
	place5_answer6.setCharacterSize(55);




	sf::Text usa;
	usa.setFont(mfont);
	usa.setString("USA");
	usa.setCharacterSize(40);

	sf::Texture america_texture;
	america_texture.loadFromFile("Graphic/usa.png");

	sf::Sprite usa_sprite;
	usa_sprite.setTexture(america_texture);

	usa_sprite.setScale(2.21f, 1.68f);
	//santiago
	sf::Text san;
	san.setFont(mfont);
	san.setString("Santiago");
	san.setCharacterSize(40);

	sf::Texture san_texture;
	san_texture.loadFromFile("Graphic/san.png");

	sf::Sprite san_sprite;
	san_sprite.setTexture(san_texture);

	san_sprite.setScale(2.21f, 1.68f);
	//canada
	sf::Text place6_question1;
	place6_question1.setFont(xfont);
	place6_question1.setString("He flew to the country which total area\nmeasures a total of 9.984 million\nsquare kilometers");
	place6_question1.setCharacterSize(55);

	sf::Text place6_question2;
	place6_question2.setFont(xfont);
	place6_question2.setString("Apparently, the criminal went to the\ncountry where the oldest rocks on earth\nwere found");
	place6_question2.setCharacterSize(55);

	sf::Text place6_question3;
	place6_question3.setFont(xfont);
	place6_question3.setString("I heard the criminal was heading towards\nthe country which has more lakes than\nthe rest of the world combined");
	place6_question3.setCharacterSize(55);

	sf::Text place6_question4;
	place6_question4.setFont(xfont);
	place6_question4.setString("The criminal was heading towards the\ncountry which has 90% of its land\nuninhabited");
	place6_question4.setCharacterSize(55);

	sf::Text place6_question5;
	place6_question5.setFont(xfont);
	place6_question5.setString("He flew to the country which had the\nlowest temperature of -63 degrees\ncelsius");
	place6_question5.setCharacterSize(55);

	sf::Text place6_question6;
	place6_question6.setFont(xfont);
	place6_question6.setString("I heard he was going to the country which\nhas the longest coastline in the world");
	place6_question6.setCharacterSize(55);

	sf::Text place6_question7;
	place6_question7.setFont(xfont);
	place6_question7.setString("The country that he was going is known\nas one of the friendliest countries\nin the world");
	place6_question7.setCharacterSize(55);

	sf::Text place6_question8;
	place6_question8.setFont(xfont);
	place6_question8.setString("The biggest city located in the country\nthat the criminal fled is Toronto");
	place6_question8.setCharacterSize(55);

	sf::Text place6_question9;
	place6_question9.setFont(xfont);
	place6_question9.setString("He flew to the country where the capital\ncity is called Ottawa");
	place6_question9.setCharacterSize(55);




	sf::Text place6_answer1;
	place6_answer1.setFont(xfont);
	place6_answer1.setString("Did you know, that Canada has a total of\n9.984 million square kilometers");
	place6_answer1.setCharacterSize(55);

	sf::Text place6_answer2;
	place6_answer2.setFont(xfont);
	place6_answer2.setString("Did you know, that in Canada there are\nthe oldest rocks on earth");
	place6_answer2.setCharacterSize(55);

	sf::Text place6_answer3;
	place6_answer3.setFont(xfont);
	place6_answer3.setString("Did you know, that this country has more\nlakes than the rest of the world");
	place6_answer3.setCharacterSize(55);

	sf::Text place6_answer4;
	place6_answer4.setFont(xfont);
	place6_answer4.setString("Did you know, that in Canada 90% of land\nis uninhabited");
	place6_answer4.setCharacterSize(55);

	sf::Text place6_answer5;
	place6_answer5.setFont(xfont);
	place6_answer5.setString("Did you know, that the lowest\ntemperature registered in\nhere was -63 degrees celsius");
	place6_answer5.setCharacterSize(55);

	sf::Text place6_answer6;
	place6_answer6.setFont(xfont);
	place6_answer6.setString("Did you know, that this country has the\nlongest coastline in the world");
	place6_answer6.setCharacterSize(55);




	sf::Text canada;
	canada.setFont(mfont);
	canada.setString("Canada");
	canada.setCharacterSize(40);

	sf::Texture canada_texture;
	canada_texture.loadFromFile("Graphic/cad.png");

	sf::Sprite canada_sprite;
	canada_sprite.setTexture(canada_texture);

	canada_sprite.setScale(2.21f, 1.68f);
	//russia
	sf::Text place7_question1;
	place7_question1.setFont(xfont);
	place7_question1.setString("he fled to the country which has the\nbiggest swamp in the world");
	place7_question1.setCharacterSize(55);

	sf::Text place7_question2;
	place7_question2.setFont(xfont);
	place7_question2.setString("He was heading toward the country where\nthe lowest registered temperature was \n- 77.8 degrees");
	place7_question2.setCharacterSize(55);

	sf::Text place7_question3;
	place7_question3.setFont(xfont);
	place7_question3.setString("He went to the country which was\nfirst in space");
	place7_question3.setCharacterSize(55);

	sf::Text place7_question4;
	place7_question4.setFont(xfont);
	place7_question4.setString("He flew to the country where there are\n12 active volcanoes");
	place7_question4.setCharacterSize(55);

	sf::Text place7_question5;
	place7_question5.setFont(xfont);
	place7_question5.setString("Apparently, the criminal went to a\ncountry where there is a big area called Siberia");
	place7_question5.setCharacterSize(55);

	sf::Text place7_question6;
	place7_question6.setFont(xfont);
	place7_question6.setString("He was heading toward the biggest\ncountry in the world");
	place7_question6.setCharacterSize(55);

	sf::Text place7_question7;
	place7_question7.setFont(xfont);
	place7_question7.setString("The country he was heading wasn't\nconsidering beer as an alcoholic\nbeverage until 2013");
	place7_question7.setCharacterSize(55);

	sf::Text place7_question8;
	place7_question8.setFont(xfont);
	place7_question8.setString("He flew to the country where the capital\ncity is called Moscow");
	place7_question8.setCharacterSize(55);

	sf::Text place7_question9;
	place7_question9.setFont(xfont);
	place7_question9.setString("He flew to the country where the\nCyrillic alphabet is used");
	place7_question9.setCharacterSize(55);



	sf::Text place7_answer1;
	place7_answer1.setFont(xfont);
	place7_answer1.setString("Did you know, that there are 12 active\nvolcanoes here");
	place7_answer1.setCharacterSize(55);

	sf::Text place7_answer2;
	place7_answer2.setFont(xfont);
	place7_answer2.setString("Did you know, that Russia is the biggest\ncountry in the World");
	place7_answer2.setCharacterSize(55);

	sf::Text place7_answer3;
	place7_answer3.setFont(xfont);
	place7_answer3.setString("Did you know, that the first man in space\nwas a Russian");
	place7_answer3.setCharacterSize(55);

	sf::Text place7_answer4;
	place7_answer4.setFont(xfont);
	place7_answer4.setString("Did you know, that Siberia is a part of\nRussia");
	place7_answer4.setCharacterSize(55);

	sf::Text place7_answer5;
	place7_answer5.setFont(xfont);
	place7_answer5.setString("Did you know, that the lowest registered\nwas -77.8 degrees");
	place7_answer5.setCharacterSize(55);

	sf::Text place7_answer6;
	place7_answer6.setFont(xfont);
	place7_answer6.setString("Did you know, that Russians didn't\nconsider beer an alcoholic\nbeverage until 2013");
	place7_answer6.setCharacterSize(55);




	sf::Text russia;
	russia.setFont(mfont);
	russia.setString("Russia");
	russia.setCharacterSize(40);

	sf::Texture russia_texture;
	russia_texture.loadFromFile("Graphic/rus.png");

	sf::Sprite russia_sprite;
	russia_sprite.setTexture(russia_texture);

	russia_sprite.setScale(2.21f, 1.68f);
	//australia
	sf::Text place8_question1;
	place8_question1.setFont(xfont);
	place8_question1.setString("Aparently he fled to the country where\nsome of the world's deadliest animals\nlive");
	place8_question1.setCharacterSize(55);

	sf::Text place8_question2;
	place8_question2.setFont(xfont);
	place8_question2.setString("The country he flew has over 10,000\nbeaches");
	place8_question2.setCharacterSize(55);

	sf::Text place8_question3;
	place8_question3.setFont(xfont);
	place8_question3.setString("he flew to the 6th biggest country\nin the world");
	place8_question3.setCharacterSize(55);

	sf::Text place8_question4;
	place8_question4.setFont(xfont);
	place8_question4.setString("He flew to the country where there\nare more kangaroos than people");
	place8_question4.setCharacterSize(55);

	sf::Text place8_question5;
	place8_question5.setFont(xfont);
	place8_question5.setString("He was heading towards the country which\nhighest mountain is Mount Kosciuszko");
	place8_question5.setCharacterSize(55);

	sf::Text place8_question6;
	place8_question6.setFont(xfont);
	place8_question6.setString("I saw that he was changing his money\ninto AUD's");
	place8_question6.setCharacterSize(55);

	sf::Text place8_question7;
	place8_question7.setFont(xfont);
	place8_question7.setString("He went to the country where there is\na city called Sydney");
	place8_question7.setCharacterSize(55);

	sf::Text place8_question8;
	place8_question8.setFont(xfont);
	place8_question8.setString("He flew to the country where the\nnational animal is the kangaroo");
	place8_question8.setCharacterSize(55);

	sf::Text place8_question9;
	place8_question9.setFont(xfont);
	place8_question9.setString("The capital of the city he is in is called\nCanberra");
	place8_question9.setCharacterSize(55);




	sf::Text place8_answer1;
	place8_answer1.setFont(xfont);
	place8_answer1.setString("Did you know, that the most deadliest\nanimals live in Australia");
	place8_answer1.setCharacterSize(55);

	sf::Text place8_answer2;
	place8_answer2.setFont(xfont);
	place8_answer2.setString("Did you know, that Australia has over\n10,000 beaches");
	place8_answer2.setCharacterSize(55);

	sf::Text place8_answer3;
	place8_answer3.setFont(xfont);
	place8_answer3.setString("Did you know, that this is the 6th\nbiggest country in the world");
	place8_answer3.setCharacterSize(55);

	sf::Text place8_answer4;
	place8_answer4.setFont(xfont);
	place8_answer4.setString("Did you know, that in Australia there are\nmore kangaroos than people");
	place8_answer4.setCharacterSize(55);

	sf::Text place8_answer5;
	place8_answer5.setFont(xfont);
	place8_answer5.setString("Did you know, that in Australia people\npay with AUD (australian dollars)");
	place8_answer5.setCharacterSize(55);

	sf::Text place8_answer6;
	place8_answer6.setFont(xfont);
	place8_answer6.setString("Did you know, that the capital\nof Australia is Canberra, even\nthough Sydney is the biggest city");
	place8_answer6.setCharacterSize(55);




	sf::Text aus;
	aus.setFont(mfont);
	aus.setString("Australia");
	aus.setCharacterSize(40);

	sf::Texture aus_texture;
	aus_texture.loadFromFile("Graphic/aus.png");

	sf::Sprite aus_sprite;
	aus_sprite.setTexture(aus_texture);

	aus_sprite.setScale(2.21f, 1.68f);
	
	//poland
	sf::Text place9_question1;
	place9_question1.setFont(xfont);
	place9_question1.setString("Aparently he fled to the country where\nNicolas Copernicus was born");
	place9_question1.setCharacterSize(55);

	sf::Text place9_question2;
	place9_question2.setFont(xfont);
	place9_question2.setString("Marie Curie comes from the country he flew");
	place9_question2.setCharacterSize(55);

	sf::Text place9_question3;
	place9_question3.setFont(xfont);
	place9_question3.setString("The language spoken in this country\nis one of the most difficult");
	place9_question3.setCharacterSize(55);

	sf::Text place9_question4;
	place9_question4.setFont(xfont);
	place9_question4.setString("He flew to the country where one of the\nlast bisons on Earth exist");
	place9_question4.setCharacterSize(55);

	sf::Text place9_question5;
	place9_question5.setFont(xfont);
	place9_question5.setString("He was heading towards the country which\nhighest peak is called Rysy");
	place9_question5.setCharacterSize(55);

	sf::Text place9_question6;
	place9_question6.setFont(xfont);
	place9_question6.setString("I saw that he was changing his money\ninto PLN");
	place9_question6.setCharacterSize(55);

	sf::Text place9_question7;
	place9_question7.setFont(xfont);
	place9_question7.setString("He went to the country where the capital\ncity called Warsaw");
	place9_question7.setCharacterSize(55);

	sf::Text place9_question8;
	place9_question8.setFont(xfont);
	place9_question8.setString("He flew to the country where there is\nthe world's biggest castle");
	place9_question8.setCharacterSize(55);

	sf::Text place9_question9;
	place9_question9.setFont(xfont);
	place9_question9.setString("He was heading towards the country where\na marmaid is a popular symbol");
	place9_question9.setCharacterSize(55);




	sf::Text place9_answer1;
	place9_answer1.setFont(xfont);
	place9_answer1.setString("Did you know, that the Nicoloas Copernicus\nwas born here");
	place9_answer1.setCharacterSize(55);

	sf::Text place9_answer2;
	place9_answer2.setFont(xfont);
	place9_answer2.setString("Did you know, that Marie Curie came from\nPoland");
	place9_answer2.setCharacterSize(55);

	sf::Text place9_answer3;
	place9_answer3.setFont(xfont);
	place9_answer3.setString("Did you know, that one of the last bisons\non Earth are here");
	place9_answer3.setCharacterSize(55);

	sf::Text place9_answer4;
	place9_answer4.setFont(xfont);
	place9_answer4.setString("Did you know, that in Poland there is\n the biggest castle in the world");
	place9_answer4.setCharacterSize(55);

	sf::Text place9_answer5;
	place9_answer5.setFont(xfont);
	place9_answer5.setString("Did you know, that in Poland people\npay with PLN");
	place9_answer5.setCharacterSize(55);

	sf::Text place9_answer6;
	place9_answer6.setFont(xfont);
	place9_answer6.setString("Did you know, that the capital\nof Poland is Warsaw");
	place9_answer6.setCharacterSize(55);




	sf::Text pol;
	pol.setFont(mfont);
	pol.setString("Poland");
	pol.setCharacterSize(40);

	sf::Texture pol_texture;
	pol_texture.loadFromFile("Graphic/pol.png");

	sf::Sprite pol_sprite;
	pol_sprite.setTexture(pol_texture);

	pol_sprite.setScale(2.21f, 1.68f);



	

	sf::Clock tutorial_clock;

	sf::Text main_tutorial1;
	main_tutorial1.setFont(xfont);
	main_tutorial1.setString("Welcome to Santiago Integral, a game about\nlearning new stuff and catching criminals");
	main_tutorial1.setCharacterSize(55);

	sf::Text main_tutorial2;
	main_tutorial2.setFont(xfont);
	main_tutorial2.setString("before the action lets teach you the ropes");
	main_tutorial2.setCharacterSize(55);

	sf::Text main_tutorial3;
	main_tutorial3.setFont(xfont);
	main_tutorial3.setString("this is your base here you can take new quests");
	main_tutorial3.setCharacterSize(55);

	sf::Text main_tutorial4;
	main_tutorial4.setFont(xfont);
	main_tutorial4.setString("do so by clicking the 'letter' icon down below");
	main_tutorial4.setCharacterSize(55);

	sf::Text main_tutorial45;
	main_tutorial45.setFont(xfont);
	main_tutorial45.setString("now choose the difficulty\n(easy is recommended for your first try)");
	main_tutorial45.setCharacterSize(55);

	sf::Text main_tutorial5;
	main_tutorial5.setFont(xfont);
	main_tutorial5.setString("welcome to the world map");
	main_tutorial5.setCharacterSize(55);

	sf::Text main_tutorial6;
	main_tutorial6.setFont(xfont);
	main_tutorial6.setString("squares are locations that\nyou can visit");
	main_tutorial6.setCharacterSize(55);

	sf::Text main_tutorial75;
	main_tutorial75.setFont(xfont);
	main_tutorial75.setString("This is your base, here you can take new quests");
	main_tutorial75.setCharacterSize(55);

	sf::Text main_tutorial7;
	main_tutorial7.setFont(xfont);
	main_tutorial7.setString("the square filled with red\nis your current position");
	main_tutorial7.setCharacterSize(55);

	sf::Text main_tutorial8;
	main_tutorial8.setFont(xfont);
	main_tutorial8.setString("this the HUD (Heads Up Display)");
	main_tutorial8.setCharacterSize(55);

	sf::Text main_tutorial9;
	main_tutorial9.setFont(xfont);
	main_tutorial9.setString("this represents how much money you have");
	main_tutorial9.setCharacterSize(55);

	sf::Text main_tutorial10;
	main_tutorial10.setFont(xfont);
	main_tutorial10.setString("this tells you the current time in Santiago");
	main_tutorial10.setCharacterSize(55);

	sf::Text main_tutorial11;
	main_tutorial11.setFont(xfont);
	main_tutorial11.setString("this only appears during missions telling you how much\ntime you have before the arrest warrant expires");
	main_tutorial11.setCharacterSize(55);

	sf::Text main_tutorial12;
	main_tutorial12.setFont(xfont);
	main_tutorial12.setString("okay so lets start looking for the criminal");
	main_tutorial12.setCharacterSize(55);

	sf::Text main_tutorial13;
	main_tutorial13.setFont(xfont);
	main_tutorial13.setString("choose a random region, do it by clicking the square");
	main_tutorial13.setCharacterSize(55);

	sf::Text main_tutorial14;
	main_tutorial14.setFont(xfont);
	main_tutorial14.setString("here you have the region panel");
	main_tutorial14.setCharacterSize(55);

	sf::Text main_tutorial15;
	main_tutorial15.setFont(xfont);
	main_tutorial15.setString("depending on the teritory you clicked there are possible countries to choose");
	main_tutorial15.setCharacterSize(55);

	sf::Text main_tutorial16;
	main_tutorial16.setFont(xfont);
	main_tutorial16.setString("you can choose to travel to a certain country by clicking on its name");
	main_tutorial16.setCharacterSize(55);

	sf::Text main_tutorial17;
	main_tutorial17.setFont(xfont);
	main_tutorial17.setString("remember traveling takes time!");
	main_tutorial17.setCharacterSize(55);

	sf::Text main_tutorial18;
	main_tutorial18.setFont(xfont);
	main_tutorial18.setString("here you can also select the plane type, the better the plane the faster you will arrive");
	main_tutorial18.setCharacterSize(55);

	sf::Text main_tutorial19;
	main_tutorial19.setFont(xfont);
	main_tutorial19.setString("now you are in the country panel");
	main_tutorial19.setCharacterSize(55);

	sf::Text main_tutorial20;
	main_tutorial20.setFont(xfont);
	main_tutorial20.setString("here you can start looking for clues about\nthe criminals location");
	main_tutorial20.setCharacterSize(55);

	sf::Text main_tutorial21;
	main_tutorial21.setFont(xfont);
	main_tutorial21.setString("you can do so by pressing the 'binoculars' icon");
	main_tutorial21.setCharacterSize(55);

	sf::Text main_tutorial22;
	main_tutorial22.setFont(xfont);
	main_tutorial22.setString("remember looking for clues takes time!");
	main_tutorial22.setCharacterSize(55);

	sf::Text main_tutorial23;
	main_tutorial23.setFont(xfont);
	main_tutorial23.setString("now click them again, if you answered\ncorrectly, to get access to a clue\n\nafter you read it go to the world map\nby clicking the 'map' icon");
	main_tutorial23.setCharacterSize(55);

	sf::Text main_tutorial24;
	main_tutorial24.setFont(xfont);
	main_tutorial24.setString("Great! you answered correctly!");
	main_tutorial24.setCharacterSize(55);

	sf::Text main_tutorial25;
	main_tutorial25.setFont(xfont);
	main_tutorial25.setString("now you get access to the clue");
	main_tutorial25.setCharacterSize(55);

	sf::Text main_tutorial26;
	main_tutorial26.setFont(xfont);
	main_tutorial26.setString("read it carefully and go to the world map by clicking the 'map' icon");
	main_tutorial26.setCharacterSize(55);

	sf::Text main_tutorial27;
	main_tutorial27.setFont(xfont);
	main_tutorial27.setString("now look for a region that the clue points to");
	main_tutorial27.setCharacterSize(55);

	sf::Text main_tutorial28;
	main_tutorial28.setFont(xfont);
	main_tutorial28.setString("this means that you picked the correct country");
	main_tutorial28.setCharacterSize(55);

	sf::Text main_tutorial29;
	main_tutorial29.setFont(xfont);
	main_tutorial29.setString("oh no you have choosen the wrong country");
	main_tutorial29.setCharacterSize(55);

	sf::Text main_tutorial30;
	main_tutorial30.setFont(xfont);
	main_tutorial30.setString("no worries this was only a tutorial not a real mission");
	main_tutorial30.setCharacterSize(55);

	sf::Text main_tutorial31;
	main_tutorial31.setFont(xfont);
	main_tutorial31.setString("Oh no! your anwser was wrong");
	main_tutorial31.setCharacterSize(55);

	sf::Text main_tutorial315;
	main_tutorial315.setFont(xfont);
	main_tutorial315.setString("don't worry, you still have plenty of time to look for another one");
	main_tutorial315.setCharacterSize(55);

	

	//car game
	int boost = 0;
	int speed = 0;
	bool race_start = 0;
	int opponent_speed = 0;

	int player_random = 0;
	int op_random = 0;
	//bool game_car = 0;
	sf::Texture box_texture;
	box_texture.loadFromFile("Graphic/cars/gui2.png");


	sf::Sprite box;
	box.setTexture(box_texture);

	box.setScale(25.0f, 14.0f);


	sf::Texture answer_box_cars_texture;
	answer_box_cars_texture.loadFromFile("Graphic/cars/gui.png");


	sf::Sprite answer_box_cars_sprite;
	answer_box_cars_sprite.setTexture(answer_box_cars_texture);

	answer_box_cars_sprite.setScale(5.0f, 5.0f);

	sf::Sprite answer_box_cars_sprite2;
	answer_box_cars_sprite2.setTexture(answer_box_cars_texture);

	answer_box_cars_sprite2.setScale(5.0f, 5.0f);

	sf::Sprite answer_box_cars_sprite3;
	answer_box_cars_sprite3.setTexture(answer_box_cars_texture);

	answer_box_cars_sprite3.setScale(5.0f, 5.0f);


	sf::Texture car_texture;
	car_texture.loadFromFile("Graphic/cars/car1.png");

	sf::Sprite car;
	car.setTexture(car_texture);

	car.setScale(0.25f, 0.25f);

	sf::Texture car2_texture;
	car2_texture.loadFromFile("Graphic/cars/car2.png");

	sf::Sprite car2;
	car2.setTexture(car2_texture);

	car2.setScale(0.25f, 0.25f);


	sf::Texture road_texture;
	road_texture.loadFromFile("Graphic/cars/road.png");

	sf::Sprite road;
	road.setTexture(road_texture);

	road.setScale(1.5f, 1.5f);

	sf::Clock ger_clock;
	sf::Clock win_clock;
	
	int car_plx = 0;

	Polski::p_pytanie_int = rand() % 50;

	sf::Text start;
	start.setFont(xfont);
	start.setString("press anywhere to start");
	start.setCharacterSize(85);

	sf::Text you_win;
	you_win.setFont(xfont);
	you_win.setString("you win!");
	you_win.setCharacterSize(85);

	sf::Text you_lose;
	you_lose.setFont(xfont);
	you_lose.setString("you lose...");
	you_lose.setCharacterSize(85);

	bool race_end = 0;

	//int i;
	//goto Map;
	//place = 1;
	//targetplace = 1;
	//goto Place;
	//theme.play();
	//goto Map;
	

	//money = 1000;
	//goto Tree;

	//goto Tree;

	int tutorial2 = 30;
	//Polski::p_pytanie_int = rand() % 53 + 101;
	//goto Cars;
	tutorial = 1;
	//goto Cars;

	//goto BOOK;

	goto Ded;

	 ded:for (;; ) {
	Ded:window.clear();
		fade.setFillColor(sf::Color(0, 0, 0, fadeint));
		copyright.setPosition(570, 350);
		copyright.setCharacterSize(70);
		window.draw(copyright);
		

		if (fadeint == 255) {
			fadeint = 0;
			goto Spec;
		}

		if (fadeclock.getElapsedTime().asMilliseconds() > 6) {
			fadeint++;

			fadeclock.restart();
		}
		window.draw(fade);

		sf::Event copy;
		while (window.pollEvent(copy)) {

			if (copy.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.display();
	}
		 for (;; ) {
 Spec:window.clear();
	 fade.setFillColor(sf::Color(0, 0, 0, fadeint));
	
	 engine.setPosition(700, 400);
	 engine.setCharacterSize(90);
	 window.draw(engine);
	

	 if (fadeint >= 254) {
		 
		 goto Menu;
	 }

	 if (fadeclock.getElapsedTime().asMilliseconds() > 6) {
		 fadeint++;

		 fadeclock.restart();
	 }
	 window.draw(fade);

	 sf::Event copy;
	 while (window.pollEvent(copy)) {

		 if (copy.type == sf::Event::Closed) {
			 window.close();
		 }
	 }

	 window.display();
 }
	menu:for (;; ) {
		Menu:window.clear();
		 window.draw(background_sprite);

		 if (in_world == true) {
			 window.draw(map_sprite);
			 window.draw(menu_grim);
		 }


		 reset_progress.setPosition(6100, 2500);
		 
		 
		if (menuset == 0) {
			title.setPosition(590, 220);
			window.draw(title);

			title2.setPosition(810, 290);
			window.draw(title2);

			play.setPosition(742, 580);
			window.draw(play);

			settings.setPosition(670, 650);
			window.draw(settings);

			credits.setPosition(690, 720);
			window.draw(credits);

			exit.setPosition(745, 790);
			window.draw(exit);

			
			//copyright.setPosition(845, 865);
			//copyright.setCharacterSize(20);
			//window.draw(copyright);

			soundtrack1.setPosition(3000, 2000);
			soundtrack2.setPosition(3000, 3000);
			soundtrack3.setPosition(3000, 4000);
			soundtrack.setPosition(6300, 6500);
			exit1.setPosition(3000, 5000);
		}
		if (menuset == 1) {

			soundtrack1.setPosition(300, 200);
			window.draw(soundtrack1);

			soundtrack2.setPosition(300, 300);
			window.draw(soundtrack2);

			soundtrack3.setPosition(300, 400);
			window.draw(soundtrack3);

			exit1.setPosition(300, 500);
			window.draw(exit1);

			
			//copyright.setPosition(845, 865);
			//copyright.setCharacterSize(20);
			//window.draw(copyright);
		}
		if (menuset == 2) {
			//window.clear();

			programmer_credits.setPosition(400, creditsint);
			window.draw(programmer_credits);


			if (menuclock.getElapsedTime().asMilliseconds() > 20) {
				creditsint--;
				if (creditsint <= 900) {
					menu1--;
				}
				menuclock.restart();
			}
			window.draw(title);
			title.setPosition(590, menu1);


			if (med_set == true) {
				if (creditsclock.getElapsedTime().asSeconds() > 50) {
					title.setPosition(510, creditsint2);
					if (creditsint2 == 220) {
						shifttext.setPosition(450, 350);
						window.draw(shifttext);

					}
					else {
						creditsint2--;
					}

				}
			}
			if (low_set == true) {
				if (creditsclock.getElapsedTime().asSeconds() > 47) {
					title.setPosition(510, creditsint2);
					if (creditsint2 == 220) {
						shifttext.setPosition(450, 350);
						window.draw(shifttext);

					}
					else {
						creditsint2--;
					}

				}
			}
			if (ult_set == true) {
				if (creditsclock.getElapsedTime().asSeconds() > 42) {
					title.setPosition(510, creditsint2);
					if (creditsint2 == 220) {
						shifttext.setPosition(450, 350);
						window.draw(shifttext);

					}
					else {
						creditsint2--;
					}

				}
			}



			sf::Event menu;
			while (window.pollEvent(menu)) {

				if (menu.type == sf::Event::Closed) {
					window.close();
				}
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 0;
					mmusic2.stop();
					title.setPosition(400, 250);
				}
			}


		}
		if (menuset == 3) {
			//soundtrack.setPosition(610, 180);
			//window.draw(soundtrack);

			reset_progress.setPosition(560, 250);
			window.draw(reset_progress);

			graphics.setPosition(430, 320);
			window.draw(graphics);

			volume.setPosition(430, 390);
			window.draw(volume);


			very_low.setPosition(750, 333);
			window.draw(very_low);
			medium.setPosition(1000, 333);
			window.draw(medium);
			ultra.setPosition(1200, 333);
			window.draw(ultra);

			none.setPosition(750, 403);
			window.draw(none);
			t50t.setPosition(950, 403);
			window.draw(t50t);
			t100t.setPosition(1200, 403);
			window.draw(t100t);

			
			//copyright.setPosition(845, 865);
			//copyright.setCharacterSize(20);
			//window.draw(copyright);

			exit1.setPosition(30000, 50000);
			
			arrow_sprite.setPosition(100, 750);
			window.draw(arrow_sprite);

			

		}

		if (musict == 0) {
			low_vol = true;
			med_vol = false;
			ult_vol = false;
			mmusic1.setVolume(0);

			mmusic2.setVolume(0);

			mmusic3.setVolume(0);
			theme.setVolume(0);
		}
		if (musict == 1) {
			low_vol = false;
			med_vol = true;
			ult_vol = false;
			mmusic1.setVolume(0);

			mmusic2.setVolume(40);

			mmusic3.setVolume(40);
			theme.setVolume(40);
		}
		if (musict == 2) {
			low_vol = false;
			med_vol = false;
			ult_vol = true;

			mmusic1.setVolume(0);


			mmusic2.setVolume(80);


			mmusic3.setVolume(80);
			theme.setVolume(80);
		}
		Load();

		

		

		sf::Event menu;
		while (window.pollEvent(menu)) {

			if (menu.type == sf::Event::Closed) {
				return 0;
				window.close();
				
			}
			if (none.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				none.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {

					mmusic1.setVolume(0);

					mmusic2.setVolume(0);

					mmusic3.setVolume(0);

					//sf::Music menu2;
					//menu2.openFromFile("Music/menu1.ogg");
					//menu2.setVolume(0);


					theme.setVolume(0);

					low_vol = true;
					med_vol = false;
					ult_vol = false;
					musict = 0;
					Save();
				}


			}
			else {
				none.setFillColor(sf::Color::White);
				if (low_vol == true) {
					none.setFillColor(sf::Color::Red);
				}
			}
			if (t50t.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				t50t.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {

					mmusic1.setVolume(0);


					mmusic2.setVolume(40);


					mmusic3.setVolume(40);

					//sf::Music menu2;
					//menu2.openFromFile("Music/menu1.ogg");
					//menu2.setVolume(40);


					theme.setVolume(40);

					low_vol = false;
					med_vol = true;
					ult_vol = false;
					musict = 1;
					Save();
				}


			}
			else {
				t50t.setFillColor(sf::Color::White);
				if (med_vol == true) {
					t50t.setFillColor(sf::Color::Red);
				}
			}
			if (t100t.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				t100t.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {

					mmusic1.setVolume(80);


					mmusic2.setVolume(80);


					mmusic3.setVolume(80);

					//sf::Music menu2;
					//menu2.openFromFile("Music/menu1.ogg");
					//menu2.setVolume(80);


					theme.setVolume(80);

					low_vol = false;
					med_vol = false;
					ult_vol = true;
					musict = 2;
					Save();
				}


			}
			else {
				t100t.setFillColor(sf::Color::White);
				if (ult_vol == true) {
					t100t.setFillColor(sf::Color::Red);
				}
			}
			if (reset_progress.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				reset_progress.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					money = 200;
					level = 1;

					points = 0;

					end_game_level = 0;

					flight_level = 1;

					time_level = 0;


					ofstream cashfile("Save/cash.txt");
					cashfile << money;
					cashfile.close();
					ofstream levelfile("Save/level.txt");
					levelfile << level;
					levelfile.close();
					ofstream pointsfile("Save/points.txt");
					pointsfile << points;
					pointsfile.close();
					ofstream level1file("Save/level1.txt");
					level1file << end_game_level;
					level1file.close();
					ofstream level2file("Save/level2.txt");
					level2file << flight_level;
					level2file.close();
					ofstream level3file("Save/level3.txt");
					level3file << time_level;
					level3file.close();
				}
			}
			else {
				reset_progress.setFillColor(sf::Color::White);
			}
			if (play.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				play.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					if (in_world == true) {
						goto Map;
					}


					place = -1;
					map_marker_base_sprite.setTexture(map_marker_fill_texture);
					switc = 4;
					fadeint = 0;
					
					
					Load();

					targetplace = -2;
					day = 999999;
					hours_in.setCharacterSize(35);
					minutes_in.setCharacterSize(35);
					day_in.setCharacterSize(35);
					money_in.setCharacterSize(35);
					
					ifstream incashfile("Save/cash.txt");
					if (incashfile.is_open())
					{
						incashfile >> money;
						incashfile.close();
					}
					ifstream inlevelfile("Save/level.txt");
					if (inlevelfile.is_open())
					{
						inlevelfile >> level;
						inlevelfile.close();
					}
					ifstream inlevel1file("Save/level1.txt");
					if (inlevel1file.is_open())
					{
						inlevel1file >> end_game_level;
						inlevel1file.close();
					}
					ifstream inlevel2file("Save/level2.txt");
					if (inlevel2file.is_open())
					{
						inlevel2file >> flight_level;
						inlevel2file.close();
					}
					ifstream inlevel3file("Save/level3.txt");
					if (inlevel3file.is_open())
					{
						inlevel3file >> time_level;
						inlevel3file.close();
					}
					ifstream inpointsfile("Save/points.txt");
					if (inpointsfile.is_open())
					{
						inpointsfile >> points;
						inpointsfile.close();
					}



					in_world = true;
					goto Fade;
					
				}
			}
			else {
				play.setFillColor(sf::Color::White);
			}
			if (exit.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				exit.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					window.close();
					return 0;
				}
			}
			else {
				exit.setFillColor(sf::Color::White);
			}
			if (exit1.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				exit1.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 3;
				}
			}
			else {
				exit1.setFillColor(sf::Color::White);
			}
			if (exit2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				exit2.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 0;
				}
			}
			else {
				exit2.setFillColor(sf::Color::White);
			}
			if (arrow_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 0;
				}
			}
			else {
				
			}
			if (soundtrack.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				soundtrack.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 1;
				}
			}
			else {
				soundtrack.setFillColor(sf::Color::White);
			}
			if (very_low.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				very_low.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					low_set = true;
					med_set = false;
					ult_set = false;
					window.setFramerateLimit(30);
				}
			}
			else {
				very_low.setFillColor(sf::Color::White);
				if (low_set == true) {
					very_low.setFillColor(sf::Color::Red);
				}
			}
			if (medium.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				medium.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					low_set = false;
					med_set = true;
					ult_set = false;
					window.setFramerateLimit(60);
				}
			}
			else {
				medium.setFillColor(sf::Color::White);
				if (med_set == true) {
					medium.setFillColor(sf::Color::Red);
				}
			}
			if (ultra.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				ultra.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					low_set = false;
					med_set = false;
					ult_set = true;
					window.setFramerateLimit(144);
				}
			}
			else {
				ultra.setFillColor(sf::Color::White);
				if (ult_set == true) {
					ultra.setFillColor(sf::Color::Red);
				}
			}
			if (settings.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				settings.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 3;
				}
			}
			else {
				settings.setFillColor(sf::Color::White);
			}
			if (soundtrack1.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				soundtrack1.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					//mmusic1.play();
					//mmusic3.stop();
					//mmusic2.stop();
					sound1 = true;
					sound2 = false;
					sound3 = false;
				}
			}
			else {
				soundtrack1.setFillColor(sf::Color::White);
			}
			if (soundtrack2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				soundtrack2.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					//mmusic3.play();
					//mmusic1.stop();
					//mmusic2.stop();
					sound1 = false;
					sound2 = true;
					sound3 = false;
				}
			}
			else {
				soundtrack2.setFillColor(sf::Color::White);
			}
			if (soundtrack3.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				soundtrack3.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					//mmusic2.play();
					//mmusic3.stop();
					//mmusic1.stop();
					sound1 = false;
					sound2 = false;
					sound3 = true;
				}
			}
			else {
				soundtrack3.setFillColor(sf::Color::White);
			}
			if (credits.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				credits.setFillColor(sf::Color::Red);
				if (menu.type == sf::Event::MouseButtonReleased && menu.key.code == sf::Mouse::Left) {
					menuset = 2;
					menu2.stop();
					mmusic2.play();
					mmusic2.setPlayingOffset(sf::seconds(7.f));
					menu1 = 220;
					creditsint = 950;
					creditsint2 = 1200;
					creditsclock.restart();
					menuclock.restart();
					//menub = 3;
				}
			}
			else {
				credits.setFillColor(sf::Color::White);
			}
			
		}
		window.display();

		
	}
   place:for (;; ) {
		Place:window.clear();
		
		window.draw(background_sprite);

		if (money < 0) {
			money = 0;
		}
		gui1_sprite.setPosition(370, 0);
		window.draw(gui1_sprite);


		gui2_sprite.setPosition(370, 0);
		window.draw(gui2_sprite);


		 map_icon.setPosition(420, 750);
		 window.draw(map_icon);

		 
		 Save();

		 if (Polski::p_pytanie_true == 0) {
			 search_icon.setPosition(670, 700);

			 wanted_icon.setPosition(970, 720);
		 }
		 
		
			 if (place == 0) {
				 //error
			 }

			 if (place == 1) {
				 hungary_sprite.setPosition(383, 43);
				 window.draw(hungary_sprite);

				 hungary.setFillColor(sf::Color::White);
				 hungary.setPosition(875, 330);
				 window.draw(hungary);
				 if (mission == false) {
					 if (question == 1) {
						 place1_answer1.setPosition(400, 400);
						 window.draw(place1_answer1);
					 }
					 if (question == 2) {
						 place1_answer2.setPosition(400, 400);
						 window.draw(place1_answer2);
					 }
					 if (question == 3) {
						 place1_answer3.setPosition(400, 400);
						 window.draw(place1_answer3);
					 }
					 if (question == 4) {
						 place1_answer4.setPosition(400, 400);
						 window.draw(place1_answer4);
					 }
					 if (question == 5) {
						 place1_answer5.setPosition(400, 400);
						 window.draw(place1_answer5);
					 }
					 if (question == 6) {
						 place1_answer6.setPosition(400, 400);
						 window.draw(place1_answer6);
					 }
				 }
			 }
			 if (mission == true) {
				 if (targetplace == 1) {


					 if (question == 1) {
						 place1_question1.setPosition(400, 400);
						 window.draw(place1_question1);
					 }
					 if (question == 2) {
						 place1_question2.setPosition(400, 400);
						 window.draw(place1_question2);
					 }
					 if (question == 3) {
						 place1_question3.setPosition(400, 400);
						 window.draw(place1_question3);
					 }
					 if (question == 4) {
						 place1_question4.setPosition(400, 400);
						 window.draw(place1_question4);
					 }
					 if (question == 5) {
						 place1_question5.setPosition(400, 400);
						 window.draw(place1_question5);
					 }
					 if (question == 6) {
						 place1_question6.setPosition(400, 400);
						 window.draw(place1_question6);
					 }
					 if (question == 7) {
						 place1_question7.setPosition(400, 400);
						 window.draw(place1_question7);
					 }
					 if (question == 8) {
						 place1_question8.setPosition(400, 400);
						 window.draw(place1_question8);
					 }
					 if (question == 9) {
						 place1_question9.setPosition(400, 400);
						 window.draw(place1_question9);
					 }

				 }
			 }

			 if (place == 2) {
				 norway_sprite.setPosition(383, 43);
				 window.draw(norway_sprite);

				 norway.setFillColor(sf::Color::White);
				 norway.setPosition(890, 330);
				 window.draw(norway);
				 if (mission == false) {
					 if (question == 1) {
						 place2_answer1.setPosition(400, 400);
						 window.draw(place2_answer1);
					 }
					 if (question == 2) {
						 place2_answer2.setPosition(400, 400);
						 window.draw(place2_answer2);
					 }
					 if (question == 3) {
						 place2_answer3.setPosition(400, 400);
						 window.draw(place2_answer3);
					 }
					 if (question == 4) {
						 place2_answer4.setPosition(400, 400);
						 window.draw(place2_answer4);
					 }
					 if (question == 5) {
						 place2_answer5.setPosition(400, 400);
						 window.draw(place2_answer5);
					 }
					 if (question == 6) {
						 place2_answer6.setPosition(400, 400);
						 window.draw(place2_answer6);
					 }
				 }
			 }
			 if (mission == true) {
				 if (targetplace == 2) {
					 if (question == 1) {
						 place2_question1.setPosition(400, 400);
						 window.draw(place2_question1);
					 }
					 if (question == 2) {
						 place2_question2.setPosition(400, 400);
						 window.draw(place2_question2);
					 }
					 if (question == 3) {
						 place2_question3.setPosition(400, 400);
						 window.draw(place2_question3);
					 }
					 if (question == 4) {
						 place2_question4.setPosition(400, 400);
						 window.draw(place2_question4);
					 }
					 if (question == 5) {
						 place2_question5.setPosition(400, 400);
						 window.draw(place2_question5);
					 }
					 if (question == 6) {
						 place2_question6.setPosition(400, 400);
						 window.draw(place2_question6);
					 }
					 if (question == 7) {
						 place2_question7.setPosition(400, 400);
						 window.draw(place2_question7);
					 }
					 if (question == 8) {
						 place2_question8.setPosition(400, 400);
						 window.draw(place2_question8);
					 }
					 if (question == 9) {
						 place2_question9.setPosition(400, 400);
						 window.draw(place2_question9);
					 }
					 if (question == 10) {
						 place2_question10.setPosition(400, 400);
						 window.draw(place2_question10);
					 }
				 }

			 }

			 if (place == 3) {
				 denmark_sprite.setPosition(383, 43);
				 window.draw(denmark_sprite);

				 denmark.setFillColor(sf::Color::White);
				 denmark.setPosition(880, 330);
				 window.draw(denmark);

				 if (mission == false) {
					 if (question == 1) {
						 place3_answer1.setPosition(400, 400);
						 window.draw(place3_answer1);
					 }
					 if (question == 2) {
						 place3_answer2.setPosition(400, 400);
						 window.draw(place3_answer2);
					 }
					 if (question == 3) {
						 place3_answer3.setPosition(400, 400);
						 window.draw(place3_answer3);
					 }
					 if (question == 4) {
						 place3_answer4.setPosition(400, 400);
						 window.draw(place3_answer4);
					 }
					 if (question == 5) {
						 place3_answer5.setPosition(400, 400);
						 window.draw(place3_answer5);
					 }
					 if (question == 6) {
						 place3_answer6.setPosition(400, 400);
						 window.draw(place3_answer6);
					 }
				 }
			 }
			 if (mission == true) {
				 if (targetplace == 3) {
					 if (question == 1) {
						 place3_question1.setPosition(400, 400);
						 window.draw(place3_question1);
					 }
					 if (question == 2) {
						 place3_question2.setPosition(400, 400);
						 window.draw(place3_question2);
					 }
					 if (question == 3) {
						 place3_question3.setPosition(400, 400);
						 window.draw(place3_question3);
					 }
					 if (question == 4) {
						 place3_question4.setPosition(400, 400);
						 window.draw(place3_question4);
					 }
					 if (question == 5) {
						 place3_question5.setPosition(400, 400);
						 window.draw(place3_question5);
					 }
					 if (question == 6) {
						 place3_question6.setPosition(400, 400);
						 window.draw(place3_question6);
					 }
					 if (question == 7) {
						 place3_question7.setPosition(400, 400);
						 window.draw(place3_question7);
					 }
					 if (question == 8) {
						 place3_question8.setPosition(400, 400);
						 window.draw(place3_question8);
					 }
					 if (question == 9) {
						 place3_question9.setPosition(400, 400);
						 window.draw(place3_question9);
					 }

				 }

			 }
			 if (place == 4) {
				 sweden_sprite.setPosition(383, 43);
				 window.draw(sweden_sprite);

				 sweden.setFillColor(sf::Color::White);
				 sweden.setPosition(900, 330);
				 window.draw(sweden);


				 if (mission == false) {
					 if (question == 1) {
						 place4_answer1.setPosition(400, 400);
						 window.draw(place4_answer1);
					 }
					 if (question == 2) {
						 place4_answer2.setPosition(400, 400);
						 window.draw(place4_answer2);
					 }
					 if (question == 3) {
						 place4_answer3.setPosition(400, 400);
						 window.draw(place4_answer3);
					 }
					 if (question == 4) {
						 place4_answer4.setPosition(400, 400);
						 window.draw(place4_answer4);
					 }
					 if (question == 5) {
						 place4_answer5.setPosition(400, 400);
						 window.draw(place4_answer5);
					 }
					 if (question == 6) {
						 place4_answer6.setPosition(400, 400);
						 window.draw(place4_answer6);
					 }
				 }
			 }
			 if (mission == true) {
				 if (targetplace == 4) {
					 if (question == 1) {
						 place4_question1.setPosition(400, 400);
						 window.draw(place4_question1);
					 }
					 if (question == 2) {
						 place4_question2.setPosition(400, 400);
						 window.draw(place4_question2);
					 }
					 if (question == 3) {
						 place4_question3.setPosition(400, 400);
						 window.draw(place4_question3);
					 }
					 if (question == 4) {
						 place4_question4.setPosition(400, 400);
						 window.draw(place4_question4);
					 }
					 if (question == 5) {
						 place4_question5.setPosition(400, 400);
						 window.draw(place4_question5);
					 }
					 if (question == 6) {
						 place4_question6.setPosition(400, 400);
						 window.draw(place4_question6);
					 }
					 if (question == 7) {
						 place4_question7.setPosition(400, 400);
						 window.draw(place4_question7);
					 }
					 if (question == 8) {
						 place4_question8.setPosition(400, 400);
						 window.draw(place4_question8);
					 }
					 if (question == 9) {
						 place4_question9.setPosition(400, 400);
						 window.draw(place4_question9);

					 }
				 }
			 }

			 if (place == 5) {
				 usa_sprite.setPosition(383, 43);
				 window.draw(usa_sprite);

				 usa.setFillColor(sf::Color::White);
				 usa.setPosition(940, 330);
				 window.draw(usa);

				 if (mission == false) {
					 if (question == 1) {
						 place5_answer1.setPosition(400, 400);
						 window.draw(place5_answer1);
					 }
					 if (question == 2) {
						 place5_answer2.setPosition(400, 400);
						 window.draw(place5_answer2);
					 }
					 if (question == 3) {
						 place5_answer3.setPosition(400, 400);
						 window.draw(place5_answer3);
					 }
					 if (question == 4) {
						 place5_answer4.setPosition(400, 400);
						 window.draw(place5_answer4);
					 }
					 if (question == 5) {
						 place5_answer5.setPosition(400, 400);
						 window.draw(place5_answer5);
					 }
					 if (question == 6) {
						 place5_answer6.setPosition(400, 400);
						 window.draw(place5_answer6);
					 }
				 }
			 }

			 if (mission == true) {

				 if (targetplace == 5) {
					 if (question == 1) {
						 place5_question1.setPosition(400, 400);
						 window.draw(place5_question1);
					 }
					 if (question == 2) {
						 place5_question2.setPosition(400, 400);
						 window.draw(place5_question2);
					 }
					 if (question == 3) {
						 place5_question3.setPosition(400, 400);
						 window.draw(place5_question3);
					 }
					 if (question == 4) {
						 place5_question4.setPosition(400, 400);
						 window.draw(place5_question4);
					 }
					 if (question == 5) {
						 place5_question5.setPosition(400, 400);
						 window.draw(place5_question5);
					 }
					 if (question == 6) {
						 place5_question6.setPosition(400, 400);
						 window.draw(place5_question6);
					 }
					 if (question == 7) {
						 place5_question7.setPosition(400, 400);
						 window.draw(place5_question7);
					 }
					 if (question == 8) {
						 place5_question8.setPosition(400, 400);
						 window.draw(place5_question8);
					 }
					 if (question == 9) {
						 place5_question9.setPosition(400, 400);
						 window.draw(place5_question9);
					 }

				 }

			 }

			 if (place == 6) {
				 canada_sprite.setPosition(383, 43);
				 window.draw(canada_sprite);

				 canada.setFillColor(sf::Color::White);
				 canada.setPosition(890, 330);
				 window.draw(canada);

				 if (mission == false) {
					 if (question == 1) {
						 place6_answer1.setPosition(400, 400);
						 window.draw(place6_answer1);
					 }
					 if (question == 2) {
						 place6_answer2.setPosition(400, 400);
						 window.draw(place6_answer2);
					 }
					 if (question == 3) {
						 place6_answer3.setPosition(400, 400);
						 window.draw(place6_answer3);
					 }
					 if (question == 4) {
						 place6_answer4.setPosition(400, 400);
						 window.draw(place6_answer4);
					 }
					 if (question == 5) {
						 place6_answer5.setPosition(400, 400);
						 window.draw(place6_answer5);
					 }
					 if (question == 6) {
						 place6_answer6.setPosition(400, 400);
						 window.draw(place6_answer6);
					 }
				 }
			 }

			 if (mission == true) {
				 if (targetplace == 6) {
					 if (question == 1) {
						 place6_question1.setPosition(400, 400);
						 window.draw(place6_question1);
					 }
					 if (question == 2) {
						 place6_question2.setPosition(400, 400);
						 window.draw(place6_question2);
					 }
					 if (question == 3) {
						 place6_question3.setPosition(400, 400);
						 window.draw(place6_question3);
					 }
					 if (question == 4) {
						 place6_question4.setPosition(400, 400);
						 window.draw(place6_question4);
					 }
					 if (question == 5) {
						 place6_question5.setPosition(400, 400);
						 window.draw(place6_question5);
					 }
					 if (question == 6) {
						 place6_question6.setPosition(400, 400);
						 window.draw(place6_question6);
					 }
					 if (question == 7) {
						 place6_question7.setPosition(400, 400);
						 window.draw(place6_question7);
					 }
					 if (question == 8) {
						 place6_question8.setPosition(400, 400);
						 window.draw(place6_question8);
					 }
					 if (question == 9) {
						 place6_question9.setPosition(400, 400);
						 window.draw(place6_question9);
					 }
				 }

			 }

			 if (place == 7) {
				 russia_sprite.setPosition(383, 43);
				 window.draw(russia_sprite);

				 russia.setFillColor(sf::Color::White);
				 russia.setPosition(900, 330);
				 window.draw(russia);

				 if (mission == false) {
					 if (question == 1) {
						 place7_answer1.setPosition(400, 400);
						 window.draw(place7_answer1);
					 }
					 if (question == 2) {
						 place7_answer2.setPosition(400, 400);
						 window.draw(place7_answer2);
					 }
					 if (question == 3) {
						 place7_answer3.setPosition(400, 400);
						 window.draw(place7_answer3);
					 }
					 if (question == 4) {
						 place7_answer4.setPosition(400, 400);
						 window.draw(place7_answer4);
					 }
					 if (question == 5) {
						 place7_answer5.setPosition(400, 400);
						 window.draw(place7_answer5);
					 }
					 if (question == 6) {
						 place7_answer6.setPosition(400, 400);
						 window.draw(place7_answer6);
					 }
				 }
			 }

			 if (mission == true) {
				 if (targetplace == 7) {
					 if (question == 1) {
						 place7_question1.setPosition(400, 400);
						 window.draw(place7_question1);
					 }
					 if (question == 2) {
						 place7_question2.setPosition(400, 400);
						 window.draw(place7_question2);
					 }
					 if (question == 3) {
						 place7_question3.setPosition(400, 400);
						 window.draw(place7_question3);
					 }
					 if (question == 4) {
						 place7_question4.setPosition(400, 400);
						 window.draw(place7_question4);
					 }
					 if (question == 5) {
						 place7_question5.setPosition(400, 400);
						 window.draw(place7_question5);
					 }
					 if (question == 6) {
						 place7_question6.setPosition(400, 400);
						 window.draw(place7_question6);
					 }
					 if (question == 7) {
						 place7_question7.setPosition(400, 400);
						 window.draw(place7_question7);
					 }
					 if (question == 8) {
						 place7_question8.setPosition(400, 400);
						 window.draw(place7_question8);
					 }
					 if (question == 9) {
						 place7_question9.setPosition(400, 400);
						 window.draw(place7_question9);
					 }
				 }

			 }

			 if (place == 8) {
				 aus_sprite.setPosition(383, 43);
				 window.draw(aus_sprite);

				 aus.setFillColor(sf::Color::White);
				 aus.setPosition(835, 330);
				 window.draw(aus);

				 if (mission == false) {
					 if (question == 1) {
						 place8_answer1.setPosition(400, 400);
						 window.draw(place8_answer1);
					 }
					 if (question == 2) {
						 place8_answer2.setPosition(400, 400);
						 window.draw(place8_answer2);
					 }
					 if (question == 3) {
						 place8_answer3.setPosition(400, 400);
						 window.draw(place8_answer3);
					 }
					 if (question == 4) {
						 place8_answer4.setPosition(400, 400);
						 window.draw(place8_answer4);
					 }
					 if (question == 5) {
						 place8_answer5.setPosition(400, 400);
						 window.draw(place8_answer5);
					 }
					 if (question == 6) {
						 place8_answer6.setPosition(400, 400);
						 window.draw(place8_answer6);
					 }
				 }
			 }

			 if (mission == true) {
				 if (targetplace == 8) {
					 if (question == 1) {
						 place8_question1.setPosition(400, 400);
						 window.draw(place8_question1);
					 }
					 if (question == 2) {
						 place8_question2.setPosition(400, 400);
						 window.draw(place8_question2);
					 }
					 if (question == 3) {
						 place8_question3.setPosition(400, 400);
						 window.draw(place8_question3);
					 }
					 if (question == 4) {
						 place8_question4.setPosition(400, 400);
						 window.draw(place8_question4);
					 }
					 if (question == 5) {
						 place8_question5.setPosition(400, 400);
						 window.draw(place8_question5);
					 }
					 if (question == 6) {
						 place8_question6.setPosition(400, 400);
						 window.draw(place8_question6);
					 }
					 if (question == 7) {
						 place8_question7.setPosition(400, 400);
						 window.draw(place8_question7);
					 }
					 if (question == 8) {
						 place8_question8.setPosition(400, 400);
						 window.draw(place8_question8);
					 }
					 if (question == 9) {
						 place8_question9.setPosition(400, 400);
						 window.draw(place8_question9);
					 }
				 }

			 }
		 


			 if (place == 9) {
				 pol_sprite.setPosition(383, 43);
				 window.draw(pol_sprite);

				 pol.setFillColor(sf::Color::White);
				 pol.setPosition(855, 330);
				 window.draw(pol);

				 if (mission == false) {
					 if (question == 1) {
						 place9_answer1.setPosition(400, 400);
						 window.draw(place9_answer1);
					 }
					 if (question == 2) {
						 place9_answer2.setPosition(400, 400);
						 window.draw(place9_answer2);
					 }
					 if (question == 3) {
						 place9_answer3.setPosition(400, 400);
						 window.draw(place9_answer3);
					 }
					 if (question == 4) {
						 place9_answer4.setPosition(400, 400);
						 window.draw(place9_answer4);
					 }
					 if (question == 5) {
						 place9_answer5.setPosition(400, 400);
						 window.draw(place9_answer5);
					 }
					 if (question == 6) {
						 place9_answer6.setPosition(400, 400);
						 window.draw(place9_answer6);
					 }
				 }
			 }

			 if (mission == true) {
				 if (targetplace == 9) {
					 if (question == 1) {
						 place9_question1.setPosition(400, 400);
						 window.draw(place9_question1);
					 }
					 if (question == 2) {
						 place9_question2.setPosition(400, 400);
						 window.draw(place9_question2);
					 }
					 if (question == 3) {
						 place9_question3.setPosition(400, 400);
						 window.draw(place9_question3);
					 }
					 if (question == 4) {
						 place9_question4.setPosition(400, 400);
						 window.draw(place9_question4);
					 }
					 if (question == 5) {
						 place9_question5.setPosition(400, 400);
						 window.draw(place9_question5);
					 }
					 if (question == 6) {
						 place9_question6.setPosition(400, 400);
						 window.draw(place9_question6);
					 }
					 if (question == 7) {
						 place9_question7.setPosition(400, 400);
						 window.draw(place9_question7);
					 }
					 if (question == 8) {
						 place9_question8.setPosition(400, 400);
						 window.draw(place9_question8);
					 }
					 if (question == 9) {
						 place9_question9.setPosition(400, 400);
						 window.draw(place9_question9);
					 }
				 }

			 }










		 if (Polski::p_pytanie_start == 1 && Polski::p_pytanie_true == 0 && Polski::p_pytanie_dobrze == 0 && mission == true && Polski::p_pytanie_koniec == 0) {

			 answer_box_sprite.setPosition(400, 450);
			 window.draw(answer_box_sprite);

			 answer_box2_sprite.setPosition(400, 550);
			 window.draw(answer_box2_sprite);

			 answer_box3_sprite.setPosition(400, 650);
			 window.draw(answer_box3_sprite);

			 Polski::Polskie_pytanie(window, xfont);

		 }

		 if (Polski::p_pytanie_koniec == 1) {
			 if (Polski::p_pytanie_dobrze == 0) {

			 } 
			 if (Polski::p_pytanie_dobrze == 1) {
				 if (tutorial == 23) {
					 main_tutorial23.setPosition(400, 400);
					 window.draw(main_tutorial23);
					 
				 }
			 }
		 }

		 wanted_icon.setPosition(10200, 7100);

		 tree_icon.setPosition(73000, 70000);
		
		

		 search_icon.setPosition(670, 700);
			 
		 

		 if (place == -1) {
			 san_sprite.setPosition(383, 43);
			 window.draw(san_sprite);

			 san.setFillColor(sf::Color::White);
			 san.setPosition(860, 330);
			 window.draw(san);

			 

			 search_icon.setPosition(6700, 6800);
			
			 if (tip1 == true) {
				 window.draw(tip_sprite);
			 }
			 tip_sprite.setPosition(1030, 630);


			 if (mission == false) {
				 wanted_icon.setPosition(730, 720);
				 window.draw(wanted_icon);
			 }
		 }

		 tree_icon.setScale(2.5, 2.5);
		 tree_icon.setPosition(1040, 720);
		 window.draw(tree_icon);
		 
		 window.draw(search_icon);
		 

		 pocket_sprite.setPosition(1370, 0);
		 window.draw(pocket_sprite);
		 pocket_sprite.setTexture(mission_texture);


		 if (mission == true) {
			 pocket_sprite.setTexture(pocket_texture);
		 }



		 if (timeclock.getElapsedTime().asSeconds() > 3) {
			 minutes = minutes + 5;

			 if (minutes == 60) {
				 minutes = 0;
				 hours++;
			 }
			 if (hours == 24) {
				 hours = 0;
				 day--;
			 }


			 timeclock.restart();
		 }



		 hourfunction();
		 hours_in.setString(hourin);

		 minutefunction();
		 minutes_in.setString(minutein);

		 dayfunction();
		 day_in.setString(dayin);

		 monthfunction();
		 month_in.setString(monthin);

		 moneyfunction();
		 money_in.setString(moneyin);


		 semicolon.setCharacterSize(35);
		 semicolon.setPosition(1495, 111);
		 window.draw(semicolon);
		 
		

		 hours_in.setCharacterSize(35);
		 minutes_in.setCharacterSize(35);
		 day_in.setCharacterSize(35);
		 money_in.setCharacterSize(35);
		
		 if (hours < 10) {
			 hours_in.setPosition(1460, 111);
		 }
		 if (hours >= 10) {
			 hours_in.setPosition(1440, 111);
		 }

		 window.draw(hours_in);

		 minutes_in.setPosition(1510, 111);
		 if (minutes < 10) {
			 zero.setPosition(1510, 111);
			 window.draw(zero);
			 minutes_in.setPosition(1540, 111);
		 }
		 window.draw(minutes_in);
		 
		 day_in.setPosition(1540, 197);
		 if (mission == false) {
			 day_in.setPosition(154000, 19007);
		 }

		 day_in.setPosition(1540, 197);
		 if (day >= 10) {
			 day_in.setPosition(1510, 197);
		 }
		 if (mission == true) {
			 window.draw(day_in);
		 }
		 
		 

		 money_in.setPosition(1540, 25);
		 if (money >= 10) {
			 money_in.setPosition(1510, 25);
		 }
		 if (money >= 100) {
			 money_in.setPosition(1477, 25);
		 }
		 if (money >= 1000) {
			 money_in.setPosition(1445, 25);
		 }
		 window.draw(money_in);

		// if (tutorial_clock.getElapsedTime().asSeconds() > 3) {

			// minutes = minutes + 6;
			//tutorial_clock.restart();
		 //}
		 

		 if (tutorial == 1) {
			 main_tutorial1.setPosition(400, 400);
			 window.draw(main_tutorial1);
		 }
		 if (tutorial == 2) {
			 main_tutorial2.setPosition(400, 400);
			 window.draw(main_tutorial2);
		 }
		 if (tutorial == 3) {
			 main_tutorial3.setPosition(400, 400);
			 window.draw(main_tutorial3);
		 }
		 if (tutorial == 4) {
			 main_tutorial4.setPosition(400, 400);
			 window.draw(main_tutorial4);
		 }

		 if (tutorial == 19) {
			 main_tutorial19.setPosition(400, 400);
			 window.draw(main_tutorial19);
		 }
		 if (tutorial == 20) {
			 main_tutorial20.setPosition(400, 400);
			 window.draw(main_tutorial20);
		 }
		 if (tutorial == 21) {
			 main_tutorial21.setPosition(400, 400);
			 window.draw(main_tutorial21);
		 }
		 if (tutorial == 22) {
			 main_tutorial22.setPosition(400, 400);
			 window.draw(main_tutorial22);
		 }


		 if (tutorial > 18 && tutorial < 23) {
			 tutorial2 = 1;
		 }
		 else {
			 tutorial2 = 0;
		 }
		// if (tutorial == 6) {
		//	 main_tutorial6.setPosition(400, 400);
		//	 window.draw(main_tutorial6);
		// }


		sf::Event location;
		while (window.pollEvent(location)) {
			
			
			//Polski::Polskie_pytanie_Events(location, window);
if (tutorial2 == 0) {
				if (tutorial == 0 || tutorial > 4) {
					if (location.type == sf::Event::Closed) {
						return 0;
						window.close();
					}

					if (answer_box_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
						Polski::answer1.setFillColor(sf::Color::Red);
						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
							if (Polski::p_pytanie_int == 1) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 2) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 3) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 4) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 5) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 6) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 7) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 8) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 9) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 10) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 11) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 12) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 13) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 14) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 15) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 16) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 17) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 18) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 19) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 20) {
								Polski::p_pytanie_dobrze = 1;
							}

							if (Polski::p_pytanie_int == 21) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 22) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 23) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 24) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 25) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 26) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 27) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 28) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 29) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 30) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 31) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 32) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 33) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 34) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 35) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 36) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 37) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 38) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 39) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 40) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 41) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 42) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 43) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 44) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 45) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 46) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 47) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 48) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 49) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 50) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 51) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 52) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 53) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 54) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 55) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 56) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 57) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 58) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 59) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 60) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 61) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 62) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 63) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 64) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 65) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 66) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 67) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 68) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 69) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 70) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 71) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 72) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 73) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 74) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 75) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 76) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 77) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 78) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 79) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 80) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 81) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 82) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 83) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 84) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 85) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 86) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 87) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 88) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 89) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 90) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 91) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 92) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 93) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 94) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 95) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 96) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 97) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 98) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 99) {
								Polski::p_pytanie_dobrze = 0;
							}


							Polski::p_pytanie_koniec = 1;

						}
					}
					else {
						Polski::answer1.setFillColor(sf::Color::White);
					}

					if (answer_box2_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
						Polski::answer2.setFillColor(sf::Color::Red);
						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {

							if (Polski::p_pytanie_int == 1) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 2) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 3) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 4) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 5) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 6) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 7) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 8) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 9) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 10) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 11) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 12) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 13) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 14) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 15) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 16) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 17) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 18) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 19) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 20) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 21) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 22) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 23) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 24) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 25) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 26) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 27) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 28) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 29) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 30) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 31) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 32) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 33) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 34) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 35) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 36) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 37) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 38) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 39) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 40) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 41) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 42) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 43) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 44) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 45) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 46) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 47) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 48) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 49) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 50) {
								Polski::p_pytanie_dobrze = 1;
							}

							if (Polski::p_pytanie_int == 51) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 52) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 53) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 54) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 55) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 56) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 57) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 58) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 59) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 60) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 61) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 62) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 63) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 64) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 65) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 66) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 67) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 68) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 69) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 70) {
								Polski::p_pytanie_dobrze = 1;
							}

							if (Polski::p_pytanie_int == 71) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 72) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 73) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 74) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 75) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 76) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 77) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 78) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 79) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 80) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 81) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 82) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 83) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 84) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 85) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 86) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 87) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 88) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 89) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 90) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 91) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 92) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 93) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 94) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 95) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 96) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 97) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 98) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 99) {
								Polski::p_pytanie_dobrze = 0;
							}


							Polski::p_pytanie_koniec = 1;
						}
					}
					else {
						Polski::answer2.setFillColor(sf::Color::White);
					}

					if (answer_box3_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
						Polski::answer3.setFillColor(sf::Color::Red);
						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {

							if (Polski::p_pytanie_int == 1) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 2) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 3) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 4) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 5) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 6) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 7) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 8) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 9) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 10) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 11) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 12) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 13) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 14) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 15) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 16) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 17) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 18) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 19) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 20) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 21) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 22) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 23) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 24) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 25) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 26) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 27) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 28) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 29) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 30) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 31) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 32) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 33) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 34) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 35) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 36) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 37) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 38) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 39) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 40) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 41) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 42) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 43) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 44) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 45) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 46) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 47) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 48) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 49) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 50) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 51) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 52) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 53) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 54) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 55) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 56) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 57) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 58) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 59) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 60) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 61) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 62) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 63) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 64) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 65) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 66) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 67) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 68) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 69) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 70) {
								Polski::p_pytanie_dobrze = 0;
							}

							if (Polski::p_pytanie_int == 71) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 72) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 73) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 74) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 75) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 76) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 77) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 78) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 79) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 80) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 81) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 82) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 83) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 84) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 85) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 86) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 87) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 88) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 89) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 90) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 91) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 92) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 93) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 94) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 95) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 96) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 97) {
								Polski::p_pytanie_dobrze = 0;
							}
							if (Polski::p_pytanie_int == 98) {
								Polski::p_pytanie_dobrze = 1;
							}
							if (Polski::p_pytanie_int == 99) {
								Polski::p_pytanie_dobrze = 0;
							}

							Polski::p_pytanie_koniec = 1;
						}
					}
					else {
						Polski::answer3.setFillColor(sf::Color::White);
					}



					if (tip_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
							tip1 == false;
						}
					}
					if (tutorial < 5) {
						if (map_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

							if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
								ofstream cashfile("Save/cash.txt");
								cashfile << money;
								cashfile.close();
								goto Map;
							}
						}
					}

					if (tutorial < 5) {
						if (tree_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

							if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {

								goto Tree;
							}
						}
					}

					if (search_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
							if (tutorial == 23) {
								tutorial = 0;
							}

							if (Polski::p_pytanie_dobrze == 0) {
								if (mission == true) {
									Polski::p_pytanie_int = rand() % 99 + 1; //100
									Polski::p_pytanie_start = 0;
									Polski::p_pytanie_start = 1;
									Polski::p_pytanie_true = 0; //good answer for polish lesson
									//Polski::p_pytanie_int = 0; //numer pytania
									Polski::p_pytanie_dobrze = 0;
									Polski::p_pytanie_koniec = 0;

									question = 0;
								}

								if (mission == false) {
									question = rand() % 6 + 1;

									travelint = 2;
								}



							}

							if (Polski::p_pytanie_dobrze == 1) {
								if (mission == true) {
									//question = random;

									question = rand() % 9 + 1;

									//Polski::p_pytanie_dobrze = 0;
									//Polski::p_pytanie_start = 0;
									Polski::p_pytanie_true = 0; //good answer for polish lesson
									Polski::p_pytanie_int = 0; //numer pytania
									Polski::p_pytanie_dobrze = 0;
									Polski::p_pytanie_koniec = 0;
									Polski::p_pytanie_start = 0;

									//question_counter++;


									travelint = rand() % 5;
									travelint = travelint + 4;
									travelint = travelint - end_game_level;
									if (travelint <= 0) {
										travelint = 1;
									}
								}

								if (mission == false) {
									question = rand() % 6 + 1;

									travelint = 2;
								}



								travel = false;

								timeint = 0;

							}

							goto Time;


						}
					}


					if (wanted_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

						if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {


							scene = 2;
							fadeint = 0;
							mission = true;
							first = true;
							//day = 4;
							goto Mission;



						}

					}

				}
				else {
					if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
						if (tutorial_clock.getElapsedTime().asSeconds() > 2) {
							tutorial++;

							// minutes = minutes + 6;
							tutorial_clock.restart();
						}

					}
				}
			}
 else {
 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
	 if (tutorial_clock.getElapsedTime().asSeconds() > 2) {
		 tutorial++;

		 // minutes = minutes + 6;
		 tutorial_clock.restart();
	 }

 }
}
		}

		window.display();
	}
	mapa:for (;; ) {
		Map:window.clear();
		
		window.draw(map_sprite);
		
		map_marker_australia_sprite.setPosition(1480, 680);
		window.draw(map_marker_australia_sprite);
		
		if (money < 0) {
			money = 0;
		}

		//map_marker_greenland_sprite.setPosition(550, 200);
		//window.draw(map_marker_greenland_sprite);

		Save();

		//map_marker_africa_sprite.setPosition(850, 630);
		//window.draw(map_marker_africa_sprite);



		map_marker_europe_sprite.setPosition(810, 250);
		window.draw(map_marker_europe_sprite);

		map_marker_europehigh_sprite.setPosition(790, 200);
		window.draw(map_marker_europehigh_sprite);



		map_marker_asia_sprite.setPosition(1200, 190);
		window.draw(map_marker_asia_sprite);



		map_marker_usa_high_sprite.setPosition(200, 220);
		window.draw(map_marker_usa_high_sprite);

		map_marker_usa_sprite.setPosition(240, 320);
		window.draw(map_marker_usa_sprite);

		map_marker_base_sprite.setPosition(380, 680);
		window.draw(map_marker_base_sprite);



		pocket_sprite.setPosition(1370, 0);
		

		if (mission == false) {
			pocket_sprite.setTexture(mission_texture);
		}
		if (mission == true) {
			pocket_sprite.setTexture(pocket_texture);
		}
		window.draw(pocket_sprite);

		arrow_sprite.setPosition(100, 750);
		window.draw(arrow_sprite);


		if (timeclock.getElapsedTime().asSeconds() > 3) {
			minutes = minutes + 5;
			
			if (minutes == 60) {
				minutes = 0;
				hours++;
			}
			if (hours == 24) {
				hours = 0;
				day--;
			}
			
		
			timeclock.restart();
		}

			
		if (tutorial == 5) {
			main_tutorial5.setPosition(400, 400);
			window.draw(main_tutorial5);
		}
		if (tutorial == 6) {
			main_tutorial6.setPosition(400, 400);
			window.draw(main_tutorial6);
		}
		if (tutorial == 7) {
			main_tutorial7.setPosition(400, 400);
			window.draw(main_tutorial7);
		}
		if (tutorial == 8) {
			main_tutorial8.setPosition(800, 50);
			window.draw(main_tutorial8);
		}
		if (tutorial == 9) {
			main_tutorial9.setPosition(650, 10);
			window.draw(main_tutorial9);
		}
		if (tutorial == 10) {
			main_tutorial10.setPosition(650, 80);
			window.draw(main_tutorial10);
		}
		if (tutorial == 11) {
			main_tutorial11.setPosition(500, 200);
			window.draw(main_tutorial11);
		}
		if (tutorial == 12) {
			main_tutorial12.setPosition(550, 600);
			window.draw(main_tutorial12);
		}
		if (tutorial == 13) {
			main_tutorial13.setPosition(550, 600);
			window.draw(main_tutorial13);
		}
		
		

		hourfunction();
		hours_in.setString(hourin);

		minutefunction();
		minutes_in.setString(minutein);

		dayfunction();
		day_in.setString(dayin);

		monthfunction();
		month_in.setString(monthin);

		moneyfunction();
		money_in.setString(moneyin);



		
		if (hours < 10) {
			hours_in.setPosition(1460, 111);
		}
		if (hours >= 10) {
			hours_in.setPosition(1440, 111);
		}

		window.draw(hours_in);

		minutes_in.setPosition(1510, 111);
		if (minutes < 10) {
			zero.setPosition(1510, 111);
			window.draw(zero);
			minutes_in.setPosition(1540, 111);
		}
		
		window.draw(minutes_in);
		
		semicolon.setCharacterSize(35);
		semicolon.setPosition(1495, 111);
		window.draw(semicolon);


		day_in.setPosition(1540, 197);
		if (day >= 10) {
			day_in.setPosition(1510, 197);
		}
		if (mission == true) {
			window.draw(day_in);
		}


		money_in.setPosition(1540, 25);
		if (money >= 10) {
			money_in.setPosition(1510, 25);
		}
		if (money >= 100) {
			money_in.setPosition(1477, 25);
		}
		if (money >= 1000) {
			money_in.setPosition(1445, 25);
		}
		window.draw(money_in);
		


		sf::Event map;
		while (window.pollEvent(map)) {

			if (map.type == sf::Event::Closed) {
				return 0;
				window.close();
			}
			if (map.type == sf::Event::KeyReleased && map.key.code == sf::Keyboard::Escape) {
				goto Menu;

			}
			if (map_marker_australia_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				
				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					switc = 7;

					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);

					goto Map2;
					
				}
			} else {
				
			}
			if (map_marker_europe_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
				
					switc = 2;
					
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);
					
						goto Map2;
					

				}
			}
			
			if (map_marker_europehigh_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					
					switc = 1;
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);
					
						goto Map2;
					

				}
			}
			
			if (map_marker_usa_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					
					switc = 3;
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);
					
						goto Map2;
					

				}
			}
			if (map_marker_usa_high_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {

					switc = 5;
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);

					goto Map2;


				}
			}
			if (map_marker_base_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					
					switc = 4;
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);
					
						goto Map2;
					

				}
			}
			if (map_marker_asia_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {

					switc = 6;
					travel_type = 0;
					ekonomic_sprite.setTexture(class_fill_texture);
					business_sprite.setTexture(class_texture);
					first_sprite.setTexture(class_texture);

					goto Map2;


				}
			}
			if (tutorial == 0 || tutorial > 14) {
				if (arrow_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

					if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						goto Place;

					}
				}
			}
			else {

				if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					if (tutorial != 0) {
						if (tutorial_clock.getElapsedTime().asSeconds() > 2) {
							tutorial++;

							// minutes = minutes + 6;
							tutorial_clock.restart();
						}
					}
				}

			}
		}

		window.display();
	}
	fade:for (;; ) {
	Fade:window.clear();
		fade.setFillColor(sf::Color(0, 0, 0, fadeint));
		
		

		if (fadeint >= 255) {
			fadeint = 0;
			if (scene == 2) {
				
				goto Scene1;
			}
			if (scene == 0) {
				if (sound1 == false && sound2 == false && sound3 == false) {


					theme.setLoop(true);

					menu2.stop();
					theme.play();
				}
				if (sound1 == true) {
					mmusic1.setLoop(true);
					mmusic1.play();
				}
				if (sound2 == true) {
					mmusic3.setLoop(true);
					mmusic3.play();
				}
				if (sound3 == true) {
					mmusic2.setLoop(true);
					mmusic2.play();
				}



				goto Place;
			}
			if (scene == 1) {
				goto Map;
			}
			
		}
		if (ult_set == true) {
			if (fadeclock.getElapsedTime().asMilliseconds() > 1) {
				fadeint++;

				fadeclock.restart();
			}
		}
		if (med_set == true) {
			if (fadeclock.getElapsedTime().asMilliseconds() > 1) {
				fadeint = fadeint + 3;

				fadeclock.restart();
			}
			

		}
		if (low_set == true) {
			if (fadeclock.getElapsedTime().asMilliseconds() > 1) {
				fadeint = fadeint + 6;

				fadeclock.restart();
			}
		
		}
		if (scene == 0) {

			window.draw(background_sprite);

			title.setPosition(590, 220);
			window.draw(title);

			title2.setPosition(810, 290);
			window.draw(title2);

			play.setPosition(742, 580);
			window.draw(play);

			settings.setPosition(670, 650);
			window.draw(settings);

			credits.setPosition(690, 720);
			window.draw(credits);

			exit.setPosition(745, 790);
			window.draw(exit);

			
			//copyright.setPosition(845, 865);
			//copyright.setCharacterSize(20);
			//window.draw(copyright);
		}
		if (scene == 2) {
			window.draw(background_sprite);

			gui1_sprite.setPosition(370, 0);
			window.draw(gui1_sprite);

			map_icon.setPosition(420, 730);
			window.draw(map_icon);

			san_sprite.setPosition(383, 43);
			window.draw(san_sprite);

			san.setFillColor(sf::Color::White);
			san.setPosition(900, 330);
			window.draw(san);

			tree_icon.setScale(2.5, 2.5);
			tree_icon.setPosition(1040, 720);
			window.draw(tree_icon);

			search_icon.setPosition(6700, 6800);


			wanted_icon.setPosition(700, 730);
			window.draw(wanted_icon);


			pocket_sprite.setPosition(1370, 0);
			window.draw(pocket_sprite);
			if (mission == false) {
				pocket_sprite.setTexture(mission_texture);
			}
			//if (mission == true) {
			//	pocket_sprite.setTexture(pocket_texture);
			//}


			


			if (timeclock.getElapsedTime().asSeconds() > 3) {
				minutes = minutes + 5;

				if (minutes == 60) {
					minutes = 0;
					hours++;
				}
				if (hours == 24) {
					hours = 0;
					day--;
				}


				timeclock.restart();
			}





			hourfunction();
			hours_in.setString(hourin);

			minutefunction();
			minutes_in.setString(minutein);

			dayfunction();
			day_in.setString(dayin);

			monthfunction();
			month_in.setString(monthin);

			moneyfunction();
			money_in.setString(moneyin);




			if (hours < 10) {
				hours_in.setPosition(1460, 111);
			}
			if (hours >= 10) {
				hours_in.setPosition(1440, 111);
			}

			window.draw(hours_in);

			minutes_in.setPosition(1510, 111);
			if (minutes < 10) {
				zero.setPosition(1510, 111);
				window.draw(zero);
				minutes_in.setPosition(1540, 111);
			}

			window.draw(minutes_in);




			day_in.setPosition(1540, 197);
			if (day >= 10) {
				day_in.setPosition(1510, 197);
			}
			if (mission == true) {
				//window.draw(day_in);
			}


			money_in.setPosition(1540, 25);
			if (money >= 10) {
				money_in.setPosition(1510, 25);
			}
			if (money >= 100) {
				money_in.setPosition(1477, 25);
			}
			if (money >= 1000) {
				money_in.setPosition(1445, 25);
			}
			window.draw(money_in);
		}
		if (scene == 1) {
			window.draw(background_sprite);
			if (case0 == 0) {
				brieftext1.setPosition(50, 50);
				window.draw(brieftext1);
			}
			if (case0 == 1) {
				brieftext2.setPosition(50, 50);
				window.draw(brieftext2);
			}
			if (case0 == 2) {
				brieftext3.setPosition(50, 50);
				window.draw(brieftext3);
			}


			window.draw(shifttext);
			shifttext.setPosition(400, 600);
		}

		window.draw(fade);


		sf::Event time;
		while (window.pollEvent(time)) {

			if (time.type == sf::Event::Closed) {
				return 0;
				window.close();
			}
		}

		window.display();
	}
  scene1:for (;; ) {
	 Scene1:window.clear();

				window.draw(background_sprite);

				if (case0 == 0) {
					brieftext1.setPosition(50, 50);
					window.draw(brieftext1);
				}
				if (case0 == 1) {
					brieftext2.setPosition(50, 50);
					window.draw(brieftext2);
				}
				if (case0 == 2) {
					brieftext3.setPosition(50, 50);
					window.draw(brieftext3);
				}
				
				
				 shifttext.setPosition(400, 600);
				 window.draw(shifttext);
				


				 sf::Event wait;
				 while (window.pollEvent(wait)) {
					 if (wait.type == sf::Event::Closed) {
						 return 0;
						 window.close();
					 }
					 if (wait.type == sf::Event::MouseButtonReleased && wait.key.code == sf::Mouse::Left) {
						 scene = 1;
						 
						 if (case0 == -1) {
							 endgame = 2;
							 //money = money + 50;
						 }
						 if (case0 == 0) {
							 endgame = rand() % 3 + 4;
							 money = money + 50;
						 }
						 if (case0 == 1) {
							 endgame = rand() % 6 + 6;
							 money = money + 150;
						 }
						 if (case0 == 2) {
							 endgame = rand() % 9 + 9;
							 money = money + 300;
						 }
						 if (case0 == 3) {
							 endgame = rand() % 10 + 15;
						 }


						 targetplace = rand() % 9 + 1;
						 //targetplace++;
						 //first = true;
						 place = -1;
						 map_marker_base_sprite.setTexture(map_marker_fill_texture);
						 switc = 4;
						 day = 6 + time_level;
						 goto Fade;
						 
						 
						 
					 }
				 }

				 window.display();
			 }
   zegar:for (;; ) {
			 Time:window.clear();
			 window.draw(background_sprite);

			 if (ult_set == true) {
				 if (timeclock.getElapsedTime().asMilliseconds() > 0.1f) {
					 minutes++;
					 timeclock.restart();
				 }
			 }
			 if (med_set == true) {
				 if (timeclock.getElapsedTime().asMilliseconds() > 0.1f) {
					 
					 minutes = minutes + 3;
					 timeclock.restart();
				 }
			 }
			 if (low_set == true) {
				 if (timeclock.getElapsedTime().asMilliseconds() > 0.1f) {
					 
					 minutes = minutes + 6;
					 timeclock.restart();
				 }
			 }

			 if (minutes >= 60) {
				 minutes = 0;
				 hours++;
				 timeint++;

				  if (timeint == travelint) {
					  ofstream cashfile("Save/cash.txt");
					  cashfile << money;
					  cashfile.close();
					  timeint = 0;
					  timeclock.restart();
					  if (first == true || mission == false) {
						  first = false;
						  goto Place;
					  }
					  if (travel == true) {
						  good = false;


						  if (place == targetplace) {
								targetplace = rand() % 8;
								targetplace++;
							  good = true;
							  while (place == targetplace) {
								  targetplace = rand() % 8;
								  targetplace++;
							  }

						  }


						  travel = false;
						  goto Trans;
					  } else {
						  goto Place;
					  }
				 }
			 }
			 if (hours == 24) {
				 hours = 0;
				 day--;
			 }


			 hourfunction();
			 hours_in.setString(hourin);

			 minutefunction();
			 minutes_in.setString(minutein);

			 dayfunction();
			 day_in.setString(dayin);

			 //monthfunction();
			 //month_in.setString(monthin);

			// moneyfunction();
			// money_in.setString(moneyin);



			 window.draw(hours_in);
			 hours_in.setCharacterSize(50);
			 if (hours < 10) {
				 hours_in.setPosition(650, 342);
			 }
			 if (hours >= 10) {
				 hours_in.setPosition(630, 342);
			 }

			 minutes_in.setPosition(750, 342);
			 minutes_in.setCharacterSize(50);
			 window.draw(minutes_in);

			 day_in.setPosition(750, 421);
			 day_in.setCharacterSize(50);
			 if (mission == true) {
				 window.draw(day_in);
			 }

			// money_in.setPosition(600, 200);
			// money_in.setCharacterSize(50);
			// window.draw(money_in);


			 

			 sf::Event time;
			 while (window.pollEvent(time)) {

				 if (time.type == sf::Event::Closed) {
					 return 0;
					 window.close();
				 }
			 }


			 window.display();


		}
   mapa2:for (;; ) {
		 Map2:window.clear();

		Save();

		 window.draw(background_sprite);
		 canada.setPosition(7000, 3000);
		 san.setPosition(6450, 3000);
		 usa.setPosition(7450, 3000);
		 hungary.setPosition(6950, 3000);
		 sweden.setPosition(7000, 5000);
		 norway.setPosition(7000, 4000);
		 denmark.setPosition(6095, 3000);
		 russia.setPosition(7000, 3000);
		 aus.setPosition(6300, 3000);


		 if (switc == 1) {			
			 denmark.setPosition(685, 300);
			 window.draw(denmark);

			 norway.setPosition(700, 400);
			 window.draw(norway);

			 sweden.setPosition(700, 500);
			 window.draw(sweden);
		 }
		 if (switc == 2) {
			 hungary.setPosition(695, 300);
			 window.draw(hungary);		
			 pol.setPosition(705, 400);
			 window.draw(pol);
		 }
		 if (switc == 3) {
			 usa.setPosition(745, 300);
			 window.draw(usa);
		 }
		 if (switc == 4) {
			 san.setPosition(645, 300);
			 window.draw(san);			
		 }
		 if (switc == 5) {
			 canada.setPosition(700, 300);
			 window.draw(canada);			
		 }
		 if (switc == 6) {
			 russia.setPosition(700, 300);
			 window.draw(russia);
		 }
		 if (switc == 7) {
			 aus.setPosition(630, 300);
			 window.draw(aus);
		 }
		 
		 ekonomic_sprite.setPosition(380, 700);
		 window.draw(ekonomic_sprite);
		 text_box1_sprite.setPosition(460, 701);
		 window.draw(text_box1_sprite);
		 eco.setPosition(485, 718);
		 window.draw(eco);

		 if (tutorial == 14) {
			 main_tutorial14.setPosition(400, 600);
			 window.draw(main_tutorial14);

		 }
		 if (tutorial == 15) {
			 main_tutorial15.setPosition(100, 600);
			 window.draw(main_tutorial15);

		 }
		 if (tutorial == 16) {
			 main_tutorial16.setPosition(100, 600);
			 window.draw(main_tutorial16);
		 }
		 if (tutorial == 17) {
			 main_tutorial17.setPosition(400, 600);
			 window.draw(main_tutorial17);

		 }
		 if (tutorial == 18) {
			 main_tutorial18.setPosition(50, 600);
			 window.draw(main_tutorial18);

		 }

		 business_sprite.setPosition(680, 700);
		 window.draw(business_sprite);
		 text_box2_sprite.setPosition(760, 701);
		 window.draw(text_box2_sprite);
		 bus.setPosition(785, 718);
		 window.draw(bus);

		 first_sprite.setPosition(980, 700);
		 window.draw(first_sprite);
		 text_box3_sprite.setPosition(1060, 701);
		 window.draw(text_box3_sprite);
		 firstc.setPosition(1085, 718);
		 window.draw(firstc);


		 arrow_sprite.setPosition(100, 750);
		 window.draw(arrow_sprite);

		 pocket_sprite.setPosition(1370, 0);
		 window.draw(pocket_sprite);
		 pocket_sprite.setTexture(mission_texture);
		 if (mission == true) {
			 pocket_sprite.setTexture(pocket_texture);
		 }

		 if (cantafford == true) {
			 cantafford_sprite.setPosition(1303, 12);
			 window.draw(cantafford_sprite);
		 }

		 if (timeclock.getElapsedTime().asSeconds() > 3) {
			 minutes = minutes + 5;

			 if (minutes == 60) {
				 minutes = 0;
				 hours++;
			 }
			 if (hours == 24) {
				 hours = 0;
				 day--;
			 }


			 timeclock.restart();
		 }


		 


		 hourfunction();
		 hours_in.setString(hourin);

		 minutefunction();
		 minutes_in.setString(minutein);

		 dayfunction();
		 day_in.setString(dayin);

		 monthfunction();
		 month_in.setString(monthin);

		 moneyfunction();
		 money_in.setString(moneyin);



		 if (hours < 10) {
			 hours_in.setPosition(1460, 111);
		 }
		 if (hours >= 10) {
			 hours_in.setPosition(1440, 111);
		 }

		 window.draw(hours_in);

		 minutes_in.setPosition(1510, 111);
		 if (minutes < 10) {
			 zero.setPosition(1510, 111);
			 window.draw(zero);
			 minutes_in.setPosition(1540, 111);
		 }
		 window.draw(minutes_in);

		 day_in.setPosition(1540, 197);
		 if (day >= 10) {
			 day_in.setPosition(1510, 197);
		 }

		 if (mission == true) {
			 window.draw(day_in);
		 }


		 money_in.setPosition(1540, 25);
		 if (money >= 10) {
			 money_in.setPosition(1510, 25);
		 }
		 if (money >= 100) {
			 money_in.setPosition(1477, 25);
		 }
		 if (money >= 1000) {
			 money_in.setPosition(1445, 25);
		 }
		 window.draw(money_in);



		 sf::Event map;
		 while (window.pollEvent(map)) {

			 if (map.type == sf::Event::Closed) {
				 return 0;
				 window.close();
			 }
			 
			 if (tutorial == 0 || tutorial > 18) {
				 if (arrow_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 ekonomic_sprite.setTexture(class_fill_texture);
						 business_sprite.setTexture(class_texture);
						 first_sprite.setTexture(class_texture);

						 goto Map;

					 }
				 }
				 if (ekonomic_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 cantafford = false;
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {

						 ekonomic_sprite.setTexture(class_fill_texture);
						 business_sprite.setTexture(class_texture);
						 first_sprite.setTexture(class_texture);
						 travel_type = 0;
					 }
				 }
				 if (business_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {

					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 if (money >= 100 - 20 * flight_level || flight_level >= 5) {
							 ekonomic_sprite.setTexture(class_texture);
							 business_sprite.setTexture(class_fill_texture);
							 first_sprite.setTexture(class_texture);
							 travel_type = 1;
						 }
						 else {
							 cantafford = true;
						 }

					 }
				 }
				 else {
					 cantafford = false;
				 }
				 if (first_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 cantafford = false;
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 if (money >= 250 - 20 * flight_level) {
							 ekonomic_sprite.setTexture(class_texture);
							 business_sprite.setTexture(class_texture);
							 first_sprite.setTexture(class_fill_texture);
							 travel_type = 2;
						 }
						 else {
							 cantafford = true;
						 }

					 }
				 }
				 else {
					 cantafford = false;
				 }



				 if (hungary.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 hungary.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 12;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 12;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_fill_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }


						 place = 1;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;



						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 hungary.setFillColor(sf::Color::White);
				 }
				 if (norway.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 norway.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 14;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 14;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_fill_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 2;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 norway.setFillColor(sf::Color::White);
				 }
				 if (denmark.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 denmark.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 13;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 13;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_fill_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 3;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 denmark.setFillColor(sf::Color::White);
				 }
				 if (sweden.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 sweden.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 13;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 13;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_fill_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 4;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 sweden.setFillColor(sf::Color::White);
				 }
				 if (usa.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 usa.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 2;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 2;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_fill_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 5;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 usa.setFillColor(sf::Color::White);
				 }
				 if (canada.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 canada.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 3;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 3;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_fill_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 6;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 canada.setFillColor(sf::Color::White);
				 }
				 if (san.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 san.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 0;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 0;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_fill_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = -1;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 san.setFillColor(sf::Color::White);
				 }
				 if (russia.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 russia.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 18;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 18;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_fill_texture);



						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 7;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 russia.setFillColor(sf::Color::White);
				 }
				 if (aus.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 aus.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 25;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 25;

						 map_marker_australia_sprite.setTexture(map_marker_fill_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);



						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }

						 place = 8;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;

						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 aus.setFillColor(sf::Color::White);
				 }



				 if (pol.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
					 pol.setFillColor(sf::Color::Red);
					 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
						 futuretravelint = 12;

						 if (futuretravelint > actualtravelint) {
							 travelint = futuretravelint - actualtravelint;
						 }
						 if (futuretravelint < actualtravelint) {
							 travelint = actualtravelint - futuretravelint;
						 }
						 if (futuretravelint == actualtravelint) {
							 travelint = 1;
						 }
						 actualtravelint = 12;

						 map_marker_australia_sprite.setTexture(map_marker_texture);

						 map_marker_greenland_sprite.setTexture(map_marker_texture);

						 map_marker_africa_sprite.setTexture(map_marker_texture);

						 map_marker_europe_sprite.setTexture(map_marker_fill_texture);

						 map_marker_europehigh_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 map_marker_usa_sprite.setTexture(map_marker_texture);

						 map_marker_usa_high_sprite.setTexture(map_marker_texture);

						 map_marker_base_sprite.setTexture(map_marker_texture);

						 map_marker_asia_sprite.setTexture(map_marker_texture);

						 if (travel_type == 1) {
							 travelint = travelint * 0.6;

							 if (flight_level <= 4) {
								 money = money - 75 - 25 * flight_level;
							 }
						 }
						 if (travel_type == 2) {
							 travelint = travelint * 0.3;

							 money = money - 225 - 25 * flight_level;
						 }


						 place = 9;
						 question_counter = 0;
						 question = 0;
						 minutes = 0;
						 travel = true;



						 if (travelint <= 0) {
							 travelint = 1;
						 }

						 goto Time;

					 }
				 }
				 else {
					 pol.setFillColor(sf::Color::White);
				 }


			 }
			 else {

				 if (map.type == sf::Event::MouseButtonReleased && map.key.code == sf::Mouse::Left) {
					 if (tutorial_clock.getElapsedTime().asSeconds() > 2) {
						 tutorial++;

						 // minutes = minutes + 6;
						 tutorial_clock.restart();
					 }

				 }
			 }

}

		 window.display();
 }
   trans:for (;; ) {
	Trans:window.clear();

	window.draw(background_sprite);


	 if (good == true) {
		 good_text.setPosition(200, 350);
		 window.draw(good_text);
	 }
	 if (good == false) {
		 bad_text.setPosition(200, 350);
		 window.draw(bad_text);
	 }

	 window.draw(shifttext);
	 shifttext.setPosition(400, 600);



	 sf::Event wait;
	while (window.pollEvent(wait)) {
		if (wait.type == sf::Event::Closed) {
			return 0;
			window.close();
		}
		if (wait.type == sf::Event::MouseButtonReleased && wait.key.code == sf::Mouse::Left) {
			
			if (good == true) {
				currentgame++;
				if (currentgame == endgame) {
					popup.play();
					goto Victory;
				}
			}
			if (day <= 0) {
				popup.play();
				goto Lose;
			}


			goto Place;



		}
	}

	window.display();
 }
 victory:for (;; ) {
	 Victory:window.clear();
		 window.draw(background_sprite);

		 victory_text.setPosition(100, 350);
		 window.draw(victory_text);

		 window.draw(shifttext);
		 shifttext.setPosition(400, 600);



		 sf::Event victory;
		 while (window.pollEvent(victory)) {
			 if (victory.type == sf::Event::Closed) {
				 return 0;
				 window.close();
			 }
			 if (victory.type == sf::Event::MouseButtonReleased && victory.key.code == sf::Mouse::Left) {

				 //level++;
				 


				 if (case0 == 0) {
					 money = money + 250;
				 }
				 if (case0 == 1) {
					 money = money + 300;
					 points++;
				 }
				 if (case0 == 2) {
					 money = money + 500;
					 points++;
				 }
				 theme.stop();
				 menu2.play();
				 mission = false;
				 scene = 1;
				 hours_in.setCharacterSize(35);
				 minutes_in.setCharacterSize(35);
				 day_in.setCharacterSize(35);
				 money_in.setCharacterSize(35);


				 ofstream cashfile("Save/cash.txt");
				 cashfile << money;
				 cashfile.close();
				 ofstream levelfile("Save/level.txt");
				 levelfile << level;
				 levelfile.close();
				 ofstream level1file("Save/level1.txt");
				 level1file << end_game_level;
				 level1file.close();
				 ofstream level2file("Save/level2.txt");
				 level2file << flight_level;
				 level2file.close();
				 ofstream level3file("Save/level3.txt");
				 level3file << time_level;
				 level3file.close();
				 ofstream pointsfile("Save/points.txt");
				 pointsfile << points;
				 pointsfile.close();

				 goto Map;


			 }
		 }

		 window.display();
   }
	lose:for (;; ) {
	 Lose:window.clear();
		 window.draw(background_sprite);

		 lose_text.setPosition(100, 350);
		 window.draw(lose_text);

		 window.draw(shifttext);
		 shifttext.setPosition(400, 600);



		 sf::Event victory;
		 while (window.pollEvent(victory)) {
			 if (victory.type == sf::Event::Closed) {
				 return 0;
				 window.close();
			 }
			 if (victory.type == sf::Event::MouseButtonReleased && victory.key.code == sf::Mouse::Left) {

				 theme.stop();
				 menu2.play();
				 mission = false;
				 scene = 1;
				 hours_in.setCharacterSize(35);
				 minutes_in.setCharacterSize(35);
				 day_in.setCharacterSize(35);
				 money_in.setCharacterSize(35);
				 goto Map;


			 }
		 }

		 window.display();
	 }
    Tree:for (;; ) {
		 window.clear();
		 window.draw(background_sprite);

		

		 upgrade_sprite.setPosition(350, 0);
		 window.draw(upgrade_sprite);



		 plus1_sprite.setTexture(plus1_texture);
		 


		 plus2_sprite.setTexture(plus1_texture);
		 


		 plus3_sprite.setTexture(plus1_texture);
		 
		 if (money < 200) {
			 plus1_sprite.setTexture(plus2_texture);

			 plus2_sprite.setTexture(plus2_texture);

			 plus3_sprite.setTexture(plus2_texture);
		 }
		 
		 
		 if (end_game_level >= 1) {
			 bar_sprite.setPosition(980, 308); //315 
			 window.draw(bar_sprite);
		 }
		 if (end_game_level >= 2) {
			 bar_sprite.setPosition(994, 308); //+65
			 window.draw(bar_sprite);
		 }
		 if (end_game_level >= 3) {
			 bar_sprite.setPosition(1007, 308);
			 window.draw(bar_sprite);
		 }
		 if (end_game_level >= 4) {
			 bar_sprite.setPosition(1020, 308); 
			 window.draw(bar_sprite);
		 }
		 if (end_game_level >= 5) {
			 bar_sprite.setPosition(1035, 308);
			 window.draw(bar_sprite);
		 }
		 if (end_game_level >= 6) {
			 bar_sprite.setPosition(1048, 308);
			 window.draw(bar_sprite);
		 }
		 if (end_game_level == 7) {
			 bar_sprite.setPosition(1061, 308);
			 window.draw(bar_sprite);
			 plus1_sprite.setTexture(plus2_texture);
		 }

		 if (flight_level >= 2) {
			 bar_sprite.setPosition(433, 542);
			 window.draw(bar_sprite);
		 }
		 if (flight_level >= 3) {
			 bar_sprite.setPosition(446, 542);
			 window.draw(bar_sprite);
		 }
		 if (flight_level >= 4) {
			 bar_sprite.setPosition(460, 542);
			 window.draw(bar_sprite);
		 }

		 if (flight_level >= 5) {
			 bar_sprite.setPosition(474, 542);
			 window.draw(bar_sprite);
		 }
		 if (flight_level >= 6) {
			 bar_sprite.setPosition(487, 542);
			 window.draw(bar_sprite);
		 }
		 if (flight_level >= 7) {
			 bar_sprite.setPosition(500, 542);
			 window.draw(bar_sprite);
		 }
		 if (flight_level == 8) {
			 bar_sprite.setPosition(515, 542);
			 window.draw(bar_sprite);
			 plus2_sprite.setTexture(plus2_texture);
		 }




		 if (time_level >= 1) {
			 bar_sprite.setPosition(996, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level >= 2) {
			 bar_sprite.setPosition(996 + 13, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level >= 3) {
			 bar_sprite.setPosition(996 + 27, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level >= 4) {
			 bar_sprite.setPosition(996 + 40, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level >= 5) {
			 bar_sprite.setPosition(996 + 55, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level >= 6) {
			 bar_sprite.setPosition(996 + 68, 831);
			 window.draw(bar_sprite);
		 }
		 if (time_level == 7) {
			 bar_sprite.setPosition(996 + 82, 831);
			 window.draw(bar_sprite);
			 plus3_sprite.setTexture(plus2_texture);
		 }







		 gold_up_sprite.setPosition(355, 12);
		 window.draw(gold_up_sprite);

		 moneyfunction();
		 money_in.setString(moneyin);
		 money_in.setCharacterSize(30);
		 money_in.setPosition(490, 20);
		 if (money >= 10) {
			 money_in.setPosition(485, 20);
		 }
		 if (money >= 100) {
			 money_in.setPosition(440, 20); //+140
		 }
		 if (money >= 1000) {
			 money_in.setPosition(420, 20);
		 }
		 window.draw(money_in);

		 
		 

	
		 plus1_sprite.setPosition(1090, 314);
		 window.draw(plus1_sprite);

		 plus2_sprite.setPosition(540, 548);
		 window.draw(plus2_sprite);

		 plus3_sprite.setPosition(1100, 835);
		 window.draw(plus3_sprite);


		 arrow_sprite.setPosition(100, 750);
		 window.draw(arrow_sprite);



		 sf::Event tree;
		 while (window.pollEvent(tree)) {
			 if (tree.type == sf::Event::Closed) {
				 return 0;
				 window.close();
			 }
			 if (arrow_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				 if (tree.type == sf::Event::MouseButtonReleased && tree.key.code == sf::Mouse::Left) {

					 ofstream cashfile("Save/cash.txt");
					 cashfile << money;
					 cashfile.close();
					 ofstream levelfile("Save/level.txt");
					 levelfile << level;
					 levelfile.close();
					 ofstream level1file("Save/level1.txt");
					 level1file << end_game_level;
					 level1file.close();
					 ofstream level2file("Save/level2.txt");
					 level2file << flight_level;
					 level2file.close();
					 ofstream level3file("Save/level3.txt");
					 level3file << time_level;
					 level3file.close();
					 ofstream pointsfile("Save/points.txt");
					 pointsfile << points;
					 pointsfile.close();

					 money_in.setCharacterSize(35);
					 text_box1_sprite.setScale(2.5f, 1.8f);
					 goto Place;

				 }
			 }
			 if (plus1_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				 if (tree.type == sf::Event::MouseButtonReleased && tree.key.code == sf::Mouse::Left) {
					 if (end_game_level < 7 && money >= 200) { //&& points >= 1
						 money = money - 200;
						 end_game_level++; 
						 //points--;
					 }

				 }
			 }
			 if (plus2_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				 if (tree.type == sf::Event::MouseButtonReleased && tree.key.code == sf::Mouse::Left) {
					 if (flight_level < 8 && money >= 200) { //&& points >= 1
						 money = money - 200;
						 flight_level++;
						 //points--;
					 }

				 }
			 }
			 if (plus3_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				 if (tree.type == sf::Event::MouseButtonReleased && tree.key.code == sf::Mouse::Left) {
					 if (time_level < 7 && money >= 200) { //&& points >= 1
						 money = money - 200;
						 time_level++;
						 //points--;
					 }

				 }

			 }
			 
		 }


		 window.display();
		}
 Mission:for (;; ) {
		window.clear();

		window.draw(background_sprite);


		level1_icon.setPosition(400, 100);
		window.draw(level1_icon);

		level2_icon.setPosition(400, 300);
		window.draw(level2_icon);

		level3_icon.setPosition(400, 500);
		window.draw(level3_icon);

		hard.setPosition(600, 550);
		normal.setPosition(600, 350);
		easy.setPosition(600, 150);
		if (easyb == 1) {
			window.draw(easy);
		}
		if (normalb == 1) {
			window.draw(normal);
		}
		if (hardb == 1) {
			window.draw(hard);
		}

		sf::Event dif;
		while (window.pollEvent(dif)) {

			if (dif.type == sf::Event::Closed) {
				return 0;
				window.close();
			}
			if (level1_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				easyb = 1;
				if (dif.type == sf::Event::MouseButtonReleased && dif.key.code == sf::Mouse::Left) {
					easyb = 0;
					case0 = 0;
					goto Fade;
				}
			}
			else {
				easyb = 0;
			}
			if (level2_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				normalb = 1;
				if (dif.type == sf::Event::MouseButtonReleased && dif.key.code == sf::Mouse::Left) {
					normalb = 0;
					case0 = 1;
					goto Fade;
				}
			}
			else {
				normalb = 0;
			}
			if (level3_icon.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
				hardb = 1;
				if (dif.type == sf::Event::MouseButtonReleased && dif.key.code == sf::Mouse::Left) {
					hardb = 0;
					case0 = 2;
					goto Fade;
				}
			}
			else {
				hardb = 0;
			}
		}
		window.display();
  }


Cars:for (;; ) {
 window.clear();
 shifttext.setFont(xfont);
 shifttext.setCharacterSize(85);
 shifttext.setString("click anywhere to start the race");
 shifttext.setPosition(600, 700);
// window.draw(shifttext);

 Polski::car_game = 1;
 if (race_start == 1) {
	 car_plx = car_plx + speed;
 }
 else {
	 start.setPosition(600, 600);
	 window.draw(start);
	 
 }


 road.setPosition(-car_plx / 10, 0);
 window.draw(road);

 if (car_plx > 2500) {
	 car_plx = 0;
 }

 cout << 100 + player_random + speed << endl;

 box.setPosition(0, 230);
 window.draw(box);

 car.setPosition(100 + player_random + speed, 0);
 window.draw(car);

 car2.setPosition(100 + op_random, -120);
 window.draw(car2);
 

 if (100 + player_random + speed < 1420) {
	 if (race_start == 1) {
		 answer_box_cars_sprite.setPosition(650, 450);
		 window.draw(answer_box_cars_sprite);

		 answer_box_cars_sprite2.setPosition(650, 550);
		 window.draw(answer_box_cars_sprite2);

		 answer_box_cars_sprite3.setPosition(650, 650);
		 window.draw(answer_box_cars_sprite3);


		 Polski::Polskie_pytanie(window, xfont);
	 }
 }
 else {
	 you_win.setPosition(700, 500);
	 window.draw(you_win);
	 
	 shifttext.setPosition(400, 600);
	 window.draw(shifttext);
	 race_start = 0;
	 race_end = 1;
 }
 
 if (100 + op_random > 1420) {
	 you_lose.setPosition(700, 500);
	 window.draw(you_lose);

	 shifttext.setPosition(400, 600);
	 window.draw(shifttext);

	 race_end = 1;

	 race_start = 0;
 }




 if (race_start == 1) {
	 if (boost == 0) {
		 if (ger_clock.getElapsedTime().asMilliseconds() > 100) {

			op_random = op_random + rand() % 30 - 12;
			if (speed > 1) {
				speed--;
			} 
			 player_random = player_random + rand() % 30 - 15;
			 ger_clock.restart();
		 }
	 }
	 if (boost > 0) {
		 boost--;
		 speed = speed + boost;

	 }
 }
 else {
	 window.draw(shifttext);
 }

 if (100 + player_random + speed > 1420) {

 }



 sf::Event location;
 while (window.pollEvent(location)) {


	 //Polski::Polskie_pytanie_Events(location, window);
	 
		 if (location.type == sf::Event::Closed) {
			 return 0;
			 window.close();
		 }

		 if (answer_box_cars_sprite.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
			 Polski::answer1.setFillColor(sf::Color::Red);
			 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
				 race_start = 1;
				 if (Polski::p_pytanie_int == 101) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 102) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 103) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 104) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 105) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 106) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 107) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 108) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 109) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 110) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 111) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 112) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 113) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 114) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 115) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 116) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 117) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 118) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 119) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 120) {
					 Polski::p_pytanie_dobrze = 0;
				 }

				 if (Polski::p_pytanie_int == 121) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 122) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 123) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 124) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 125) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 126) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 127) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 128) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 129) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 130) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 131) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 132) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 133) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 134) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 135) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 136) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 137) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 138) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 139) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 140) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 141) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 142) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 143) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 144) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 145) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 146) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 147) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 148) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 149) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 150) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 151) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 152) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 153) {
					 Polski::p_pytanie_dobrze = 1;
				 }

				 Polski::p_pytanie_int = rand() % 53 + 101;
				 //Polski::p_pytanie_int = rand() % 50 + 101;
				 //Polski::p_pytanie_dobrze = 0;
				 Polski::p_pytanie_koniec = 1;

				 if (Polski::p_pytanie_dobrze == 1) {
					 boost = rand() % 10 + 10;
				 }
				 if (Polski::p_pytanie_dobrze == 0) {
					 speed = speed - 30;
				 }
			 }
		 }
		 else {
			 Polski::answer1.setFillColor(sf::Color::White);
		 }
		 if (answer_box_cars_sprite2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
			 Polski::answer2.setFillColor(sf::Color::Red);
			 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
				 race_start = 1;
				 if (Polski::p_pytanie_int == 101) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 102) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 103) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 104) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 105) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 106) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 107) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 108) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 109) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 110) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 111) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 112) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 113) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 114) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 115) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 116) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 117) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 118) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 119) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 120) {
					 Polski::p_pytanie_dobrze = 1;
				 }

				 if (Polski::p_pytanie_int == 121) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 122) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 123) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 124) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 125) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 126) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 127) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 128) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 129) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 130) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 131) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 132) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 133) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 134) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 135) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 136) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 137) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 138) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 139) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 140) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 141) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 142) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 143) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 144) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 145) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 146) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 147) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 148) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 149) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 150) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 151) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 152) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 153) {
					 Polski::p_pytanie_dobrze = 0;
				 }

				 Polski::p_pytanie_int = rand() % 53 + 101;
				 //Polski::p_pytanie_int = rand() % 50 + 101;
				 
				 Polski::p_pytanie_koniec = 1;

				 if (Polski::p_pytanie_dobrze == 1) {
					 boost = rand() % 10 + 10;
				 }
			 }
		 }
		 else {
			 Polski::answer2.setFillColor(sf::Color::White);
		 }
		 if (answer_box_cars_sprite3.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
			 Polski::answer3.setFillColor(sf::Color::Red);
			 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
				 race_start = 1;
				 if (Polski::p_pytanie_int == 101) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 102) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 103) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 104) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 105) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 106) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 107) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 108) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 109) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 110) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 111) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 112) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 113) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 114) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 115) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 116) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 117) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 118) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 119) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 120) {
					 Polski::p_pytanie_dobrze = 0;
				 }

				 if (Polski::p_pytanie_int == 121) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 122) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 123) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 124) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 125) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 126) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 127) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 128) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 129) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 130) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 131) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 132) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 133) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 134) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 135) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 136) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 137) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 138) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 139) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 140) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 141) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 142) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 143) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 144) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 145) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 146) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 147) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 148) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 149) {
					 Polski::p_pytanie_dobrze = 1;
				 }
				 if (Polski::p_pytanie_int == 150) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 151) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 152) {
					 Polski::p_pytanie_dobrze = 0;
				 }
				 if (Polski::p_pytanie_int == 153) {
					 Polski::p_pytanie_dobrze = 0;
				 }

				// Polski::p_pytanie_dobrze = 1;
				 Polski::p_pytanie_int = rand() % 53 + 101;
				// Polski::p_pytanie_int = rand() % 50 + 101;

				 if (Polski::p_pytanie_dobrze == 1) {
					 boost = rand() % 10 + 10;
				 }

				 Polski::p_pytanie_koniec = 1;
			 }
		 }
		 else {
			 Polski::answer3.setFillColor(sf::Color::White);
		 }


		 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left && race_end == 1) {
			 race_end = 0;
			 player_random = 0;
			 op_random = 0;
			 speed = 0;
			 boost = 0;
		 }
		 if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left && race_end == 0 && race_start == 0) {
			 race_start = 1;
			 speed = 50;
		 }
		 

 }
 window.display();

}



BOOK:sf::Text start_story;
start_story.setFont(xfont);
start_story.setString("Lord Of The Flies Game");
start_story.setCharacterSize(85);




sf::Text book_text;
book_text.setFont(xfont);
book_text.setString("this contains book text");
book_text.setCharacterSize(60);

sf::Text choice1;
choice1.setFont(xfont);
choice1.setString("this contains choice 1");
choice1.setCharacterSize(60);

sf::Text choice2;
choice2.setFont(xfont);
choice2.setString("this contains choice 2");
choice2.setCharacterSize(60);


sf::Texture bookbg_texture;
bookbg_texture.loadFromFile("Graphic/book_back.png");

sf::Sprite bookbg;
bookbg.setTexture(bookbg_texture);

bookbg.setScale(1.467f, 1.425f);

sf::Texture bookbox_texture;
bookbox_texture.loadFromFile("Graphic/book_box.png");

sf::Sprite bookbox;
bookbox.setTexture(bookbox_texture);

bookbox.setScale(1.7f, 0.5f);


sf::Sprite bookbox2;
bookbox2.setTexture(bookbox_texture);

bookbox2.setScale(1.7f, 0.5f);


sf::Sprite resetbox;
resetbox.setTexture(bookbox_texture);
resetbox.setScale(0.3f, 0.3f);

sf::Text resetText;
resetText.setFont(xfont);
resetText.setString("Reset");
resetText.setCharacterSize(60);


bool start_story_bool = 0;

int story_tracker = 0; //0 //11



int sideStory_tracker = 0; //0 //11

bool sideStory = 0;



bool choice = 0;

int choice_outcome = 0;

sf::Clock select_clock;

choice1.setPosition(50, 600);
choice2.setPosition(50, 700);
book_text.setPosition(50, 50);


int jack = 0;

//music
sf::Music mmusic10;
mmusic10.openFromFile("Music/book.ogg");
mmusic10.setVolume(30);

mmusic10.play();


for (;; ) {
window.clear();

window.draw(bookbg);


if (story_tracker > 0) {
	resetbox.setPosition(1320, 20);
	window.draw(resetbox);

	resetText.setPosition(1410, 0);
	window.draw(resetText);
}

//


//if (story_tracker > 0) {
	window.draw(book_text);
//}


choice = 0;

switch (story_tracker) {
case 0:
	start_story.setPosition(500, 100);
	window.draw(start_story);

	book_text.setString("\n\n\n\n                            Click anywhere to start the story");
	break;
case 1:
	book_text.setString("You just woke up in the middle of a jungle, not knowing anything.\nThe last thing you could remember is when you were looking out of the window\nand you saw flames coming out of the plane you were in.");
	break;
case 2:
	book_text.setString("You started breathing quickly. The questions that came to your mind were: Where am I?, Am I here alone?, What should I do next?\nBut then you heard a deep, harsh voice.\nWithout a second thought, you followed the voice. The sound brought you to the beach, where you saw a gathering group of boys.");
	break;
case 3:
	book_text.setString("You were standing with the boys, but nobody seemed to be interested in you\nso you decide to make the first move.\n\nso you’ve decided to make the first move and talk to somebody\nWho did you choose?");
	choice = 1;

	choice1.setString("The one with the shell");
	choice2.setString("The one who's asking boys' names");

	break;
case 4:
	if (choice_outcome == 1) {
		book_text.setString("You've chosen the fair-haired boy. You came up to him and introduced yourself.\nThe boy said his name is Ralph. He blew the conch so that everyone could gather.\nYou were talking a little bit, but suddenly he stopped and started looking at something");
	}
	if (choice_outcome == 2) {
		book_text.setString("You've chosen the fat boy with the glasses. You came up to him and introduced yourself.\nOnce he wanted to present himself, the guy with the conch standing next to you,\nnamed Ralph shouted that his name was Piggy.\nEveryone started laughing, so the boy turned red. Suddenly everyone went silent.\nThey were staring at something on the beach");
	}
	break;
case 5:
	book_text.setString("A group of cloaked boys emerged from the jungle. As they came up, one of them,\nthe leader named Jack, spoke up to Ralph");
	break;
case 6:
	book_text.setString("You couldn't hear anything, but about two minutes later\nSomeone said: - Let's have a vote!");
	break;
case 7:
	book_text.setString("You were about to pick the chief.\nWho didd you vote for?");

	choice = 1;

	choice1.setString("Ralph");
	choice2.setString("Jack");
	break;
case 8:
	if (choice_outcome == 1) {
		book_text.setString("You think you made the right choice because everyone else,\nexcept cloaked boys, raised their hands. From now the chief is Ralph");
	}
	if (choice_outcome == 2) {
		book_text.setString("You thought from the beginning he would be a good chief.\nThe group of clocked boys behaved obediently to him\nit made him seem like a good leader.\nEven though youand his group of boys raised hands\nhe lost because no one else had chosen him.\nRalph is the chief");
	}
	break;
case 9:
	book_text.setString("Jack seemed a bit upset. However, it changed when he and his boys become the hunters");
	break;
case 10:
	book_text.setString("As the new leader, Ralph decided to look around to see if the place is an island or not\nHe choosed Jack, Simon, and you as his partners in exploring the land");
	break;
case 11:
	book_text.setString("You're not really happy with it, but on the other hand,\nyou felt pleased to be included in such an important event");
	break;
case 12:
	book_text.setString("Four of you went through the jungle. The way wasn't easy because it's full of creepers\nmaking it hard to get from one path to another.\nMainly, Ralph and Jack are the ones who were speaking,\nSimon also said something from time to time, but he seemed a bit mysterious to you");
	break;
case 13:
	book_text.setString("After some time, Ralph decided to climb the mountain.\nThe way up was easy this time.\n\nYou're on top; you saw that your predictions were right.\nIt's an island. It means there is less chance to be rescued.");
	break;
case 14:
	book_text.setString("Chapter 2");
	break;
case 15:
	book_text.setString("As you came back down on the beach\nRalph immediately called an assembly to inform everyone that we were on an island.\nBesides that, Ralph also provided some rules:\nthe person with the conch shell has a right to speak.");
	break;
case 16:
	book_text.setString("Suddenly one of the littluns stood up and started talking about some beastie,\na snake - thing in the woods, which made everyone laugh.\nThe little boy looked at you as if he was asking for help.");
	break;
case 17:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("You stood up and took the conch from Ralph in order to give it to the little boy.");
	choice2.setString("You looked away and were laughing with the others.");
	break;
case 18:
	if (choice_outcome == 1) {
		book_text.setString("Everybody went silent. You came up to Ralph wanting to take the conch from him\nbut he kept it firmly and shouted: “But there isn’t a beast!” Then you said:\n„We should at least listen to what the littlun has to say.”\nHe continued: “But there isn’t a beast!”.\nYou started to argue when suddenly Jack suggested:\n„We'll look around and see if the beast is real when we go hunting.”\nRalph looked as if he was about to say something, but apparently\nhe changed his mind and went on to the next thing he wanted to discuss.");
	}
	if (choice_outcome == 2) {
		book_text.setString("You felt a bit awkward, but you didn’t want to stand out, so you kept laughing.\nSuddenly, Piggy came up to the littlun to listen to him\nand let him speak by giving him the conch.\nRalph seeing it, shouted: “But there isn’t a beast!”.\nThe boys started arguing, but then Jack spoke up.\nHe suggested that he and his hunters would look around and see if the beast was real.\nRalph opened his mouth as he was about to say something to Jack, but he didn't.\nHe took the conch from the littlun and moved on to the next thing\nhe was planning to discuss.");
	}
	break;
case 19:

	if (sideStory_tracker == 0) {
		book_text.setString("We want to be rescued, right? – said the chief.\nEveryone nodded, including you.\nI've been thinking, and I've decided that we need to make a fire\nat the top of the mountain, so the ships coming by might see the smoke,\nwhich increases the chances for us to escape from here\nRalph said it loudly so that everyone could hear\nAll the boys started cheering and began to be excited");
	}
	if (sideStory_tracker == 1) {
		book_text.setString("You went to the top of the mountain!\nAs you reached the top, everyone spread around to find some sticks to make a pile\nThe only problem now was how to make the fire\nJack and Ralph were looking at each other with confusion and awkwardness.\nThen appeared Piggy, and all the eyes went at him and his glasses\nJack immediately grabbed the boy's glasses.\nIt made him super angry, but Jack didn't seem to worry about it.\nJack bent down at the pile and lighted the fire\nthen returned the glasses.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}
	
	
	break;
case 20:
	book_text.setString("Jack was standing in front of the fire and was staring at it.He grunted and said.\n-My hunters and I will split into groups and keep the fire going.\nEveryone looked at him with admiration.\nThose words made him look mature and responsible, probably as he intended.\nEverything was fine until unexpectedly, the fire became vast and uncontrollable\nAll the boys started chanting. Instantaneously the forest was set up in a fire.\nEveryone was more excited except one person, Piggy\nWait. Where's the littlun who was talking about the beastie?\nhe shouted and looking as if he was about cry\nThat was the moment when everyone realized the little boy stayed in the forest.");
	break;
case 21:
	book_text.setString("Chapter 3");
	break;
case 22:
	if (sideStory_tracker == 0) {
		book_text.setString("It was the next day\nyou were sitting all alone by the waterin the shadow of a palm.\nYou've been watching Ralph and Simon trying to build the shelters for a while.\nYou could see that they were frustrated as the huts keep falling\neventually, you decided to help them.");
	}
	if (sideStory_tracker == 1) {
		book_text.setString("As you came up, from the woods appeared Jack\nHe came back from hunting, but apparently, it was unsuccessful\nas he didn't have any meat with him\nHe seemed a bit concerned. He sat with you and said\nIf you're hunting sometimes, you catch yourself feeling as if— He flushed suddenly\nThere's nothing in it, of course. Just a feeling.\nBut you can feel as if you're not hunting\nbut being hunted, as if something's behind you all the time in the jungle\nThe boys stayed silent, so are you\nBut Jack continued, As if it wasn't a good island.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}
	
	
	
	
	break;
case 23:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("You believe in the beastie.");
	choice2.setString("You don't believe in the beastie.");
case 24:
	if (choice_outcome == 1) {
		book_text.setString("You lowered your head and said: I heard the littluns the other night.\nThey were talking and screaming.\nNot only the littluns, some of the older ones too.\nI think they had some nightmares. They are frightened.\nYou also had a nightmare, but you didn't want the boys to know.\nAs you finished, Simon joined you, As if, the beastie, the beastie was real.\nHe whispered, as if he didn't want anyone or anything to hear he's just said");
	}
	if (choice_outcome == 2) {
		book_text.setString("If you ask me, I don't believe in any ghosts, you said.\nJack looked at you skeptically but didn't say anything.\nInstead, Simon spoke - the boys are frightened, don't you think.\nHe glanced at Ralph. Then Ralph said\nI heard the littluns the other night. They were talking and screaming.\nNot only the littluns, some of the older ones too.\nI think they had some nightmares. You may be right, Simon.\nThey looked at each other, then lowered their heads.");
	}
	break;
case 25:
	book_text.setString("Suddenly Ralph seemed irritated, You, Jack, you're only thinking about hunting\nSimon and I have been trying to build these shelters all day long when you did nothing\nHe said, looking at Jack, who spoke - we want meat, right?.\nAnd we don't get any, replied Ralph.\nYou could feel the tension between the boys, which happened for the first time.\nThey stood up both at the same time and went down to the beach.\nYou stayed with Simon; at least you thought you did\nbecause once you turned to face him, he wasn't there.");
	break;
case 26:
	book_text.setString("Chapter 4");
	break;
case 27:
	book_text.setString("The following day you, Piggy, and Ralph were sitting at the beach\nyou were watching littluns playing in the water and building castles from sand\nYou weren't talking at all until on the horizon appeared a ship\nRalph leaped into his feet in a second and started breathing quickly\nHe looked at the mountain top to see the signal fire, but there wasn't any\nImmediately Ralph rushed into the forest\nYou and Piggy looked at each other and ran after him\nWhen you were halfway to the top of the mountain\nyou heard some noises - someone was shouting.");
	break;
case 28:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("You follow the screaming");
	choice2.setString("You ignore the screaming and continue on your way");
	break;
case 29:
	if (choice_outcome == 1) {
		book_text.setString("Your curiosity was stronger than you.\nYou knew that you should be on the top of the mountain with Ralph\nbut what if somebody's hurt you thought\nYou chase the noise, and suddenly you saw Jack and the other hunters except Simon.\nYou hid behind a tree and saw them in a circle chanting: Kill the pig.\nCut her throat. Spill her blood. Jack was standing there holding a dead pig.\nBoys were coming closer and closer to you, so you ran to the mountain top\nas you didn't want the hunters to see you.\nYou got to the top, and a few minutes later\nJack and others were here too.");
	}
	if (choice_outcome == 2) {
		book_text.setString("You wanted to see what was that screaming\nbut you knew it wasn't the most important at the moment\nWhen you got to the top mountain, you saw that the fire was dead\nand the watchers were gone\nRalph was running back and forth, repeating\nThey let the bloody fire go out\nThen from the forest appeared Jack and his hunters\nlooking at each other excitedly and chanting\nKill the pig. Cut her throat. Spill her blood.\nJack was holding a dead pig.");
	}
	break;
case 30:

	
	if (sideStory_tracker == 0) {
		book_text.setString("Ralph was all red with anger staring at Jack and said with a severe tone,\nYou let the fire go out. As if he didn't hear Ralph\nJack spoke: Look, we have killed a pig\nRalph repeated himself. This repetition made Jack uneasy\nHe knew it was the twin's turn today to keep the fire going\nand he took them with him for hunting\nso he looked at the twins and then back at Ralph");
	}
	if (sideStory_tracker == 1) {
		book_text.setString("We had to have them in the hunt, he said\nor there wouldn't have been enough for a ring\nHe flushed, conscious of a fault\nThere was a silence for a few seconds\nThere was a ship. Ralph looked straight into Jack's eyes\nhis voice shook, They might have seen us. We might have gone home\nYou could hear Piggy's sobbing in the back\nYou didn't ought to let that fire out.\nPiggy and the wails of agreement from some of the hunters, drove Jack to violence.\nHe stuck his hist into Piggy's stomach and then hit his head\nso that his glasses flew off and tinkled on the rocks.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}
	
	
	
	break;
case 31:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("You pick up Piggy's glasses");
	choice2.setString("You don't pick up his glasses");
	break;
case 32:
	if (choice_outcome == 1) {
		book_text.setString("You were not scared of Jack's reaction.\nYou stand up without hesitation and gave Piggy his specs.\nJack made a step toward you; then, your heart started pounding.\nYou thought that now you'll be the next to get beaten, but fortunately, Ralph spoke.");
	}
	if (choice_outcome == 2) {
		book_text.setString("You felt sorry for Piggy, but as everybody was silent and standing still\nyou didn't want to be the one who moved first\nHowever, as for a shy boy, Simon wasn't scared of Jack's reaction\nhe picked up Piggy's glasses, and gave them to him\nJack looked at Simon and made a step toward him\nThe atmosphere got serious until Ralph spoke.");
	}
	break;
case 33:
	book_text.setString("All right. Light the fire.\nRalph said, rolling his eyes.\nWith some positive action before them, a little of the tension died.\nRalph said - no more, stood looking down at the ashes round his feet.\nJack was loud and active. In ten minutes, the fire was on.\nThe atmosphere was more relaxed now.\nYou were sitting next to Ralph when Jack came up to you and turned to Ralph.\nI'm sorry. About the fire, I mean.\nHe straightened up,  I apologize. and he walked away\nThen Ralph drew himself up and said loudly:\nI'm calling an assembly.");
	break;
case 34:
	book_text.setString("Shortly after the sunset Ralph set another assembly.\nUnlike the other meetings, this one was not for fun\nDuring the assembly the chief decided on new rules on how things should be done\nFrom the very beginning you knew that Ralph’s priority was to keep the fire going\nIt didn’t surprise you when he introduced his idea about how it should be maintained\nIf you want a fire to cook fish or crab, you can jolly well go up the mountain");
	break;
case 35:
	book_text.setString("As soon as it has been said\nit started a series of disagreements\nand began spreading rumors among the group.\nAs you mostly agreed with Ralph’s rules\nyou decided to stay quiet about this one.\nWhat drew your attention, was one of the littluns talking about the beast.\nLast night I had a dream, a horrid dream, fighting with things.\nI was outside the shelter by myself, fighting with things in the trees.\nI was frightenedand started to call out for Ralph and then\nI saw something moving among the trees, something big and horrid\nsaid the littlun named Phil.");
	break;
case 36:
	story_tracker++;
	break;
case 37:
	book_text.setString("- What a nonsense, you heard one of the hunters shouting from the back\nfew other boys joined him.\nRalph tried to quiet down the shouting hunters but he only partially succeeded\nOnce another littlun started telling his story\nhunters together with other boys began outshouting him\nThe chief blew the conch and from then on\neveryone sat in silence\nHe handed the shell to Simon.");
	break;
case 38:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Stay silent and listen to Simon");
	choice2.setString("Oppose Simon");

	break;
case 39:
	if (choice_outcome == 1) {
		book_text.setString("Even though you wanted to hear what Simon was about to say\nhe quickly got silenced by the rest of the group\nLet him speak you shouted but your voice died out in the chaos\nWhat I mean is. . . maybe it’s only us\nSimon continued .Once again the assembly cried vigorously\nputting an end to Simon’s effort to express his thoughts\nBut what he said so far, in some way got you interested\nMaybe he is right you said quietly, only that you could hear it.");
	}
	if (choice_outcome == 2) {
		book_text.setString("Nuts! you shouted as loudly as you could\nOther boys immediately joined you, trying to express their dislike towards Simon’s idea\nWhat I mean is. . . maybe it’s only us. Simon continued The assembly once again\ncried vigorously silencing Simon leaving his thought unfinished, mysterious\nYou didn’t mind it however, as you soon joined the rest of the boys\nshouting against Simon statement.");
	}

	break;
case 40:
		if (sideStory_tracker == 0) {
			book_text.setString("You opened your mouth as you were just about to say something\nbut at the exact same moment one of the boys started shouting from the back\nMaybe he means it’s some sort of ghost.\nYou considered it doubtful, but you’ve decided to stay silent about this one.\nSo have the rest of the boys.\nThe moment of silence was quickly broken off.\nI don’t believe in no ghosts - ever! you’ve heard Piggy’s voice\nWho cares what you believe Fatty\nargued Jack in a sense of uncontrollable anger");
		}
		if (sideStory_tracker == 1) {
			book_text.setString("I got the conch!\nit once again initiated a sequence of disputes among the group\nRalph failed in his efforts to calm down the boys\nhunters screamed and laughed at the littluns\nPiggy once again took an attempt to say something but Jack opposed him.\n“Jack! Jack! You haven’t got the conch! Let him speak - shouted Ralph.\n“And you shut up! Who are you, anyway? Sitting there telling people what to do\nJack responded. - “Jack, you are breaking the rules!”\n“Who cares about the rules? - said Jack");
		}


		if (sideStory_tracker < 1) {
			sideStory = 1;
		}
		else {
			sideStory = 0;
		}



	break;
case 41:
	book_text.setString("Chapter 6");
	break;
case 42:

	
	if (sideStory_tracker == 0) {
		book_text.setString("When the assembly was finally over you went to your shelter\nYou lied down and after a few minutes you fell asleep\nAll of a sudden you heard someone shouting right next to you.\n“Ralph! Wake up!” cried one of the twins, trying to wake up the chief.\nWe saw the beast");
	}
	if (sideStory_tracker == 1) {
		book_text.setString("After the twins told their story, Ralph called another assembly.\nYou sat among the other boys gathering around Ralph\nwho handed the conch shell to one of the tweens.\nWe’ve seen the beast with our own eyes. No—we weren’t asleep—” said Eric.\nIt was furry. There was something moving behind its head—wings. The beast moved too\nJack, having another hunter-like idea, stepped out of the circle.\nThis’ll be a real hunt! Who’ll come?”\nYou’ve heart disputes among the boys.\nSome of them including Ralph opposed the idea. Jack insisted.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}
	
	break;
case 43:
	book_text.setString("Who do you support");

	choice = 1;

	choice1.setString("Support Ralph");
	choice2.setString("Support Jack");
	break;
case 44:
	if (choice_outcome == 1) {
		book_text.setString("What about getting rescued? The fire is out, there is no signal”\nyou said, “Hasn’t anyone got any sense? We’ve got to relight that fire.\nYou never thought of that, Jack, did you?\nOr don’t any of you want to be rescued?\nSome of the boys nodded hesitantly.\nRalph agreed");
	}
	if (choice_outcome == 2) {
		book_text.setString("I’ll come, you’ve raised you voice.\nThe crowd got quiet. “Good. At least one of you is a real hunter”.\nThis is more than a hunter’s job,” said Ralph at last,\n“because you can’t track the beast.\nAnd don’t you want to be rescued?”\nNow you got hesitant.");
	}
	break;
case 45:

	if (sideStory_tracker == 0) {
		book_text.setString("I still think that we should hunt the beast.\nI suggest going to the tail-end part of the island\nwhere the rocks are all piled up.\nI’ve been near there. The place might be creature’s hideout\nJack continued.\n“What a place for a fort” said Jack, he was excited\nNo fresh water Ralph commented.\nWhat’s that then? Jack pointed at the long green smudge half-way up the rock.\nYou could keep a coconut shell there, filling all the time.");	
	}
	if (sideStory_tracker == 1) {
		book_text.setString("Not me. This is a rotten place\nRalph turned towards the mountain, fire was still out.\nThere is no signal.”\nYou’re nuts on the signal.\nRalph headed towards the rest of the group.\nA knot of boys was pushing a rock, that soon cracked the base of the cliffand\nthe whole mass of rocks fell into the sea.\nStop it, shouted Ralph, We want smoke. And you go wasting your time. You roll rocks.”\nWe’ve got plenty of time \nThe clamor broke out. Some of the boys wanted to go back to the beach.\nSome wanted to roll more rocks.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}



	
	
	break;
case 46:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Suggest going back to the mountain");
	choice2.setString("Suggest staying at the cliff");
	break;
case 47:
	if (choice_outcome == 1) {
		book_text.setString("Ralph’s right. There’s no food here, and no shelter.\nNot much fresh water. Besides, there may be a ship out there\npassing by our island and it won’t notice our signal, you said\n“there is no fire, and we should be going.”\nRalph nodded.\n“We’ve got to make certain. We’ll go now” he stated.\n“Let’s stay here—”\n“I’m tired—” some of the boys argued.\n’No!” shouted Ralph “I’m chief. We’ve got to make certain. Can’t you see the mountain?\nThere’s no signal showing.”\nThe boys fell silent. Group headed towards the mountain.");
	}
	if (choice_outcome == 2) {
		book_text.setString("Let’s have a fort” you’ve suggested.\nSome of the boys nodded enthusiastically.\nThis would make a wizard fort.\n“We can roll rocks—”\nRight onto the bridge—” You’ve heard other boys.\n“I say we’ll go on!” shouted Ralph furiously.\nIt was clear that he wasn’t fond of your idea\nWe’ve got to make certain. We’ll go now.”\nSome of the boys including you disagreed. “Let’s stay here, I’m tired—”\n‘’No!” shouted Ralph “I’m chief. We’ve got to make certain.\nCan’t you see the mountain? There’s no signal showing.\nThere may be a ship out there.”");
	}
	break;
case 48:
	book_text.setString("Chapter 7");
	break;
case 49:
	book_text.setString("This afternoon on the island was very hot and the heat was hardly bearable.\nEven though the boys planned to approach the mountain before the evening\nthey’ve decided to stop for a while and get some fruit\nYou were right in the middle of a conversation with Ralph and Simon\nwhen you heard Roger shouting from the coverts.");
	break;
case 50:
	book_text.setString("“Come and see!\nWith the two other boys you stood right next to Roger\nwho pointed at a pig running afar.\nJack was approaching you.");
	break;
case 51:
	book_text.setString("Ralph—we need meat even if we are hunting the other thing\nhe said at last. Ralph agreed\nFor the next hour the boys focused on hunting\nRalph who managed to wound a boar\nwas very proud of his achievement and enjoyed the hunt\nSo did the rest of the group\nAfter a while there was a time for a ritual dance after the hunt.");
	break;
case 52:
	book_text.setString("Make a ring! Jack shouted.\nRoger stood in the middle of the circle\nThe circle moved in and round\nRoger squealed in mock terror, then in real pain.");
	break;
case 53:
	book_text.setString("Ow! Stop it! You’re hurting!\nThe butt end of a spear fell on his back.\nHold him!”\nThey got his arms and legs\nRalph, carried away by a sudden thick excitement\ngrabbed Eric’s spear and jabbed Roger with it.\nKill him! Kill him!");
	break;
case 54:
	book_text.setString("The chant rose ritually\nas at the last moment of a dance or a hunt.\nKill the pig! Cut his throat! Kill the pig! Bash him in!”\nThe hunt was over.\n’That was a good game” Jack commented.\nIt really was you agreed.\n“Now for the mountain”\n“Shouldn’t we go back to Piggy,” said Maurice, “before dark?”\nSome of the boys nodded.\nYes, that’s right. Let’s go up there in the morning.”");
	break;
case 55:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Suggest going back to Piggy");
	choice2.setString("Suggest going to the mountain");
	break;
case 56:
	if (choice_outcome == 1) {
		book_text.setString("“We can’t leave the littluns alone with Piggy. Not all night” you pointed out\n“But we have to relight the fire and we have to make certain if the mountain is clear”\nyou said, “supposing the beast is up there, that is.”\nRalph glanced round him.\n“Someone’s got to go across the island and tell Piggy we’ll be back after dark.”\n“Through the forest by himself? Now?” “We can’t spare more than one.”\n“I’ll go if you like. I don’t mind, honestly” said Simon unexpectedly.");
	}
	if (choice_outcome == 2) {
		book_text.setString("“We’ve got to relight the fire and we have to make certain if the mountain is clear” you said, “supposing the beast is up there, that is.”\n“We can’t leave the littluns alone with Piggy.Not all night” pointed one of the boys.\nRalph glanced round him.\n“Someone’s got to go across the island and tell Piggy we’ll be back after dark.”\n“Through the forest by himself? Now?” “We can’t spare more than one.”\n“I’ll go if you like. I don’t mind, honestly” said Simon unexpectedly.");
	}
	break;
case 57:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Go with Ralph");
	choice2.setString("Suggest going to the mountain");
	break;
case 58:
	if (choice_outcome == 1) {
		book_text.setString("Together with the rest of the boys, you went up the slope\nand soon found yourself on the mountain top.\n“I don’t see a thing” said Ralph, trying to stay calm.\nBefore them, something like a great ape was sitting asleep\nwith its head between its knees. Then the wind roared in the forest\nin the darkness the creature lifted its head\nholding toward them the ruin of a face.\n‘’Run!” shouted one of the boys.");
	}
	if (choice_outcome == 2) {
		book_text.setString("“I’ll stay here, if you don’t mind” you said hesitantly.\n“As you wish” Ralph responded and headed towards the mountain top\nMost of the boys decided to go with him\nYou sat there in silence and patiently waited for their return\nSuddenly you’ve heard voices coming from the mountain top\nYou soon noticed the boys running down the slope, screaming in horrid.\n“What happened?” you asked.\n“The beast! …We saw it! You better run\none of the boys shouted passing by.");
	}
	break;
case 59:
	book_text.setString("Chapter 8");
	break;
case 60:
	book_text.setString("Piggy looked at the mountain miserably.\n“Are you sure? Really sure, I mean?”\nI told you a dozen times now,” said Ralph, “we saw it.”\nSome boys nodded as to confirm that they too, saw the beast.\nThere was a moment of silence, soon broken off by Piggy’s voice:\n“What are we going to do?”\nRalph started off with his speech to the group.\nIn his eyes fighting a beast seemed impossible\nas none of the boys were brave enough.\n“What about my hunters?” Jack asked. Ralph ignored his question\nand continued with his speech.");
	break;
case 61:
	book_text.setString("Jack who knew that Ralph heard him all right\ngot to his feet and this time shouted his question\nRalph silenced him, as he was the one holding a conch\nJack snatched the conch form Ralph’s hands and blew it\nThe littluns came out of their shelters and headed towards Jack.\nI’ve called an assembly, Jack turned to the group, “because of many things\nFirst, you know now, we’ve seen the beast\nWe crawled up. We were only a few feet away\nThe beast sat up and looked at us\nI don’t know what it does\nWe don’t even know what it is\n”");
	break;
case 62:
	book_text.setString("There came several suggestions about the beast from the other boys.\n“Quiet!” Jack silenced them.“You, listen.The beast is sitting up there whatever it is\nhe stopped for a moment.“The next thing is that we couldn’t kill it\nAnd the next is that Ralph said my hunters are no good.”\n“I never said that! Ralph disagreed.\n“He’s like Piggy. He says things like Piggy. He isn’t a proper chief. He’s a coward himself.\nEveryone fell in silence. Jack too, stood quietly.\nIt seemed like he hesitated for a while\nbut then said:\n“Hands up, whoever wants Ralph not to be chief?\nThe silence continued, no one raised their hand\nJack stood there feeling deeply humiliated.");
	break;
case 63:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Join Jack");
	choice2.setString("Stay loyal to Ralph");
	break;
case 64:
	if (choice_outcome == 1) {
		jack = 1;
		book_text.setString("“I’ll join you” you said raising your hand\nJack looked at you and said:“At last! I thought that none of you got any sense.\nGlad that you have my side\nAnyone else?” The hunters stood up. “I’m not going to play any longer\nNot with you. Anyone who wants to hunt when I do can come too, he added\nJack quickly turned away and ran along the beach\nYou and the hunters followed him. Jack stood before a small group of boys.\nHe was looking brilliantly happy\nHunting, he said, “We’ll hunt. I’m going to be chief.\nAll of the boys nodded enthusiastically\nI’m going to get more of the biguns away from the conch and all that\nWe’ll kill a pig and give a feast.”");
	}
	if (choice_outcome == 2) {
		jack = 0;
		book_text.setString("“I’m going off by myself. He can catch his own pigs. I’m not going to play any longer\nNot with you. Anyone who wants to hunt when I do can come too” Jack said at last\nHe leaped off the platform and ran along the beach\nHis hunters followed him. The rest of the group sat there in depressing silence.\n“We can do without him” you said, “the most important thing, is to relight the fire.”\n“How can we do that if the beast sits up there” said Ralph, his voice sounded weary.\n“We got no fire on the mountain. But what’s wrong with a fire down here?\nA fire could be built on them rocks\nOn the sand, even. We’d make smoke just the same” Piggy suggested.\n‘’That’s right!” Ralph gained back his zest for life, “Why don’t we do that now?”");
	}
	break;
case 65:
	book_text.setString("The boys from Jack’s tribe after a while managed to hunt a sow.\nWe’ll take the meat along the beach\nI’ll go back to the platform and invite them to a feast\nThat should give us time” Jack said while preparing the meat for a feast.\nHow can we make a fire?” Roger asked unexpectedly.\n“We’ll raid them and take fire” Jack decided\nbut for now…” he bent on his knees and took out his knife\nHe asked Roger to sharpen a stick at both ends and as soon as it got sharpened\nhe put dripping sow’s head on it.\n“This head is for the beast. It’s a gift.”\nAll at once they were running away, as fast as they could\nthrough the forest towards the open beach.");
	break;
case 66:
	book_text.setString("Meanwhile Simon who separated from the group\nhe moved towards the place where the gift for the beast has been situated\nHe didn’t feel well and the heat coming from the sun was not helping\nFlies were revolving around the dimed-eye head of the pig.");
	break;
case 67:
	book_text.setString("“Lord of the files” he thought. The head grinned\nIn Simon’s right temple, a pulse began to beat on the brain\n“You are a silly little boy,” said the Lord of the Flies\njust an ignorant, silly little boy.”\nSimon moved his swollen tongue but said nothing.\n“Don’t you agree?” said the Lord of the Flies. “Aren’t you just a silly little boy?”\nSimon answered him in the same silent voice.\n“There isn’t anyone to help you. Only me. And I’m the Beast.”\nPig’s head on a stick” Simon responded.\n");
	break;
case 68:
	book_text.setString("“Fancy thinking the Beast was something you could hunt and kill!” said the head\n“You knew, didn’t you? I’m part of you? Close, close, close!\nI’m the reason why it’s no go?\nWhy things are what they are?”\nThe head was taunting him, but now its voice turned more serious.\n“I’m warning you. I’m going to get angry. D’you see? You’re not wanted. Understand?\nWe are going to have fun on this island. Un- derstand?\nWe are going to have fun on this island! So don’t try it on, my poor misguided boy,\nSimon could no longer hear Lord of the Flies\nHe fell down and lost consciousness.");
	break;
case 69:
	book_text.setString("Chapter 9");
	break;
case 70:
	book_text.setString("Simon wakes up and finds the air dark and damp as a storm approaches\nhis nose begins to bleed as he rows towards the mountain in a daze\nhe crawls up the hill and sees the beast on the mountain\nfinds the paratrooper's body, examines it, and realizes its true identity\nWhen Simon saw the paratrooper's body, he began to vomit and when finished\nuntangled the parachute lines, releasing the parachute from the rocks\nto make sure to prove to the group that the monster was not real\nThen Simon turns to the boys to tell them the new\nand follows the distant light of the fire at Jack's camp\nSimon was so exhausted that he could barely walk.");
	break;
case 71:
	book_text.setString("The boys were gathered around the feast, laughing and eating the roast pig\nand Jack was acting like a king and giving orders to the kids\nThen Jack invited all of Ralph's followers to join his tribe");
	break;
case 72:
	book_text.setString("The loyalists of Ralph joined in out of curiosity and hunger\nand Jack allowed them to eat, but when everyone had finished eating\nJack invites all the boys to indicate whether\nthey'd like to join his group or remain with Ralph's.\n-Would you choose to stay with Ralph or join Jack's clan?");
	break;
case 73:
	book_text.setString("What will you do?");

	choice = 1;

	if (jack == 0) {
		choice1.setString("Join Jack");
		choice2.setString("Stay loyal to Ralph");
	}
	if (jack == 1) {
		choice1.setString("Stay loyal to Jack");
		choice2.setString("Join Ralph");
	}

	break;
case 74:
	if (choice_outcome == 1) {
		book_text.setString("You chose the right choice like the rest of the boys\nas most of them accepted to join Jack's tribe despite Ralph's attempts\nto dissuade them from that, but Jack has a strong grip on them.");
	}
	if (choice_outcome == 2) {
		book_text.setString("You were expecting that being with Ralph would be the right choice\nmost of the boys might choose it especially after Ralph made a pitch\nfor the boys to stay with him and his election");
	}
	break;
case 75:

	if (sideStory_tracker == 0) {
		book_text.setString("he storm came and it started to rain\nRalph asked Jack how he planned to weather the storm\nso Jack ordered the boys to do a wild fishing dance\nand they started chanting and dancing along the beach\nand they got busy with a kind of madness\neven Ralph and Piggy, who were swept away by excitement\nsuddenly, the boys see a mysterious figure crawling out of the woods");

	}
	if (sideStory_tracker == 1) {
		book_text.setString("It's Simon, trying to tell the true identity of the monster seen on the mountain\nbut he can hardly make himself heard during the storm and the boys's frenzied cheers\nin their wild state, they didn't recognize him, the boys shouted that he was the beast\nthe boys descended on Simon and began to tear him with their hands and their teeth\nthey left Simon's body on the beach, the tide carried his body away\nThe winds of the storm fill the canopy of the dead soldier\nand lift him over the island and out into the sea\nthis sight terrifies the children, causing them to disperse and scream.");
	}


	if (sideStory_tracker < 1) {
		sideStory = 1;
	}
	else {
		sideStory = 0;
	}


	
	break;
case 76:
	book_text.setString("Chapter 10");
	break;
case 77:
	book_text.setString("The next morning, Ralph finds Piggy, Samneric,\nand some of the little ones staying in his camp.\nThe boys meet at the beach, they are bruised and painful\nand feel embarrassed and profoundly ashamed of their behavior the night before\nPiggy notes that they killed Simon as he was unable to face his role in Simon's death\nSamneric doesn't want to acknowledge his involvement eithe\nBut Ralph, hopelessly holding the trumpet and laughing hysterically\ninsists that they participated in a murder.");
	break;
case 78:
	book_text.setString("Everyone except Sam, Eric and a handful of littluns\njoined the Jack tribe, now based on Castle Rock\nthe mountain on the island.");
	break;
case 79:
	book_text.setString("Jack began to behave more than ever like the cruel dictator of his tribe\nbeating one of the boys to anger him\nHe alerted the boys to Ralph and his small group\nsaying that they were a danger to the tribe\nHe was trying to convince his troubled minions that they struck the monster\nbut they didn't kill him the night before\nand they must continue to protect Simon\nbecause he did not die.");
	break;
case 80:
	book_text.setString("He began planning a raid on Camp Ralph to light a fire\nHunters ordered Morris and Roger\nto raid Ralph's camp to get more flames");
	break;
case 81:
	book_text.setString("At the Ralphs camp, the boys drift off to sleep in depression\nAnd there was a fire outside\nWhat will you do with the blazing fire?");
	break;
case 82:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Let the fire die overnight");
	choice2.setString("Collect firewood in the dark");
	break;
case 83:
	if (choice_outcome == 1) {
		book_text.setString("You chose the choice that the boys chose as Ralph, Piggy, and Samneric\ndiscovered that four people were not enough to make a fire\nand they decided to keep it burning only during the day.");
	}
	if (choice_outcome == 2) {
		book_text.setString("Your choice was contrary to the choice of the rest of the children\nas they are depressed and will not care about the fire\nbut rather let it die all night and went to sleep");
	}
	break;
case 84:
	book_text.setString("The boys were all asleep and then woke up from the howling and screaming\nthey were suddenly attacked by Jack's Hunters who couldnt steal the burning branches\nso the hunters severely beat Ralph and his companions\nwho do not even know the reason for the attack\nbecause they would gladly share the fire with the other boys.\nBut Piggy knows why, the hunters stole his glasses\nto be used to light a fire.");
	break;
case 85:
	book_text.setString("Chapter 11");
	break;
case 86:
	book_text.setString("The next morning, Ralph and his companions attempt to light a fire in the cold air\nbut attempt hopelessly without Piggy's glasses\nand decided that the remaining four will ask Jack's tribe to return the goggles\nto remind them of the importance of the fire signal.\nDo you choose to go or will you stay in the camp?");
	break;
case 87:
	book_text.setString("What will you do?");

	choice = 1;

	choice1.setString("Go and ask the boys to return the glasses");
	choice2.setString("Will stay in the camp");
	break;
case 88:
	if (choice_outcome == 1) {
		book_text.setString("you chose the best option that the boys insisted on\nas they wanted to go to Ralph's group because of the importance\nof the need to light a fire.");
	}
	if (choice_outcome == 2) {
		book_text.setString("Your choice was the same as that of Samneric\nhe had a real fear of approaching and facing Jack's group\nwho had gone completely wild.");
	}
	break;
case 89:
	book_text.setString("Ralph decides to take the conch shell to the Castle Rock\nhoping that it will remind Jack’s followers of his former authority Once at Jack’s camp\nRalph’s group encounters armed guards, Ralph blows the conch shell\nbut the guards tell them to leave and throw stones at them aiming to miss. ");
	break;
case 90:
	book_text.setString("Suddenly, Jack and a group of hunters emerge from the forest, dragging a dead pig\nJack and Ralph immediately face off, Jack commands Ralph to leave his camp\nand Ralph demands that Jack return Piggy's glasses.");
	break;
case 91:
	book_text.setString("Jack attacks Ralph, and they fight\nRalph struggles to make Jack understand the importance of the signal fire\nto any hope the boys might have of ever being rescued\nbut Jack orders his hunters to capture Sam and Eric and tie them up\nThis sends Ralph into a fury.");
	break;
case 92:
	book_text.setString("Ralph and Jack fight for a second time, Piggy cries out shrilly\nstruggling to make himself heard over the brawl\nAs Piggy tries to speak, hoping to remind the group of the importance of rules\nRoger shoves a massive rock down the mountainside\nRalph, who hears the rock falling, dives and dodges it\nBut the boulder strikes Piggy, shatters the conch shell he is holding\nand knocks him off the mountainside to his death on the rocks below\nJack throws his spear at Ralph, and the other boys quickly join in\nRalph escapes into the jungle, and Roger and Jack begin to torture Sam and Eric\nforcing them to submit to Jack’s authority and join his tribe");
	break;
case 93:
	book_text.setString("Chapter 12");
	break;
case 94:
	book_text.setString("That night, Ralph infiltrated the campsite in Castle Rock and found Sam and Eric\nguarding the entrance after being forced to join the clan\napproaching them cautiously hoping to regain their loyalty\nthey told him that Jack was planning to send the whole tribe to hunt him\nthe next day and they gave him some meat.");
	break;
case 95:
	book_text.setString("Several boys try to break into the woods by rolling a rock\nbut the forest is very dense, a group of boys try to force their way into the forest\nbut Ralph repels them. Then Ralph realizes that Jack has set the woods on fire\nIf you were in Ralph's place, what would you choose?");
	break;
case 96:
	story_tracker++;
	break;
case 97:

	book_text.setString("Ralph abandons his lair and fights his way through Jack and a group of his hunters\nRalph frantically plunges into the bushes in search of a hiding place\nFinally, he reached shore and fell at the feet of a British naval officer\nhis ship attracted the smoke of the massive fire\nand the officer assured that his ship would take them off the island\nRalph bursts into tears over all that he lost\nand that he would flee the island after approaching a violent death.");
	
	break;
case 98:
	book_text.setString("The End");
	break;
};



if (choice) {
	bookbox.setPosition(30, 600);
	window.draw(bookbox);

	bookbox2.setPosition(30, 700);
	window.draw(bookbox2);

	window.draw(choice1);
	window.draw(choice2);
}


//box.setPosition(0, 230);
//window.draw(box);






sf::Event location;
while (window.pollEvent(location)) {


	//Polski::Polskie_pytanie_Events(location, window);

	if (location.type == sf::Event::Closed) {
		return 0;
		window.close();
	}
	if (select_clock.getElapsedTime().asMilliseconds() > 250) {
		if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left && !choice) {
			
			//choice_outcome = 0;
			


			if (sideStory == 1) {
				sideStory_tracker++;
			}
			else {
				sideStory = 0;
				story_tracker++;
				sideStory_tracker = 0;
			}
			
			
			
			select_clock.restart();
		}
	}

	if (choice == 1) {
		if (bookbox.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
			choice1.setFillColor(sf::Color::Red);
			if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
				story_tracker++;


				choice_outcome = 1;

			}
		}
		else {
			choice1.setFillColor(sf::Color::White);
		}
		if (bookbox2.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
			choice2.setFillColor(sf::Color::Red);
			if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
				story_tracker++;
				choice_outcome = 2;


			}
		}
		else {
			choice2.setFillColor(sf::Color::White);
		}
	}

	
	if (resetbox.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) {
		resetText.setFillColor(sf::Color::Red);
		if (location.type == sf::Event::MouseButtonReleased && location.key.code == sf::Mouse::Left) {
			story_tracker = 0;
			sideStory = 0;
			sideStory_tracker = 0;



		}
	}
	else {
		resetText.setFillColor(sf::Color::White);
	}


}
window.display();

}



}

