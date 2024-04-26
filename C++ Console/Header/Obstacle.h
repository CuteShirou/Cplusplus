#pragma once

class Obstacle
{
public:
    Obstacle();
    virtual ~Obstacle();

    virtual bool IsCollision(int PlayerX, int PlayerY) = 0;
};

class Pothole : public Obstacle
{
public:
    Pothole();
    virtual ~Pothole();

    virtual bool IsCollision(int PlayerX, int PlayerY);
};

class Car : public Obstacle
{
public:
    Car();
    virtual ~Car();

    virtual bool IsCollision(int PlayerX, int PlayerY);
};

class Person : public Obstacle
{
public:
    Person();
    virtual ~Person();

    virtual bool IsCollision(int PlayerX, int PlayerY);
};