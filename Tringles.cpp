#include <iostream>

// Tringles
int main()
{
	int fSide, sSide, thiSide;

	std::cout << "Please, to input a first side tringle:  " << std::endl;
	std::cin >> fSide;

	std::cout << "Please, to input a second side tringle:  " << std::endl;
	std::cin >> sSide;

	std::cout << "Please, to input a trirdly side tringle:  " << std::endl;
	std::cin >> thiSide;

	if ( fSide + sSide <= thiSide || fSide + thiSide <= sSide || sSide + thiSide <= fSide) // Треугольник существует  или нет
	{
		std::cout << "The tringle is not" << std::endl;
	}
	else
	{
		if ( fSide*fSide + sSide*sSide == thiSide*thiSide || fSide*fSide + thiSide*thiSide == sSide*sSide || sSide*sSide + thiSide* thiSide == fSide* fSide) // Прямоугольный треугольник 
		{
			std::cout << "The tringle is right" << std::endl; 
			return 0;
		}
		
		if (fSide != sSide && fSide != thiSide && sSide != thiSide) // Разностороний треугонинки(обычный)
		{
			std::cout << "The tringle is scalene " << std::endl;
			return 0;
		}

		if ( fSide == sSide && sSide == thiSide ) // Равностороний треугольник
		{
			std::cout << "The tringle is equilateral" << std::endl;
		}
		else // Равнобедреный треугольник 
		{
			std::cout << "The tringle is isoceles" << std::endl;
		}
	}

	return 0;
}