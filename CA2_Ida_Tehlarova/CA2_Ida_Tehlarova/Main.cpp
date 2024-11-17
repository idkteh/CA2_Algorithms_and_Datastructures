#include "BinaryTree.h"
#include "BSTNode.h"
#include "TreeMap.h"

using namespace std;

int main() {

	TreeMap<string, int> test;
	test.put("a", 1);
	test.put("a", 1);
	
	cout << test.containsKey("a") << endl;
	return 0;
}