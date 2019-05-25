#include <iostream>
#include<cstdlib>
int main()
{
	std::string przejscie;
	int a;
	std::cout << "   ____  __  __ ______ _   _              _ _    _ __  __ _____  " << std::endl;
	std::cout << "  / __ \\|  \\/  |  ____| \\ | |   /\\       | | |  | |  \\/  |  __ \\ " << std::endl;
	std::cout << " | |  | | \\  / | |__  |  \\| |  /  \\      | | |  | | \\  / | |__) |" << std::endl;
	std::cout << " | |  | | |\\/| |  __| | . ` | / /\\ \\ _   | | |  | | |\\/| |  ___/ " << std::endl;
	std::cout << " | |__| | |  | | |____| |\\  |/ ____ \\ |__| | |__| | |  | | |     " << std::endl;
	std::cout << "  \\____/|_|  |_|______|_| \\_/_/    \\_\\____/ \\____/|_|  |_|_|     " << std::endl;
	system("pause");
	system("cls");
	std::cout << "Witaj nazywam si\251 wr\242\276bita Jacek." <<std::endl;
	do
	{
		std::cout << "Czy chcesz pozna\206 przysz\210o\230\206?" << std::endl;
		std::cin >> przejscie;
		system("cls");
		if (przejscie == "tak")
		{
			std::cout << "\276ycz\251 d\210ugiej przysz\210o\230ci." << std::endl;
		}
		else if (przejscie == "nie")
		{
			return 0;
		}
		else
		{
			std::cout << "Z\210a odpowied\253, spr\242buj jeszcze raz."<< std::endl;
			system("pause");
			system("cls");
		}
	} while (przejscie != "tak" && przejscie != "nie");
	system("pause");
	system("cls");
	std::cout << "Jaki jest tw\242j rekord w skoku w dal?(podaj wynik(sam\245 liczb\251), zaokr\245glony do ca\210kowitej liczby.)" << std::endl;
	std::cin >> a;
	switch (a)
	{
	case 0:
		std::cout << "Widz\251 pustk\251, nico\230\206. To wygl\245da na to, \276e wkr\242tce umrzesz." << std::endl;
		break;
	case 1:
		std::cout << "Widz\251 klif g\242rski. To oznacza, \276e umrzesz za 1 rok spadaj\245c z klifu." << std::endl;
		break;
	case 2:
		std::cout << "Widz\251 spalone frytki. To oznacza, \276e umrzesz za 2 lata umieraj\245c od poparze\344 4 stopnia." << std::endl;
		break;
	case 3:
		std::cout << "Widz\251 pistolet. To oznacza, \276e umrzesz za 3 lata umieraj\245c od kulki paintbolowej." << std::endl;
		break;
	case 4:
		std::cout << "Widz\251 wielki g\210az. To oznacza, \276e umrzesz za 4 lata umieraj\245c od przygniecenia g\210azem." << std::endl;
		break;
	case 5:
		std::cout << "Widz\251 chusteczki higieniczne. To oznacza, \276e umrzesz za 5 lat umieraj\245c od \230mierciono\230nej choroby." << std::endl;
		break;
	case 6:
		std::cout << "Widz\251 b\210yskawice. To oznacza, \276e umrzesz za 6 lat umieraj\245c od pr\245du elektrycznego." << std::endl;
		break;
	case 7:
		std::cout << "Widz\251 \210opate. To oznacza, \276e umrzesz za 7 lat umieraj\245c od przem\251czenia." << std::endl;
		break;
	case 8:
		std::cout << "Widz\251 wod\251. To oznacza, \276e umrzesz za 8 lat umieraj\245c od zatoni\251cia." << std::endl;
		break;
	case 9:
		std::cout << "Widz\251 \230wiat\210o. To oznacza, \276e b\251dziesz \276y\210 100 lat." << std::endl;
	default:
		std::cout << "K\210amiesz, nie ma ju\276 dla ciebie ratunku." << std::endl;
		break;
	}
	system("pause");
	system("cls");
	std::cout << "Dzi\251kuje za skorzystanie z mojej wr\242\276by." << std::endl;
	system("pause");
	return 0;
}