#pragma once
#include <iostream>

/*���� �����.

_________________________TV and Remote__________

�������� ����  TV(��������)
� ������
	+ ���� ���������(���������- ���������)
	+ ������� ������� �����
	+ �������� �����(����� ������)
	+ ������� ������ � ��������(���������� ���� ����������!) 
	+ ����������� �������  ���������(���������� ���� ����������!) 

��������
	+ �����������(�)(�������� ��������  ���������)
	+ power() - on/off(�������� �� ��������� ���������)
	+ nextChannel() - ����������� �� ��������� �����(������ ��� ���������� ��������))
	+ prevChannel() - ����������� �� ��������� �����(������ ��� ���������� ��������))
	+ incVolume() - �������� �������
	+ decVolume() - �������� �������

�������� ���� Remote(����� ��������� ����������)  ������ �� ����� TV.
����  Remote  ������� ���� ������

	- power() - on/off(�������� �� ��������� ������� ���������)
	- �������� ++ - ����������� �� ��������� ����� ������� ��������� (������ ��� ���������� ��������))
	- �������� -- - ����������� �� ��������� �����(������ ��� ���������� ��������))
	- incVolume() - �������� �������
	- decVolume() - �������� �������
	- goToChannel() ����������� �� ����� �� ������� � ������� ��������

��������� ������ �����.
* ����������� ��������� ��������� ������ ����������� � ������ ������*/

class TV
{
public:
	TV(bool& isTurn, size_t& volume, size_t& channelNumber, size_t& maxChannel, size_t& maxVolume);

	void setChannel(size_t& channelNumber);

	void power();
	void nextChannel();
	void prevChannel();
	void incVolume(size_t& volume);
	void decVolume(size_t& volume);

	void Print() const;

	~TV();
private:
	bool isTurn = false;
	size_t volume;
	size_t channelNumber;
	const size_t maxChannel;
	const size_t maxVolume;
};

inline TV::TV(bool& isTurn, size_t& volume, size_t& channelNumber, size_t& maxChannel, size_t& maxVolume)
	: isTurn(isTurn), volume(volume), channelNumber(channelNumber), maxChannel(maxChannel), maxVolume(maxVolume)
{
	maxChannel = 100;
	maxVolume = 100;

	std::cout << maxChannel << std::endl;
	std::cout << maxVolume << std::endl;
}

inline void TV::setChannel(size_t& channelNumber)
{
	this->channelNumber = channelNumber;
}

inline void TV::power()
{
	if (this->isTurn == false)
	{
		this->isTurn = true;
	}
	else {
		this->isTurn = false;
	}
}

inline TV::~TV()
{
	
}
