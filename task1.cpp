#include <iostream>
#include <clocale>
#include <iomanip>
#include <string>

void PrintPoem()
{
	// Отрывок стихотворения Дилана Томаса
	std::cout << "Не уходи смиренно, в сумрак вечной тьмы," << std::endl
		<< "Пусть тлеет бесконечность в яростном закате." << std::endl
		<< "Пылает гнев на то, как гаснет смертный мир," << std::endl
		<< "Пусть мудрецы твердят, что прав лишь тьмы покой." << std::endl
		<< "И не разжечь уж тлеющий костёр." << std::endl
		<< "Не уходи смиренно в сумрак вечной тьмы," << std::endl
		<< "Пылает гнев на то, как гаснет смертный мир." << std::endl;
}

void IsLetterLowercase()
{
	std::cout << "Буква: ";
	char letter;
	std::cin >> letter;

	std::cout << islower(letter) << std::endl;;
}

void ConvertCurrency()
{
	std::cout << "$";
	double value;
	std::cin >> value;
	
	std::cout << value / 1.487 << " фунтов, "
		<< value / 0.172 << " франков, "
		<< value / 0.584 << " марок, "
		<< value / 0.172 << " йен" << std::endl;
}

void ConvertTemperature()
{
	std::cout << "Градусов Цельсия: ";
	double value;
	std::cin >> value;

	std::cout << value * 9.0 / 5.0 + 32.0 << " градусов по Фаренгейту" << std::endl;
}

void FillSpacesWithDots()
{
	std::cout << 1990 << std::setw(8) << std::setfill('.') << 135 << std::endl
		<< 1991 << std::setw(8) << std::setfill('.') << 7290 << std::endl
		<< 1992 << std::setw(8) << std::setfill('.') << 11300 << std::endl
		<< 1993 << std::setw(8) << std::setfill('.') << 16200 << std::endl;

	std::cout << std::setfill(' '); // Возвращение к символу по умолчанию
}

void SumFractions()
{
	int fraction[2][2];
	char dummy;
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Введите " << i + 1 << " дробь: ";
		std::cin >> fraction[i][0] >> dummy >> fraction[i][1];
	}

	std::cout << "Сумма равна " << fraction[0][0] * fraction[1][1] + fraction[0][1] * fraction[1][0]
		<< "/" << fraction[0][1] * fraction[1][1] << std::endl;
}

void ConvertToOldPounds()
{
	std::cout << "Введите количество фунтов: ";
	int pounds;
	std::cin >> pounds;

	std::cout << "Введите количество шиллингов: ";
	int shillings;
	std::cin >> shillings;

	std::cout << "Введите количество пенсов: ";
	int pence;
	std::cin >> pence;

	std::cout << "Десятичных фунтов: " << std::setprecision(3) << pounds + (shillings * 12 + pence) / 240.0f << std::endl;
}

void PrintPeopleTable()
{
	// Ширина столбцов
	int width[4] = { 10, 10, 15, 20 };

	// Таблица для вывода
	std::string information[5][4] =
	{
		{ "Фамилия", "Имя", "Адрес", "Город" },
		{ "", "", "", "" },
		{ "Петров", "Василий", "Кленовая 16", "Санкт-Петербург" },
		{ "Иванов", "Сергей", "Осиновая 3", "Находка" },
		{ "Сидоров", "Иван", "Березовая 21", "Калининград" }
	};

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << std::setw(width[j]) << std::setiosflags(std::ios::left) << information[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void ConvertFromOldPounds()
{
	std::cout << "Введите число десятичных фунтов: ";
	double value;
	std::cin >> value;
	
	int pounds = static_cast<int>(value);
	int fullPence = static_cast<int>(round((value - pounds) * 240));
	int shillings = fullPence / 12;
	int pence = fullPence % 12;

	std::cout << "Эквивалентная сумма в старой форме записи: " << pounds << "." << shillings << "." << pence << std::endl;
}

int main()
{
	// Установка кодировки для вывода кириллицы
	setlocale(LC_ALL, "Russian");

	// Выполнение заданий:
	PrintPoem();
	std::cout << std::endl;
	IsLetterLowercase();
	std::cout << std::endl;
	ConvertCurrency();
	std::cout << std::endl;
	ConvertTemperature();
	std::cout << std::endl;
	FillSpacesWithDots();
	std::cout << std::endl;
	SumFractions();
	std::cout << std::endl;
	ConvertToOldPounds();
	std::cout << std::endl;
	PrintPeopleTable();
	std::cout << std::endl;
	ConvertFromOldPounds();

	return 0;
}