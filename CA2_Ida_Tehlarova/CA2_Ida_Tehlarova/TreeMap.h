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

	return false;
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
	Entity<K, V> newItem(ket, value);   
	tree.add(newItem);      
}

template<class K, class V>
inline bool TreeMap<K, V>::removeKey(K key)
{
	Entity<K, V> toRemmove(key);
	return tree.remove(toRemove).value;
}

template<class K, class V>
inline V& TreeMap<K, V>::operator[](K key)
{
	return tree.get(key);
	// TODO: insert return statement here
}
