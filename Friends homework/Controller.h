#pragma once
#include "TV.h"

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

	+ power() - on/off(вмикання чи вимикання певного телевізору)
	+ операція ++ - перемикання на наступний канал певного телевізору (працює при увімкненому телевізорі))
	+ операція -- - перемикання на попередній канал(працює при увімкненому телевізорі))
	+ incVolume() - збільшити гучність
	+ decVolume() - зменшити гучність
	+ goToChannel() перемикання на канал за номером у певному телевізорі

Перевірити роботу класів.
* Передбачити можливість управління різними телевізорами з одного пульта*/

class Controller
{
public:
	void power();
	Controller& operator ++();
	Controller& operator --();

	void incVolume(size_t volume);
	void decVolume(size_t volume);

	void goToChannel(size_t channel);

	void Print() const;
private:
	TV* tv;
};

inline void Controller::power()
{
	tv->power();
}

inline Controller& Controller::operator++()
{
	tv->nextChannel();
	return *this;
}

inline Controller& Controller::operator--()
{
	tv->prevChannel();
	return *this;
}

inline void Controller::incVolume(size_t volume)
{
	tv->incVolume(volume);
}

inline void Controller::decVolume(size_t volume)
{
	tv->decVolume(volume);
}

inline void Controller::goToChannel(size_t channel)
{
	tv->setChannel(channel);
}

inline void Controller::Print() const
{
	tv->Print();
}
