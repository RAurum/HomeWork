#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double N;
	double M;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> N;


	do
	{
		std::cout << "������� ������ �����:" << std::endl;
		std::cin >> M;
	} while (N * N != M);

	return 0;
}