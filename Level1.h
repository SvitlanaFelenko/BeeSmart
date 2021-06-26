#pragma once
#include "TheBee.h"
class Level1
{
private:
	int tab[5][5] = { {9,1,9,0,0},
					  {9,1,9,9,0},
					  {9,1,1,1,9},
					  {0,9,9,1,9},
					  {0,0,9,1,9} };
	
	
	
public:
	//textures of level
	sf::Texture Tree;
	sf::Sprite TreesS;
	sf::Texture Road;
	sf::Sprite RoadS;
	sf::Texture Flower;
	sf::Sprite FlowerS;
	sf::Texture Hive;
	sf::Sprite HiveS;
	//priv functions;
	void initTree();
	void initTreeS();
	void initRoad();
	void initRoadS();
	void initFlower();
	void initFlowerS();
	void initHive();
	void initHiveS();
	int createLevel(int x, int y);
	int PosOfObjx;
	int PosOfObjy;
	Level1();
	~Level1();
};

