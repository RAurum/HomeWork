#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	int sum = 0;

	std::cout << "������� ����� ����� �� 1 �� 100: ";
	std::cin >> A;


	while (A <= 100)
	{
		sum += A;
		A++;
	}

	std::cout << "����� ����� = " << sum << std::endl;
	return 0;
}