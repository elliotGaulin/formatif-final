#pragma once
#include <vector>
class Matrice
{
private:
	std::vector<int> m_data;
	int m_height;
	int m_width;

public:
	Matrice(int m_height, int m_width);
	Matrice(int m_height, int m_width, std::vector<int> m_data);

	bool IsSameSize(Matrice);

	//Lance une erreur si les matrices ne sont pas de la même taille
	int Convolution(Matrice);

	int GetWidth();
	int GetHeight();

	int Get(int i);
	void Set(int i, int value);


};

