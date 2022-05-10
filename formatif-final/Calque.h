#pragma once
#include "Header.h"
#include <vector>
class Calque
{
private:
	std::vector<uint8_t> m_data;
public:
	Calque(std::vector<uint8_t>);
};