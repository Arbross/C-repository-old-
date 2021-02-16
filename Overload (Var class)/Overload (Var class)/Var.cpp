#include "var.h"

var::var()
{
	int_var = 0;
	double_var = 0.0;
	string_var = "NULL";
}

var::var(const int int_var)
	: int_var(int_var) 
{
	double_var = 0.0;
	string_var = "NULL";
}

var::var(const double double_var)
	: double_var(double_var) 
{
	int_var = 0;
	string_var = "NULL";
}

var::var(const char string_var[])
	: string_var(string_var) 
{
	int_var = 0;
	double_var = 0.0;
}

bool var::operator<(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var < tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var < tmp;
		}
		else {
			return this->string_var < other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var < tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var < tmp;
		}
		else {
			return this->double_var < other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var < tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var < tmp;
		}
		else {
			return this->int_var < other.int_var;
		}
	}
}

bool var::operator<=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var <= tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var <= tmp;
		}
		else {
			return this->string_var <= other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var <= tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var <= tmp;
		}
		else {
			return this->double_var <= other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var <= tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var <= tmp;
		}
		else {
			return this->int_var <= other.int_var;
		}
	}
}

bool var::operator>(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var > tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var > tmp;
		}
		else {
			return this->string_var > other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var > tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var > tmp;
		}
		else {
			return this->double_var > other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var > tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var > tmp;
		}
		else {
			return this->int_var > other.int_var;
		}
	}
}

bool var::operator>=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var >= tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var >= tmp;
		}
		else {
			return this->string_var >= other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var >= tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var >= tmp;
		}
		else {
			return this->double_var >= other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var >= tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var >= tmp;
		}
		else {
			return this->int_var >= other.int_var;
		}
	}
}

bool var::operator==(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var == tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var == tmp;
		}
		else {
			return this->string_var == other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var == tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var == tmp;
		}
		else {
			return this->double_var == other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var == tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var == tmp;
		}
		else {
			return this->int_var == other.int_var;
		}
	}
}

bool var::operator!=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var != tmp;
		}
		else if (other.double_var != 0.0)
		{
			string tmp = to_string(other.int_var);
			return this->string_var != tmp;
		}
		else {
			return this->string_var != other.string_var;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			double tmp = other.int_var;
			return this->double_var != tmp;
		}
		else if (other.string_var != "NULL")
		{
			double tmp = stoi(other.string_var);
			return this->double_var != tmp;
		}
		else {
			return this->double_var != other.double_var;
		}
	}
	else if (this->double_var == 0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			int tmp = other.double_var;
			return this->int_var != tmp;
		}
		else if (other.string_var != "NULL")
		{
			int tmp = stoi(other.string_var);
			return this->int_var != tmp;
		}
		else {
			return this->int_var != other.int_var;
		}
	}
}

var var::operator+(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var + otherOne;
			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.string_var = this->string_var + other.string_var;
			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var + other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var + other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var + other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var + other.int_var;
			return tmp;
		}
	}
}

var var::operator-(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			/*bool b = false;
			string p;

			for (int i = 0; i < string_var.size(); i++)
			{
				for (int j = 0; j < string_var.size(); j++)
				{
					char temp = NULL;
					for (int k = 0; k < other.string_var.size(); k++)
					{
						if (string_var[j] != other.string_var[k])
						{
							temp = string_var[j];
						}
						else {
							temp = NULL;
							break;
						}
					}
					tmp.string_var[i] = temp;
					if (tmp.string_var[i] != tmp.string_var.empty())
					{
						i++;
					}
				}
			}*/

			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			// tmp.string_var = this->string_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			// tmp.string_var = this->string_var - other.string_var;
			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var - other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var - other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var - other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var - other.int_var;
			return tmp;
		}
	}
}

var var::operator*(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else {
			var tmp;
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(other.string_var); j++)
				{
					if (this->string_var[i] == other.string_var[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var * other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var * otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var * other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var * other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var * otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var * other.int_var;
			return tmp;
		}
	}
}

var var::operator/(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			bool flag = false;
			auto otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						flag = true;
					}
				}
			}

			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			auto otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else {
			var tmp;
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(other.string_var); j++)
				{
					if (this->string_var[i] == other.string_var[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var / other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var / otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var / other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var / other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var / otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var / other.int_var;
			return tmp;
		}
	}
}

var var::operator+=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var + otherOne;
			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.string_var = this->string_var + other.string_var;
			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var + other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var + other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var + other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var + otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var + other.int_var;
			return tmp;
		}
	}
}

var var::operator-=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		/*if (other.int_var != 0)
		{
			var tmp;
			auto otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var - otherOne;
			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			auto otherOne = to_string(other.int_var);
			tmp.string_var = this->string_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.string_var = this->string_var - other.string_var;
			return tmp;
		}*/
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var - other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var - other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var - other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var - otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var - other.int_var;
			return tmp;
		}
	}
}

var var::operator*=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else {
			var tmp;
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(other.string_var); j++)
				{
					if (this->string_var[i] == other.string_var[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var * other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var * otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var * other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var * other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var * otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var * other.int_var;
			return tmp;
		}
	}
}

var var::operator/=(const var& other)
{
	if (this->int_var == 0 && this->double_var == 0.0)
	{
		if (other.int_var != 0)
		{
			var tmp;
			bool flag = false;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						flag = true;
					}
				}
			}

			return tmp;
		}
		else if (other.double_var != 0.0)
		{
			var tmp;
			string otherOne = to_string(other.int_var);
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(otherOne); j++)
				{
					if (this->string_var[i] == otherOne[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
		else {
			var tmp;
			for (size_t i = 0; i < size(this->string_var); i++)
			{
				for (size_t j = 0; j < size(other.string_var); j++)
				{
					if (this->string_var[i] == other.string_var[j])
					{
						tmp.string_var += this->string_var[i];
					}
				}
			}

			return tmp;
		}
	}
	else if (this->int_var == 0 && this->string_var == "NULL")
	{
		if (other.int_var != 0)
		{
			var tmp;
			tmp.double_var = this->double_var / other.int_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.double_var = this->double_var / otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.double_var = this->double_var / other.double_var;
			return tmp;
		}
	}
	else if (this->double_var == 0.0 && this->string_var == "NULL")
	{
		if (other.double_var != 0.0)
		{
			var tmp;
			tmp.int_var = this->int_var / other.double_var;
			return tmp;
		}
		else if (other.string_var != "NULL")
		{
			var tmp;
			double otherOne = stoi(other.string_var);
			tmp.int_var = this->int_var / otherOne;
			return tmp;
		}
		else {
			var tmp;
			tmp.int_var = this->int_var / other.int_var;
			return tmp;
		}
	}
}

ostream& operator<<(ostream& os, const var& other)
{
	if (other.double_var != 0.0)
	{
		os << other.double_var;
		return os;
	}
	else if (other.int_var != 0)
	{
		os << other.int_var;
		return os;
	}
	else if (other.string_var != "")
	{
		os << other.string_var;
		return os;
	}
}
