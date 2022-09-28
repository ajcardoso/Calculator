#pragma once
#include <iostream>
#include <string>


class Processor
{
private: 
	static Processor* _processor;
	Processor() {}
public:

	static Processor* GetInstance();
	std::string firstFloat = " ";
	std::string secondFloat = " ";
	void SetFirstFloat(std::string num);
	void SetSecondFloat(std::string num);
	
	// Operations
	std::string Multiply();
	std::string Divide();
	std::string Add();
	std::string Subtract();
	std::string Sin();
	std::string Cos();
	std::string Tan();
	std::string Mod();
	std::string Equal();
	void Clear();
	std::string Negative();


	// Numbers
	std::string One();
	std::string Two();
	std::string Three();
	std::string Four();
	std::string Five();
	std::string Six();
	std::string Seven();
	std::string Eight();
	std::string Nine();
	std::string Zero();


	// rule of 3 
	Processor(Processor& _copy) = delete;
	void operator=(const Processor& _copy) = delete;


	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();

};

