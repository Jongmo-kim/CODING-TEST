#include "gtest/gtest.h"
#include "BOJ-1026.h"

TEST(BOJ1026TEST, test1) {
    //arrange
	string inputstring(R"(
5
1 1 1 6 0
2 7 8 3 1
	)");
	std::istringstream ss(inputstring);

	int arrLength;
	long arrAvalue,arrBvalue;
	ss >> arrLength;

	vector<long> arrA;
	vector<long> arrB;

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrAvalue;

		arrA.push_back(arrAvalue);
	}

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrBvalue;

		arrB.push_back(arrBvalue);
	}
	//act
	long result = BOJ1026::solution(arrLength, arrA, arrB);

    //assert
    EXPECT_EQ (result,  18);
}
TEST(BOJ1026TEST, test2) {
    //arrange
	string inputstring(R"(
3
1 1 3
10 30 20
	)");
	std::istringstream ss(inputstring);

	int arrLength;
	long arrAvalue,arrBvalue;
	ss >> arrLength;

	vector<long> arrA;
	vector<long> arrB;

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrAvalue;

		arrA.push_back(arrAvalue);
	}

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrBvalue;

		arrB.push_back(arrBvalue);
	}
	//act
	long result = BOJ1026::solution(arrLength, arrA, arrB);

    //assert
    EXPECT_EQ (result,  80);
}
TEST(BOJ1026TEST, test3) {
    //arrange
	string inputstring(R"(
9
5 15 100 31 39 0 0 3 26
11 12 13 2 3 4 5 9 1
	)");
	std::istringstream ss(inputstring);

	int arrLength;
	long arrAvalue,arrBvalue;
	ss >> arrLength;

	vector<long> arrA;
	vector<long> arrB;

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrAvalue;

		arrA.push_back(arrAvalue);
	}

	for (int i = 0 ; i < arrLength ; ++i)
	{
		ss >> arrBvalue;

		arrB.push_back(arrBvalue);
	}
	//act
	long result = BOJ1026::solution(arrLength, arrA, arrB);

    //assert
    EXPECT_EQ (result,  528);
}