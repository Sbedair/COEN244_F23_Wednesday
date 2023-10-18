#include "Faculty.h"

static int ID_Share = 0;

Faculty::Faculty(int S, int H, Date db, std::string name, std::string nat, Date DJ) : Person(db, name, nat, DJ) {
	Salary = S;
	Hours = H;
	ID = ++ID_Share;
}
