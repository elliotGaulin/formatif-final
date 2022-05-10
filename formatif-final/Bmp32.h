#pragma once
#include <vector>
#include <string>
#include "Header.h"
#include <queue>
class Bmp32

{

private:
	std::vector<uint8_t> m_data{};
	BMPFileHeader m_fileHeader;
	BMPInfoHeader m_infoHeader;
	BMPColorHeader m_colorHeader;
	std::queue<Calque> m_calques;
	int IndexFromPos(int, int);
	std::vector<uint8_t> Merge();
	
protected:

public:
	Bmp32(const char*);
	Bmp32(int, int, int, int, int);
	~Bmp32();
	void Save(const char*);
	void DrawRect(int, int, int, int, int r = 255, int g = 255, int b = 255, int a = 255);
	void Negative();
	void Blur();
	void Encode(std::string message);
	std::string Decode();
};