#include <iostream>
#include <list> // Библиотека хранящая в себе реализацию класса list (список)
#include <map>  // Библиотека хранящая в себе реализацию класса map (ассоциативная коллекция)
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");

	std::list<int> list1;
	list1.push_back(7);
	list1.push_back(105);
	list1.push_back(42);
	list1.push_front(555);
	//list1.pop_back();
	//list1.pop_front();

	//for (auto it = list1.cbegin(); it != list1.cend(); ++it)
	//	std::cout << *it << ' ';

	//Класс list
	for (auto el : list1)
		std::cout << el << ' ';
	std::cout << std::endl;
	
	auto place = list1.begin();
	std::advance(place, 3);
	list1.insert(place, 1000);

	place = list1.begin();
	++place;
	list1.erase(place);

	for (auto el : list1)
		std::cout << el << ' ';
	std::cout << std::endl;

	//Класс map
	std::pair<int, std::string> pair(11, "Hello");
	std::cout << pair.first << std::endl; // 11
	std::cout << pair.second << std::endl; // Hello

	std::map<std::string, int> map1;
	map1.insert(std::pair<std::string, int>("Tom", 18));
	map1.insert(std::make_pair("Ford", 25));
	map1.emplace("Lisa", 23);
	map1["Mike"] = 32;

	std::cout << map1["Ford"] << std::endl;
	std::cout << map1.find("Mike")->second << std::endl;
	map1.erase("Ford");

	map1.emplace("Tom", 20);
	map1["Tom"] = 21;

	for (auto key : map1)
		std::cout << key.first << " is " << key.second << " years old." << std::endl;

	return 0;
}