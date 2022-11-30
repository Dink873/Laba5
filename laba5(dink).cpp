#include <iostream>
#include <vector>
#include "Flower.h"
#include "FlowerShop.h"
#include "Bouquet.h"

using namespace std;

int main() {
	Flower Rose(32, 2, "pink", 320, 3, 5), Romashka(6, 0.1, "white", 2, 10, 3), Blue(11, 0.8, "blue", 210, 6, 4);
	Bouquet one("one"), two("one");
	one.add_flower_to_bouquet(Rose);
	one.add_flower_to_bouquet(Romashka);
	two.add_flower_to_bouquet(Blue);
	two.add_flower_to_bouquet(Romashka);
	cout << one.full_price() << endl;
	cout << two.full_price() << endl;
}