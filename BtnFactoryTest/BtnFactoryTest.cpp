#include "pch.h"
#include "wx/wx.h"
#include "CppUnitTest.h"
#include "../SWE_App/BtnFactory.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BtnFactoryTest
{
	TEST_CLASS(BtnFactoryTest)
	{
	public:
		
		TEST_METHOD(SetLabelMethodTest)
		{
			bool isReturned = false;
			if (BtnFactory::SetLabel("x") == "x")
			{
				isReturned = true;
			}
			Assert::IsTrue(isReturned);
		}

		TEST_METHOD(SetlabelMethodTest2)
		{
			bool isReturned = true;
			if (BtnFactory::SetLabel("5") != "4")
			{
				isReturned = false;
			}
			Assert::IsFalse(isReturned);
		}

		TEST_METHOD(SetlabelMethodTest3)
		{
			bool isReturned = false;
			if (BtnFactory::SetLabel("This is a Test") == "This is a Test")
			{
				isReturned = true;
			}
			Assert::IsTrue(isReturned);
		}

		TEST_METHOD(ButtonReturnedNotNULL)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			Assert::IsNotNull(factory->GetSubtractButton(window));
		}

		TEST_METHOD(ButtonReturnedNotNULL2)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			Assert::IsNotNull(factory->GetEqualButton(window));
		}
	
		TEST_METHOD(ButtonReturnedNotNULL3)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			Assert::IsNotNull(factory->GetBinaryButton(window));
		}

		TEST_METHOD(ButtonReturnedNotNULL4)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			Assert::IsNotNull(factory->GetAddButton(window));
		}

		TEST_METHOD(ButtonReturned)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			bool isReturned = false;
			if (factory->GetModButton(window) != nullptr)
			{
				isReturned = true;
			}
			Assert::IsTrue(isReturned);
		}

		TEST_METHOD(ButtonReturned2)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			bool isReturned = false;
			if (factory->GetZeroButton(window) != nullptr)
			{
				isReturned = true;
			}
			Assert::IsTrue(isReturned);
		}

		TEST_METHOD(ButtonReturned3)
		{
			wxWindow* window = new wxWindow();
			BtnFactory* factory = new BtnFactory();
			bool isReturned = false;
			if (factory->GetNineButton(window) != nullptr)
			{
				isReturned = true;
			}
			Assert::IsTrue(isReturned);
		}
	};
}
