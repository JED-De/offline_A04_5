#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	unsigned int i;
	bool eingabetest = false;
	bool palindrom = true;

	while (eingabetest == false)
	{
		cout << "Text: ? ";
		getline(cin, eingabe);
		for (i = 0, eingabetest = true; i < eingabe.size(); i++)
		{

			if (eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z' || eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')	//Kontrolle, ob es ein Klein oder Großbuchstabe ist
			{
				if (eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')												//Nicht Teil der eigendlichen Aufgabe, macht aus offiziel  
					eingabe.at(i) = eingabe.at(i) - 'A' + 'a';													//nicht vorkommenden Grossbuchstaben Kleinbuchstaben.
			}
			else
			{
				eingabetest = false;																			//bool wieder false, wodurch while nochmal durchläuft
				break;
			}
		}

	}

	for (i = 0; i < eingabe.size() / 2; i++)
	{
		if (palindrom == true)
		{
			palindrom = (eingabe.at(i) == eingabe.at((eingabe.size() - i - 1)));
		}
	}

	if (palindrom == true)
	{
		cout << "Das eingegebene Wort ist ein Palindrom." << endl;
	}

	else
	{
		cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
	}
	system("PAUSE");
	return 0;
}