// CH-230-A
// a11_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Creature.h"

using namespace std;

Creature::Creature() : distance(10) {}

Creature::~Creature() {
    cout << "Destroying Creature!\n";
}

void Creature::setDist(int Distance) {
    distance = Distance;
}

int Creature::getDist() const {
    return distance;
}

void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3) {}

Wizard::~Wizard() {
    cout << "Destroying Wizard!\n";
}

void Wizard::setDistFactor(int DistFactor) {
    distFactor = DistFactor;
}

int Wizard::getDistFactor() const {
    return distFactor;
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Elephant::Elephant() : bodyFatLostPerKm(11.4) {
    cout << "Constructed Elephant using empty constructor!\n";
}

Elephant::~Elephant() {
    cout << "Destroying Elephant!\n";
}

void Elephant::setBodyFatLostPerKm(double BodyFatLostPerKm) {
    bodyFatLostPerKm = BodyFatLostPerKm;
}

double Elephant::getBodyFatLostPerKm() const {
    return bodyFatLostPerKm;
}

void Elephant::bodyFatLost() const {
    cout << "Bodyfat lost: " << bodyFatLostPerKm * distance << "!\n";
}

Ogre::Ogre() : startingScaryLevel(100.0) {
    cout << "Constructed Ogre using empty constructor!\n";
}

Ogre::~Ogre() {
    cout << "Destroying Ogre!\n";
}

void Ogre::setStartingScaryLevel(double StartingScaryLevel) {
    startingScaryLevel = StartingScaryLevel;
}

double Ogre::getStartingScaryLevel() const {
    return startingScaryLevel;
}

void Ogre::scaryLevel() const {
    cout << "Scary Level: " << (startingScaryLevel - ((startingScaryLevel / 100) * distance))
        << " frightened!\n";
}