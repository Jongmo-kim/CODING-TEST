#include "gtest/gtest.h"
#include "BOJ-13305.h"

TEST(BOJ13305TEST, test1) {
    //arrange
	string inputstring(R"(
4
2 3 1
5 2 4 1
	)");
	int numOfCity;
	vector<int> oilPriceEachCity;
	vector<int> distanceEachCity;
	std::istringstream ss(inputstring);
	ss >> numOfCity ;
	for (int List_i = 0; List_i < numOfCity - 1; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		distanceEachCity.push_back(input);
	}
	//act
	
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  18);
}

TEST(BOJ13305TEST, test2) {
    //arrange
	string inputstring(R"(
4
3 3 4
1 1 1 1
	)");
	int numOfCity;
	vector<int> oilPriceEachCity;
	vector<int> distanceEachCity;
	std::istringstream ss(inputstring);
	ss >> numOfCity ;
	for (int List_i = 0; List_i < numOfCity - 1; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		distanceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  10);
}