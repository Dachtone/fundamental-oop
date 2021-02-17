#include <iostream>
#include <clocale>
#include <iomanip>
#include <string>

void PrintPoem()
{
	// ������� ������������� ������ ������
	std::cout << "�� ����� ��������, � ������ ������ ����," << std::endl
		<< "����� ����� ������������� � �������� ������." << std::endl
		<< "������ ���� �� ��, ��� ������ �������� ���," << std::endl
		<< "����� ������� �������, ��� ���� ���� ���� �����." << std::endl
		<< "� �� ������� �� ������� �����." << std::endl
		<< "�� ����� �������� � ������ ������ ����," << std::endl
		<< "������ ���� �� ��, ��� ������ �������� ���." << std::endl;
}

void IsLetterLowercase()
{
	std::cout << "�����: ";
	char letter;
	std::cin >> letter;

	std::cout << islower(letter) << std::endl;;
}

void ConvertCurrency()
{
	std::cout << "$";
	double value;
	std::cin >> value;
	
	std::cout << value / 1.487 << " ������, "
		<< value / 0.172 << " �������, "
		<< value / 0.584 << " �����, "
		<< value / 0.172 << " ���" << std::endl;
}

void ConvertTemperature()
{
	std::cout << "�������� �������: ";
	double value;
	std::cin >> value;

	std::cout << value * 9.0 / 5.0 + 32.0 << " �������� �� ����������" << std::endl;
}

void FillSpacesWithDots()
{
	std::cout << 1990 << std::setw(8) << std::setfill('.') << 135 << std::endl
		<< 1991 << std::setw(8) << std::setfill('.') << 7290 << std::endl
		<< 1992 << std::setw(8) << std::setfill('.') << 11300 << std::endl
		<< 1993 << std::setw(8) << std::setfill('.') << 16200 << std::endl;

	std::cout << std::setfill(' '); // ����������� � ������� �� ���������
}

void SumFractions()
{
	int fraction[2][2];
	char dummy;
	
	for (int i = 0; i < 2; i++)
	{
		std::cout << "������� " << i + 1 << " �����: ";
		std::cin >> fraction[i][0] >> dummy >> fraction[i][1];
	}

	std::cout << "����� ����� " << fraction[0][0] * fraction[1][1] + fraction[0][1] * fraction[1][0]
		<< "/" << fraction[0][1] * fraction[1][1] << std::endl;
}

void ConvertToOldPounds()
{
	std::cout << "������� ���������� ������: ";
	int pounds;
	std::cin >> pounds;

	std::cout << "������� ���������� ���������: ";
	int shillings;
	std::cin >> shillings;

	std::cout << "������� ���������� ������: ";
	int pence;
	std::cin >> pence;

	std::cout << "���������� ������: " << std::setprecision(3) << pounds + (shillings * 12 + pence) / 240.0f << std::endl;
}

void PrintPeopleTable()
{
	// ������ ��������
	int width[4] = { 10, 10, 15, 20 };

	// ������� ��� ������
	std::string information[5][4] =
	{
		{ "�������", "���", "�����", "�����" },
		{ "", "", "", "" },
		{ "������", "�������", "�������� 16", "�����-���������" },
		{ "������", "������", "�������� 3", "�������" },
		{ "�������", "����", "��������� 21", "�����������" }
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
	std::cout << "������� ����� ���������� ������: ";
	double value;
	std::cin >> value;
	
	int pounds = static_cast<int>(value);
	int fullPence = static_cast<int>(round((value - pounds) * 240));
	int shillings = fullPence / 12;
	int pence = fullPence % 12;

	std::cout << "������������� ����� � ������ ����� ������: " << pounds << "." << shillings << "." << pence << std::endl;
}

int main()
{
	// ��������� ��������� ��� ������ ���������
	setlocale(LC_ALL, "Russian");

	// ���������� �������:
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