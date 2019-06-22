#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
	unordered_map<string, int> island = {
		{"軍艦島", 6},
		{"小豆島", 6},
		{"種子島", 6},
		{"佐渡島", 6},
		{"屋久島", 6},
	};

	for (auto i = island.begin(); i != island.end(); ++i){
		cout << i[0] << "\n";
		cout << i->first << i->second-1 << "\n";
	}

	return 0;
}

