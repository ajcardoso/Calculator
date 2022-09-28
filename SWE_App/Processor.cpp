#include "Processor.h"

Processor* Processor::_processor = nullptr;

Processor* Processor::GetInstance() {
	if (_processor == nullptr) {
		_processor = new Processor();
	}
	return _processor;
}

void Processor::SetFirstFloat(std::string num) {
	firstFloat = num;
}

void Processor::SetSecondFloat(std::string num) {
	secondFloat = num;
}

std::string Processor::GetDecimal() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			firstFloat.pop_back();
			return firstFloat;
		}

	}

	return firstFloat;
}

std::string Processor::GetHexadecimal() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}

	std::string hexa = "";
	int number = std::stoi(firstFloat);
	while (number > 0)
	{
		int _mod = number % 16;
		if (_mod < 10)
		{
			hexa += std::to_string(_mod);
		}
		else if (_mod == 10)
		{
			hexa = "A" + hexa;
		}
		else if (_mod == 11)
		{
			hexa = "B" + hexa;
		}
		else if (_mod == 12)
		{
			hexa = "C" + hexa;
		}
		else if (_mod == 13)
		{
			hexa = "D" + hexa;
		}
		else if (_mod == 14)
		{
			hexa = "E" + hexa;
		}
		else if (_mod == 15)
		{
			hexa = "F" + hexa;
		}
		number = number / 16;
	}
	hexa = "0x" + hexa;

	return hexa;
}

std::string Processor::GetBinary() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	std::string bin = "";
	int number = std::stoi(firstFloat);;

	for (int i = 0; i < 32; i++)
	{
		if (number % 2 == 0)
		{
			bin = "0" + bin;
		}
		else
		{
			bin = "1" + bin;
		}
		number = number / 2;
	}
	return bin;
}

std::string Processor::Multiply() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	firstFloat = firstFloat + "x";
	return firstFloat;
}

std::string Processor::Divide() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	firstFloat = firstFloat + "/";
	return firstFloat;
}

std::string Processor::Add() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	firstFloat = firstFloat + "+";
	return firstFloat;
}

std::string Processor::Subtract() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	firstFloat = firstFloat + "-";
	return firstFloat;
}

std::string Processor::Sin() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	return std::to_string(std::sin(std::stof(firstFloat)));
}

std::string Processor::Cos() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	return std::to_string(std::cos(std::stof(firstFloat)));
}

std::string Processor::Tan() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	return std::to_string(std::tan(std::stof(firstFloat)));
}

std::string Processor::Mod() {

	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	firstFloat = firstFloat + "%";
	return firstFloat;
}

void Processor::Clear() {

	firstFloat = " ";
	secondFloat = " ";

}

std::string Processor::Negative() {

	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	float num = std::stof(firstFloat);
	num = num * (-1);
	firstFloat = std::to_string(num);

	return firstFloat;
}

std::string Processor::Equal() {
	if (firstFloat == " ")
	{
		std::string error = "ERROR... INPUT VALUE FIRST";
		return error;
	}
	

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x')
		{
			firstFloat.pop_back();
			float num1 = std::stof(firstFloat);
			float num2 = std::stof(secondFloat);
			num1 = num1 * num2;
			secondFloat = " ";
			int num3 = (int)num1;
			if (num1 - num3 != 0)
			{
				firstFloat = std::to_string(num1);
			}
			else
			{
				firstFloat = std::to_string(num3);
			}
			return firstFloat;
		}
		else if (firstFloat[i] == '/')
		{
			firstFloat.pop_back();
			float num1 = std::stof(firstFloat);
			float num2 = std::stof(secondFloat);
			num1 = num1 / num2;
			secondFloat = " ";
			int num3 = (int)num1;
			if (num1 - num3 != 0)
			{
				firstFloat = std::to_string(num1);
			}
			else
			{
				firstFloat = std::to_string(num3);
			}
			return firstFloat;

		}
		else if (firstFloat[i] == '+')
		{
			firstFloat.pop_back();
			float num1 = std::stof(firstFloat);
			float num2 = std::stof(secondFloat);
			num1 = num1 + num2;
			secondFloat = " ";
			int num3 = (int)num1;
			if (num1 - num3 != 0)
			{
				firstFloat = std::to_string(num1);
			}
			else
			{
				firstFloat = std::to_string(num3);
			}
			return firstFloat;
		}
		else if (firstFloat[i] == '-')
		{
			firstFloat.pop_back();
			float num1 = std::stof(firstFloat);
			float num2 = std::stof(secondFloat);
			num1 = num1 - num2;
			secondFloat = " ";
			int num3 = (int)num1;
			if (num1 - num3 != 0)
			{
				firstFloat = std::to_string(num1);
			}
			else
			{
				firstFloat = std::to_string(num3);
			}
			return firstFloat;

		}
		else if (firstFloat[i] == '%')
		{
			firstFloat.pop_back();
			int a = std::stoi(firstFloat);
			int b = std::stoi(secondFloat);
			a = a % b;
			firstFloat = std::to_string(a);
			secondFloat = " ";
			return firstFloat;
		}

	}
	std::string error = "ERROR...INPUT VALUE FIRST";
	return error;

}

std::string Processor::One() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "1";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "1";
	return firstFloat;
}

std::string Processor::Two() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "2";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "2";
	return firstFloat;
}

std::string Processor::Three() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "3";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "3";
	return firstFloat;
}

std::string Processor::Four() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "4";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "4";
	return firstFloat;
}

std::string Processor::Five() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "5";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "5";
	return firstFloat;
}

std::string Processor::Six() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "6";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "6";
	return firstFloat;
}

std::string Processor::Seven() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "7";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "7";
	return firstFloat;
}

std::string Processor::Eight() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "8";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "8";
	return firstFloat;
}

std::string Processor::Nine() {

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "9";
			return secondFloat;
		}

	}

	firstFloat = firstFloat + "9";
	return firstFloat;
}

std::string Processor::Zero() {
	if (firstFloat == " ")
	{
		return firstFloat;
	}

	for (size_t i = 0; i < firstFloat.size(); i++)
	{

		if (firstFloat[i] == 'x' || firstFloat[i] == '/' || firstFloat[i] == '+' || firstFloat[i] == '-' || firstFloat[i] == '%')
		{
			secondFloat = secondFloat + "0";
			return secondFloat;
		}


	}

	firstFloat = firstFloat + "0";
	return firstFloat;
}
