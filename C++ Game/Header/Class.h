enum AnimalType {
    SHARK = 1,
    EAGLE = 2,
    SWAN = 3
};

class Animal {
public:
    Animal(int w, int pos, bool fish, bool bird, bool carnivore);
    virtual ~Animal();

    int getWeight() const;
    int getPosY() const;
    bool getIsFish() const;
    bool getIsBird() const;
    bool getIsCarnivore() const;
    int getId() const;

    void moveToSea(int meters);
    int getDistance(const Animal& other) const;
    bool canEat(const Animal& other) const;
    void eat(Animal* prey);

protected:
    int weight;
    int posY;
    bool isFish;
    bool isBird;
    bool isCarnivore;
    int id;
};

class AnimalManager {
public:
    static Animal* createAnimal(AnimalType type, int weight, int pos);
};