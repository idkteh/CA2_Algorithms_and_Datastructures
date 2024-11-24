#include "pch.h"
#include "CppUnitTest.h"
#include "../CA2_Ida_Tehlarova/Entity.h"
#include "../CA2_Ida_Tehlarova/TreeMap.h"
#include "../CA2_Ida_Tehlarova/BinaryTree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TreeMapTest
{
	TEST_CLASS(TreeMapTest)
	{
	public:
		//put and get
		//key set = make a binary tree; add keys; add key entities to treemap; assert equals, treemap tree,

		TEST_METHOD(TestPutAndGet)
		{
			TreeMap<int, int> tree;
			tree.put(2, 2);
			Assert::AreEqual(tree.get(2), 2);
			// puts in key and get the value
		}
	};

	TEST_CLASS(TreeMapEntityTest) {
	public:
		TEST_METHOD(TestMethodMoreThan) {
			Entity<int, int> node1(1, 6);
			Entity<int, int> node2(2, 9);

			Assert::IsTrue(node2 > node1);
		}
		TEST_METHOD(TestMethodLessThan) {
			Entity<int, int> node1(3, 4);
			Entity<int, int> node2(2, 7);

			Assert::IsTrue(node2 < node1);
		}
		TEST_METHOD(TestMethodEqual) {
			Entity<int, int> node1(3, 2);
			Entity<int, int> node2(3, 8);

			Assert::IsTrue(node2 == node1);
		}

		TEST_METHOD(TestMethodGreaterThanValue) {
			Entity<int, int> node1(3, 2);
			Entity<int, int> node2(2, 8);

			Assert::IsFalse(node2 > node1);
		}

		TEST_METHOD(TestMethodLessThanValue) {
			Entity<int, int> node1(3, 8);
			Entity<int, int> node2(2, 2);

			Assert::IsFalse(node2 > node1);
		}
		TEST_METHOD(TestMethodEqualValue) {
			Entity<int, int> node1(3, 8);
			Entity<int, int> node2(2, 8);

			Assert::IsFalse(node2 == node1);
		}

	};

}
