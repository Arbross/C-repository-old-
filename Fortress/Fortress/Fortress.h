#pragma once
#include "ArcherTower.h"
#include "Catapult.h"

class Fortress : public ArcherTower, public Catapult
{
public:
	Fortress(const size_t& arrowCount = 0, const size_t& rockCount = 0, const size_t& thickness = 0, const size_t& state = 0);

	virtual void shoot() override;

	void setThickness(const size_t& thickness);
	void setState(const size_t& state);

	size_t getThickness() const;
	size_t getState() const;

	void checkForState() const;
private:
	size_t thickness;
	size_t state;
};

inline Fortress::Fortress(const size_t& arrowCount, const size_t& rockCount, const size_t& thickness, const size_t& state)
	: ArcherTower(arrowCount), Catapult(rockCount)
{
	setThickness(thickness);
	setState(state);
}

void Fortress::shoot()
{
	ArcherTower::shoot();
	Catapult::shoot();
}

inline void Fortress::setThickness(const size_t& thickness)
{
	this->thickness = thickness;
}

inline void Fortress::setState(const size_t& state)
{
	if (state > 100)
	{
		cerr << "Error of state.\n";
	}
	else {
		this->state = state;
	}
}

inline size_t Fortress::getThickness() const
{
	return thickness;
}

inline size_t Fortress::getState() const
{
	return state;
}

inline void Fortress::checkForState() const
{
	cout << "Thickness of wall is " << thickness << ", state of wall is " << state << ".\n";
}
