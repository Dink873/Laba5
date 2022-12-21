#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Flower.h"

using namespace std;

class Bouquet {
public:
	string name;
	vector<Flower> flowers_in_bouquet;
	Bouquet(string name) {
		this->name = name;
	}
	void add_flower_to_bouquet(Flower& a) {
		flowers_in_bouquet.push_back(a);
	}
	int full_price() {
		int fullprice = 0;
		for (auto i = flowers_in_bouquet.begin(); i < flowers_in_bouquet.end(); i++) {
			fullprice += i->price;
		}
		return fullprice;
	}
};