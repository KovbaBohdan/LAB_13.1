#include "CppUnitTest.h"
#include "../LAB_13.1/var.h"
#include "../LAB_13.1/sum.h"
#include "../LAB_13.1/dod.h"
#include "pch.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace Lab_13_1_UnitTest
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestSum)
        {
            // Arrange
            x_p = 0;
            x_k = 1;
            dx = 0.1;
            e = 0.0001;

            // Act
            sum();

            // Assert
            Assert::AreEqual(10, n); // Assuming the expected number of iterations is 10
            Assert::AreEqual(0.94643, s, 0.0001); // Assuming the expected sum value is 0.94643
        }
    };
}



