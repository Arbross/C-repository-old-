#pragma once
#include <iostream>

/*Друзі класу.

_________________________TV and Remote__________

Створити клас  TV(телевізор)
з полями
	+ стан телевізора(увімкнений- вимкнений)
	+ поточна гучність звуку
	+ поточний канал(номер каналу)
	+ кількість каналів у телевізорі(константне поле екземпляру!) 
	+ максимальна гучність  телевізора(константне поле екземпляру!) 

методами
	+ конструктор(и)(телевізор спочатку  вимкнений)
	+ power() - on/off(вмикання чи вимикання телевізору)
	+ nextChannel() - перемикання на наступний канал(працює при увімкненому телевізорі))
	+ prevChannel() - перемикання на попередній канал(працює при увімкненому телевізорі))
	+ incVolume() - збільшити гучність
	+ decVolume() - зменшити гучність

Створити клас Remote(пульт керування телевізором)  дружній до класу TV.
Клас  Remote  повинен мати методи

	- power() - on/off(вмикання чи вимикання певного телевізору)
	- операція ++ - перемикання на наступний канал певного телевізору (працює при увімкненому телевізорі))
	- операція -- - перемикання на попередній канал(працює при увімкненому телевізорі))
	- incVolume() - збільшити гучність
	- decVolume() - зменшити гучність
	- goToChannel() перемикання на канал за номером у певному телевізорі

Перевірити роботу класів.
* Передбачити можливість управління різними телевізорами з одного пульта*/

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
