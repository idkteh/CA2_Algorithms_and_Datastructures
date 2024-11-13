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
	TreeMap();
	void clear();
	bool containsKey(K key);
	int size();
	V& get(K key);
	BinaryTree<K> keySet();
	void put(K key, V value);
	Bool removeKey(K key);
	V& operator[K key];
	~TreeMap();
};

template <class K,class V>
TreeMap<K, V>::TreeMap() {


}




template <class K, class V>
TreeMap<K, V>::~TreeMap() {

}