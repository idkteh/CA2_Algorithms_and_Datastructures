#include "BinaryTree.h"
#include "BSTNode.h"
#include "TreeMap.h"

using namespace std;

int main() {

	TreeMap<string, int> tree;
	tree.put("a", 1);
	tree.put("a", 2);
	tree.put("b", 3);
	
	cout << tree.containsKey("a") << endl;
	return 0;
}