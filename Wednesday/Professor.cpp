#include "Professor.h"

Professor::Professor(std::string dept, int S, int H, Date db, std::string name, std::string nat, Date DJ) : Faculty(S, H, db, name, nat, DJ) {
	department = dept;
}

int Professor::Bonus() {
	return this->getHours() * (13 * 1.5);
}