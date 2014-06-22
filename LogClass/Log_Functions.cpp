
#include "LogClass.h"

using namespace std;

int Loggable::getId(){
  return this->id;
}

std::string Loggable::getError(){
  return this->error;
}

std::string Loggable::getType() {
  return *(new std::string());
}
 
void Loggable::log() {

}

std::string Loggable::getName() {
  return *(new std::string());
}

int Loggable::getAttack() {
  return 1;
}


void Entity::log(){
    cout << this << " address. \n" << "Type: " << this->getType() << endl;
}

string Entity::getType(){
  return this->type;
}

string Human::getName(){
    return this->name;
}

int Human::getAttack(){
    return this->attack;
}

void Human::log(){
  cout << this << " address. \n" << "Type: " << this->getType() << "\n Name: " << this->getName() << "\n Attack: " << this->getAttack() << endl;
}
