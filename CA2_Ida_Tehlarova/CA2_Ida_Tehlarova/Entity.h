#pragma once

template <class K, class V>
struct Entity {
	K key;
	V value;
	bool operator<(Entity& other) {
		return this->key < other.key;
	}
	bool operator>(Entity& other) {
		return this->key > other.key;
	}
	bool operator==(Entity& other) {
		return this->key == other.key;
	}
};
