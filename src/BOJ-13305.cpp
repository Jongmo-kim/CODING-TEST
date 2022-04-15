#include "BOJ-13305.h"

using namespace std;

namespace BOJ13305 {
	unsigned long long solution(int numOfCity, vector<int> oilPriceEachCity, vector<int> distanceEachCity) {
		int curPrice, nextPrice, curCityIdx = 0;
		unsigned long long totalPrice = 0ULL;

		auto oilPriceIter = oilPriceEachCity.begin();
		auto distanceIter = distanceEachCity.begin();

		curPrice = *(oilPriceIter);
		for (int i = 0 ; i < numOfCity ; ++i) {

			if(oilPriceEachCity.size() < i + 1) {
				totalPrice += curPrice * getTotalDistance(curCityIdx, i, distanceEachCity);
				break;
			}

			
			nextPrice = *(oilPriceIter + i + 1);

			if ( curPrice < nextPrice) 
				continue;
			else {
				totalPrice += curPrice * getTotalDistance(curCityIdx, i, distanceEachCity);
				curCityIdx = i + 1;
				nextPrice = curPrice;
			}

		
		}
		return totalPrice;
	}

	int getTotalDistance(int curCityIdx, int disCityIdx, vector<int> distanceEachCity) {

		int total = 0;
		auto distanceIter = distanceEachCity.begin();
		for (; curCityIdx <= disCityIdx ; ++curCityIdx) {

			if(curCityIdx >= distanceEachCity.size())
				break;
			total += *(distanceIter + curCityIdx);
		}
		return total;
	}

	void bojMain() {
		int numOfCity;
		vector<int> oilPriceEachCity;
		vector<int> distanceEachCity;
		cin >> numOfCity ;
		for (int List_i = 0; List_i < numOfCity - 1; List_i++)
		{	
			int input;
			cin >> input;
			oilPriceEachCity.push_back(input);
		}

		for (int List_i = 0; List_i < numOfCity; List_i++)
		{	
			int input;
			cin >> input;
			distanceEachCity.push_back(input);
		}
		cout <<  BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);
	}
}
