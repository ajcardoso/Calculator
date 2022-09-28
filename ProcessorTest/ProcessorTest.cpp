#include "pch.h"
#include "CppUnitTest.h"
#include "../SWE_App/Processor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProcessorTest
{
	TEST_CLASS(ProcessorTest)
	{
	public:
		TEST_METHOD(HexadecimalforTen)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("10");
			std::string answer = processor->GetHexadecimal();
			std::string a = "0xA";
			Assert::AreEqual(a, answer);
		}

		TEST_METHOD(DecimalforTen)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat(" 10");
			std::string answer = processor->GetDecimal();
			std::string ten = " 10";
			Assert::AreEqual(ten, answer);
		}

		TEST_METHOD(DecimalforThousand)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat(" 1000");
			std::string num = " 1000";
			std::string answer = processor->GetDecimal();
			Assert::AreEqual(num, answer);
		}

		TEST_METHOD(HexadecimalforThousand)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat(" 1000");
			std::string num = "0xE83";
			std::string answer = processor->GetHexadecimal();
			Assert::AreEqual(num, answer);
		}
		
		TEST_METHOD(HexadecimalforNintyNineThousandNineHundredNintyNine)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat(" 99999");
			std::string answer = processor->GetHexadecimal();
			std::string num = "0xF9681";
			Assert::AreEqual(num,answer);
		}

		TEST_METHOD(BinaryTen)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("10");
			std::string num = "00000000000000000000000000001010";
			Assert::AreEqual(num, processor->GetBinary());
		}

		TEST_METHOD(BinaryHundred)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("100");
			std::string num = "00000000000000000000000001100100";
			Assert::AreEqual(num, processor->GetBinary());
		}

		TEST_METHOD(BinaryNineMillionNineHundredNintyNineThousandNineHundredNintyNine)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("9999999");
			std::string num = "00000000100110001001011001111111";
			Assert::AreEqual(num, processor->GetBinary());
		}

		TEST_METHOD(EqualMultiply)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("5x");
			processor->SetSecondFloat("1");
			std::string num = "5";
			Assert::AreEqual(num, processor->Equal());
		}

		TEST_METHOD(EqualSubtract)
		{
			Processor* processor = Processor::GetInstance();
			processor->SetFirstFloat("5-");
			processor->SetSecondFloat("5");
			std::string num = "0";
			Assert::AreEqual(num, processor->Equal());
		}
	};
}
