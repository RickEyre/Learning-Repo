
#include "LogClass.h"

using namespace std;



int main(){

  Entity NPC1 (65478, "Error# 117", "NPC");
  Entity NPC2 (95722, "Error# 104", "NPC");
  Entity NPC3 (36578, "Error# 124", "NPC");
  Entity NPC4 (48852, "Error# 212", "NPC");

  Human Hum1 (320, "Error# 120", "Human", "Ven", 23);
  Human Hum2 (127, "Error# 47", "Orc", "Kel", 12);
  Human Hum3 (452, "Error# 21", "Android", "Nev", 05);
  Human Hum4 (65, "Error# 82", "Mech", "Ten", 16);

  cout << NPC1 << endl;
  cout << NPC2 << endl;
  cout << NPC3 << endl;
  cout << NPC4 << endl;

  cout << Hum1 << endl;
  cout << Hum2 << endl;
  cout << Hum3 << endl;
  cout << Hum4 << endl;

  system("pause");
  return 0;
}
