#pragma once
#include "BinaryTree.h"
#include "BSTNode.h"
#include "Entity.h"

using namespace std;

template <class K, class V>
class TreeMap
{
	BinaryTree<Entity<K, V>> tree;
public:
	void clear();
	bool containsKey(K key);
	int size();
	V& get(K key);
	BinaryTree<K> keySet();
	void put(K key, V value);
	bool removeKey(K key);
	V& operator[](K key);
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
	// TODO: insert return statement here
}

template<class K, class V>
inline BinaryTree<K> TreeMap<K, V>::keySet()
{

	return BinaryTree<K>();
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
