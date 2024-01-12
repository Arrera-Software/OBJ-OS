// OBJ-OS.cpp : définit le point d'entrée de l'application.
//

#include "OBJ-OS.h"

using namespace std;

int main()
{
	COS os;
	if (os.getLinux() == true && (os.getWindows() == false))
	{
		cout << "LINUX" << endl;
	}
	else
	{
		if ((os.getLinux() == false) && (os.getWindows() == true))
		{
			cout << "WINDOWS" << endl;
		}
		else
		{
			cout << "AUTRE" << endl;
		}
	}
	return 0;
}
