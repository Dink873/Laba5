#pragma once
#include <iostream>
#include <vector>
#include "Flower.h"

using namespace std;

class FlowerShop {
public:
	string name;
	FlowerShop(string name) {
		this->name = name;
	}
	vector<Flower> flowers_in_shop;
	void add_flower_to_shop(Flower& a) {
		flowers_in_shop.push_back(a);
	}
};