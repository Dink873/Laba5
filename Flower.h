#pragma once
#include <iostream>
#include <vector>
#include "Flower.h"

using namespace std;

class Flower {
public:
	double heigh;
	double size;
	string color;
	int price;
	string quantity;
	int delivery_rate;
	Flower(double heigh, double size, string color, int price, int quantity, int delivery_rate) {
		this->heigh = heigh;
		this->size = size;
		this->color = color;
		this->price = price;
		this->quantity = quantity;
		this->delivery_rate = delivery_rate;
	}
};