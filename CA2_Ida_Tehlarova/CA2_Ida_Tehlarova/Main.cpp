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
				//cout << g;
				if (!fromFile.containsKey(g[0])) {   //checks first letter 
					BinaryTree<string> values;  
					fromFile.put(g[0], values); 
					 
				}
			fromFile.get(g[0]).add(g);   //adds to my binary tree if key exists 
				
			}
		}
		string in;
		cout << "Type the word/letter you want to look up: ";
		cin >> in;
		if (fromFile.containsKey(in[0])) {
			cout << fromFile.get(in[0])<<endl;
		}
		else {
			cout << "Error: file doesn't contain the key"<<endl;
		}
		
		cout << fromFile<< endl;
		f.close();
	}
	else {
		cout << "Error opening the file!";
	}



	TreeMap<char, BinaryTree<string>> fromCSV; 

	ifstream c("NumbersAndWords.csv");

	string firstLine = "";
	getline(c, firstLine, '\n');
	if (c) {
		string  line, words, trees, years, randomFloats = "";
		while (!c.eof()) { 
			while (getline(c, line,',')) {  // '\n' is gonna look for end of the line  
				cout << "Line: " << line << " ";

				getline(c, words, ',');
				cout << words << " ";
				getline(c, trees, ',');
				cout << trees << " ";
				getline(c, years, ',');
				cout << years << " ";
				getline(c, randomFloats, '\n');
				cout << randomFloats << " " << endl;
			}
		}
		c.close();
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