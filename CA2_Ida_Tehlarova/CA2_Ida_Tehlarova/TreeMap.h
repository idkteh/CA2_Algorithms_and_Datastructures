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
	V& operator[K key];
};

template<class K, class V>
inline void TreeMap<K, V>::clear()
{

}

template<class K, class V>
inline bool TreeMap<K, V>::containsKey(K key)
{
	return false;
}

template<class K, class V>
inline int TreeMap<K, V>::size()
{
	return 0;
}

template<class K, class V>
inline V& TreeMap<K, V>::get(K key)
{
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
}

template<class K, class V>
inline bool TreeMap<K, V>::removeKey(K key)
{
	return bool();
}
