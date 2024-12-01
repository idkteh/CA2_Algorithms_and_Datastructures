#pragma once
#include "BinaryTree.h"
#include "BSTNode.h"
#include "Entity.h"

using namespace std;

template <class K, class V>
class TreeMap
{
	
	void addKeys(BSTNode<Entity<K, V>>* node, BinaryTree<K>& keySet);

public:
	BinaryTree<Entity<K, V>> tree; 
	void clear();
	bool containsKey(K key);
	int size();
	V& get(K key);
	BinaryTree<K> keySet();
	void put(K key, V value);
	bool removeKey(K key);
	V& operator[](K key);
	friend std::ostream& operator<< (std::ostream& out, TreeMap& other) {
		return out << other.tree;
	}

};

template<class K, class V>
inline void TreeMap<K, V>::clear()
{
	tree.clear();  //calls the function in BinaryTree
}

template<class K, class V>
inline bool TreeMap<K, V>::containsKey(K key)
{
	bool found = false;
	BSTNode<Entity<K, V>>* node = tree.root;
	while (!found) {
		if (node == nullptr) {
			return false;
		}
		else if (node->getItem().key == key) {
			return true;
		}
		else if (node->getItem().key > key) {
			node = node->getLeft();
		}
		else {
			node = node->getRight();
		}
	}
}

template<class K, class V>
inline int TreeMap<K, V>::size()
{

	return tree.count();    
}

template<class K, class V>
inline V& TreeMap<K, V>::get(K key)
{
	Entity<K, V> toGet(key);
	return tree.get(toGet).value;
}

template<class K, class V>
inline BinaryTree<K> TreeMap<K, V>::keySet()
{
	// recursion
	// returns binary tree that includes each key without a value
	BinaryTree<K> keys;
	addKeys(keys.root, keys);
	return keys;
}

template<class K, class V>
inline void TreeMap<K, V>::addKeys(BSTNode<Entity<K, V>>* node, BinaryTree<K>& keySet)
{	
	//checks if left exists
	//call itself with left node
	//add the key of current node
	//check if right exists
	//calls itself again with right node

	if (node->getLeft() != nullptr) {
		addKeys(node->getLeft(), keySet);
	}
	keySet.add(node->getItem().key);
	if (node->getRight() != nullptr) {
		addKeys(node->getRight(), keySet);
	}

}



template<class K, class V>
inline void TreeMap<K, V>::put(K key, V value)
{
	Entity<K, V> newItem(key,value);   
	tree.add(newItem);      
}

template<class K, class V>
inline bool TreeMap<K, V>::removeKey(K key)
{
	Entity<K, V> toRemove(key);
	return tree.remove(toRemove).value;
}

template<class K, class V>
inline V& TreeMap<K, V>::operator[](K key)
{
	return this->get(key);  
	// we can do return get(key); there's no difference
	// TODO: insert return statement here
}
