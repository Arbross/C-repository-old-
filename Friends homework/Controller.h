#pragma once
#include "TV.h"

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

	+ power() - on/off(�������� �� ��������� ������� ���������)
	+ �������� ++ - ����������� �� ��������� ����� ������� ��������� (������ ��� ���������� ��������))
	+ �������� -- - ����������� �� ��������� �����(������ ��� ���������� ��������))
	+ incVolume() - �������� �������
	+ decVolume() - �������� �������
	+ goToChannel() ����������� �� ����� �� ������� � ������� ��������

��������� ������ �����.
* ����������� ��������� ��������� ������ ����������� � ������ ������*/

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
