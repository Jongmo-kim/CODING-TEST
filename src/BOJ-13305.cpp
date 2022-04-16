#include "BOJ-13305.h"

using namespace std;

namespace BOJ13305 {
	unsigned long long solution(int numOfCity, vector<int> oilPriceEachCity, vector<int> distanceEachCity) {
		int curPrice, nextPrice;
		unsigned long long totalPrice = 0ULL , passedDistance = 0;

		auto oilPriceIter = oilPriceEachCity.begin();
		auto distanceIter = distanceEachCity.begin();
        int size = oilPriceEachCity.size();
		curPrice = *(oilPriceIter);
		for (int i = 0 ; i < numOfCity ; ++i) {
			if(size <= i + 1) {
				totalPrice += (unsigned long long)curPrice * passedDistance;
				break;
			}
			nextPrice = *(oilPriceIter + i + 1);
			passedDistance +=  *(distanceIter + i);
			if ( curPrice < nextPrice) {
				continue;
			}
			
			totalPrice += (unsigned long long)curPrice * passedDistance;
			passedDistance = 0;
			curPrice = nextPrice;
		}
		return totalPrice;
	}

	unsigned long long getTotalDistance(int curCityIdx, int disCityIdx, vector<int> distanceEachCity) {

		unsigned long long total = 0;
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
			distanceEachCity.push_back(input);
		}

		for (int List_i = 0; List_i < numOfCity; List_i++)
		{	
			int input;
			cin >> input;
			oilPriceEachCity.push_back(input);
		}
		cout <<  BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);
	}
}
