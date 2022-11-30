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
	int deliveryRate;
	Flower(double heigh, double size, string color, int price, int quantity, int deliveryRate) {
		this->heigh = heigh;
		this->size = size;
		this->color = color;
		this->price = price;
		this->quantity = quantity;
		this->deliveryRate = deliveryRate;
	}
};