#include "Admin.h"

Admin::Admin(std::string sec, int S, int H, Date db, std::string name, std::string nat, Date DJ): Faculty(S,H,db,name,nat,DJ) {
	section = sec;
}

int Admin::Bonus() {
	return this->getHours() * (13 * 2);
}