
#include "stdafx.h";
#include <stdlib.h>;
#include "./../src/MangoCollector.cpp";

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class MangoCollectorSpec
	{
	private:
		TestContext^ testContextInstance;
	public:
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};


#pragma region Additional test attributes
#pragma endregion 
		[TestMethod, Timeout(1000)]
		void Sample1_MangoCollector()
		{
		};
		[TestMethod, Timeout(1000)]
		void Sample2_MangoCollector()
		{
		};
		[TestMethod, Timeout(1000)]
		void Sample3_MangoCollector()
		{
		};

	};
}

