#include <iostream>
#include <string>
#include "ASpell.hpp"

using namespace std;

class Fireball : public ASpell
{
	public:
		Fireball() : ASpell("Fireball", "burnt to a crisp") {}
		~Fireball() {}
		Fireball *clone() const { return new Fireball(); }
};
