#pragma once

template <class K, class V>
struct Entity {
	K key;
	V value;

	Entity(K key, V value) {      // constructor for both key and value
		this->key = key;
		this->value = value;
	}
	Entity(K key) {      // constructor for only key, sometimes (like remove) only needs the key and no value
		this->key = key;
	}
	Entity() {   // default constructor
	}

	bool operator<(Entity& other) {
		return this->key < other.key;
	}
	bool operator>(Entity& other) {
		return this->key > other.key;
	}
	bool operator==(Entity& other) {
		return this->key == other.key;
	}
	friend std::ostream& operator<< (std::ostream& out, Entity& other) {
		return out << other.key << " " << other.value;
	}
};
