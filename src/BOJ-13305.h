#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

namespace BOJ13305 {
	unsigned long long solution(int numOfCity, vector<int> oilPriceEachCity, vector<int> distanceEachCity);
	unsigned long long getTotalDistance(int curCityIdx, int disCityIdx, vector<int> distanceEachCity);
	void bojMain();
}
