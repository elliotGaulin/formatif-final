#include "Matrice.h"
#include <stdexcept>

Matrice::Matrice(int height, int width) : m_height{ height }, m_width{ width }, m_data{ std::vector<int>(height * width, 0) } {};

Matrice::Matrice(int height, int width, std::vector<int> data) : m_height{ height }, m_width{ width }, m_data{ data } {};

int Matrice::GetHeight()
{
	return m_height;
}

int Matrice::GetWidth()
{
	return m_width;
}

bool Matrice::IsSameSize(Matrice mat)
{
	if (m_width == mat.GetWidth() && m_height == mat.GetHeight())
	{
		return true;
	}
	return false;
}

int Matrice::Convolution(Matrice mat)
{
	if (!IsSameSize(mat))
	{
		throw std::invalid_argument("Les matrices ne sont pas de la même taille");
	}
	int total{ 0 };
	for (int i = 0; i < m_data.size(); i++)
	{
		total += m_data[i] * mat.Get(i);
	}
	return total / m_data.size();
}

int Matrice::Get(int i)
{
	if (i > m_data.size() || i < 0)
	{
		throw std::range_error("L'index n'est pas dans le tableau");
	}
	return m_data[i];
}

void Matrice::Set(int i, int value)
{
	if (i >= m_data.size() || i < 0)
	{
		throw std::range_error("L'index n'est pas dans le tableau");
	}
	m_data[i] = value;
}