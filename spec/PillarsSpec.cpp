
#include "stdafx.h";
#include <stdlib.h>;
#include "./../src/Pillars.cpp";

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class PillarsSpec
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
		void Sample1_Pillars()
		{
		};
		[TestMethod, Timeout(1000)]
		void Sample2_Pillars()
		{
			
		};
		[TestMethod, Timeout(1000)]
		void Sample3_Pillars()
		{
		};

		
	};
}

