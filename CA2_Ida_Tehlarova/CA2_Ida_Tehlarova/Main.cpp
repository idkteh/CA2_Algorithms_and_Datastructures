#include "BinaryTree.h"
#include "BSTNode.h"
#include "TreeMap.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	TreeMap<char, BinaryTree<string>> fromFile; 
	
	ifstream f("readIn.txt");
	
	
	if (f) {
		string s = "";
		while (!f.eof()) {
			getline(f, s, ' '); 
			stringstream nextLine(s); 
			string g = ""; 
			while (getline(nextLine, g, '\n')) {  // '\n' is gonna look for end of the line  
				if (!fromFile.containsKey(g[0])) {   //checks first letter 
					BinaryTree<string> values; 
					values.add(g);  //g is my word 
					fromFile.put(g[0], values); 
				}
				else {
					fromFile.get(g[0]).add(g);   //adds to my binary tree if key exists 
				}
				
			}
		}
	
		cout << fromFile<< endl;
		f.close();
	}
	else {
		cout << "Error opening the file!";
	}

	

	TreeMap<string, int> tree;
	tree.put("a", 1);
	tree.put("a", 2);
	tree.put("b", 3);
	
	//cout << tree.containsKey("a") << endl;
	
	return 0;


}