#include "C++ Game/Header/Class.h"
#include "iostream"
#include <algorithm>

Animal::Animal(int w, int pos, bool fish, bool bird, bool carnivore) : weight(w), posY(pos), isFish(fish), isBird(bird), isCarnivore(carnivore) {
    static int nextId = 1;
    id = nextId++;
}

Animal::~Animal() {}

Animal* AnimalManager::createAnimal(AnimalType type, int weight, int pos) {
    bool isFish = false;
    bool isBird = false;
    bool isCarnivore = false;

    switch (type) {
    case SHARK:
        isFish = true;
        isCarnivore = true;
        break;
    case EAGLE:
        isBird = true;
        isCarnivore = true;
        break;
    case SWAN:
        isBird = true;
        break;
    default:
        return nullptr;
    }

    return new Animal(weight, pos, isFish, isBird, isCarnivore);
}

int Animal::getWeight() const {
    return weight;
}

int Animal::getPosY() const {
    return posY;
}

bool Animal::getIsFish() const {
    return isFish;
}

bool Animal::getIsBird() const {
    return isBird;
}

bool Animal::getIsCarnivore() const {
    return isCarnivore;
}

int Animal::getId() const {
    return id;
}

void Animal::moveToSea(int meters) {
    posY = std::max(-10, std::min(10, posY + meters));
}

int Animal::getDistance(const Animal& other) const {
    return std::abs(posY - other.getPosY());
}

bool Animal::canEat(const Animal& other) const {
    return isCarnivore && weight > other.weight && id != other.id;
}

void Animal::eat(Animal* prey) {
    if (canEat(*prey)) {
        weight += prey->getWeight();
        delete prey;
    }
}

int main() {

}