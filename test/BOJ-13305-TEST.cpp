#include "gtest/gtest.h"
#include "BOJ-13305.h"

TEST(BOJ13305, test1) {
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  18);
}

TEST(BOJ13305, test2) {
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  10);
}

TEST(BOJ13305, test3) {
    //arrange
	string inputstring(R"(
7
3 7 2 1 5 6
5 2 2 3 1 4 8
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  46);
}
TEST(BOJ13305, test4) {
    //arrange
	string inputstring(R"(
2
1
1 1
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  1);
}

TEST(BOJ13305, test5) {
    //arrange
	string inputstring(R"(
9
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  36);
}

TEST(BOJ13305, test6) {
    //arrange
	string inputstring(R"(
9
8 7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  240);
}

TEST(BOJ13305, test7) {
    //arrange
	string inputstring(R"(
9
8 7 6 5 4 3 2 1
9 8 9 9 9 1 5 3 2
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
		distanceEachCity.push_back(input);
	}

	for (int List_i = 0; List_i < numOfCity; List_i++)
	{	
		int input;
		ss >> input;
		oilPriceEachCity.push_back(input);
	}
	//act
	unsigned long long result = BOJ13305::solution(numOfCity, oilPriceEachCity, distanceEachCity);

    //assert
    EXPECT_EQ (result,  254);
}