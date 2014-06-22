
#include <ostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>

class Loggable {
protected:
  int id;
  std::string error;

public:
  int getId();
  std::string getError();
  virtual std::string getType();
  virtual void log();
  virtual std::string getName();
  virtual int getAttack();

  std::ostream& operator<<(std::ostream& os);
};

class Entity : public Loggable { 
private:
  std::string type;

public:
  inline Entity() {
    // Nada
  }
  inline Entity(int id, std::string error, std::string type){
    this->id = id;
    this->error = error;
    this->type = type;
  }


  std::string getType();
  virtual void log();
};

class Human : public Entity{ 
  
private: 
  std::string name;
  int attack;
public:
  Human();
  Human(int id, std::string error, std::string type, std::string name, int attack){
    this->id = id;
    this->error = error;
    //this->type = type;
    this->name = name;
    this->attack = attack;
  }

  std::string getName();
  int getAttack();

  void log();

};

std::ostream& Loggable::operator<<(std::ostream& os){
  time_t T = time(NULL);
  os << ctime(&T) << "\t" << this->getError() << " ID: " << this->getId() << " " << " failed to initialize at: "; this->log() ;

  return os << std::endl;
}
