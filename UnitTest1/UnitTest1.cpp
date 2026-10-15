#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\aizen\Documents\lab c++\Lab_5\Lab_5.1\Lab_5.1\Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab5_1Tests
{
    TEST_CLASS(Lab5_1Tests)
    {
    public:
        TEST_METHOD(h_one_one)
        {
            // h(1,1) = 1 / (1 + 1) = 0.5
            Assert::AreEqual(0.5, h(1, 1), 1e-9);
        }

        TEST_METHOD(h_zero_x)
        {
            Assert::AreEqual(0.0, h(0, 5), 1e-9);
        }

        TEST_METHOD(h_two_one)
        {
            // h(2,1) = 2 / (1 + 4) = 0.4
            Assert::AreEqual(0.4, h(2, 1), 1e-9);
        }
    };
}
