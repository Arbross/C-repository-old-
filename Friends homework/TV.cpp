#include "TV.h"

void TV::nextChannel()
{
	if (this->isTurn == true)
	{
		if (!(channelNumber > maxChannel) && !(channelNumber <= 0) && channelNumber != maxChannel)
		{
			channelNumber++;
			this->channelNumber = channelNumber;
		}
		else {
			std::cout << "Error (TV::nextChannel - chennelNumber > maxChannel or channelNumber <= 0 or channelNumber != 100)" << std::endl;
		}
	}
	else {
		std::cout << "TV turned off :)" << std::endl;
	}
}

void TV::prevChannel()
{
	if (this->isTurn == true)
	{
		if (!(channelNumber > maxChannel) && !(channelNumber <= 0) && channelNumber != 1)
		{
			channelNumber--;
			this->channelNumber = channelNumber;
		}
		else {
			std::cout << "Error (TV::nextChannel - chennelNumber > maxChannel or channelNumber <= 0 or channelNumber != 1)" << std::endl;
		}
	}
	else {
		std::cout << "TV turned off :)" << std::endl;
	}
}

void TV::incVolume(size_t& volume)
{
	if (this->isTurn == true)
	{
		if (!(volume > maxVolume) && !(volume <= 0) && volume != 100)
		{
			volume++;
			this->volume = volume;
		}
		else {
			std::cout << "Error (TV::incVolume - volume > maxVolume or volume <= 0 or volume != 100)" << std::endl;
		}
	}
	else {
		std::cout << "TV turned off :)" << std::endl;
	}
}

void TV::decVolume(size_t& volume)
{
	if (this->isTurn == true)
	{
		if (!(volume > maxVolume) && !(volume <= 0) && volume != 1)
		{
			volume--;
			this->volume = volume;
		}
		else {
			std::cout << "Error (TV::incVolume - volume > maxVolume or volume <= 0 or volume != 1)" << std::endl;
		}
	}
	else {
		std::cout << "TV turned off :)" << std::endl;
	}
}

void TV::Print() const
{
	std::cout << isTurn << std::endl;
	std::cout << volume << std::endl;
	std::cout << channelNumber << std::endl;
}
