#include "USER.h"

void IUSER::ViewInfo()
{
}

int IUSER::getRole()
{
	return this->role;
}

void IUSER::ShowInfo()
{
	cout << "this is info";
}

bool IUSER::changePassword(string oldPassword, string newPassword, string confirmNewPassword)
{
	if (this->password == oldPassword && newPassword == confirmNewPassword)
	{
		this->password = newPassword;
		return true;
	}
	return false;
}

bool IUSER::Authenticate(string id, string pw)
{
	if (id == this->ID && pw == this->password)
	{
		return true;
	}
	return false;
}

string IUSER::getID()
{
	return this->ID;
}
