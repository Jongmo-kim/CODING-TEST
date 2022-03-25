#include "gtest/gtest.h"
#include "BOJ-1049.cpp"
TEST(BOJ1049TEST, test1) {
    //arrange
	string inputstring(R"(
4 2
12 3
15 4
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  12);
}
TEST(BOJ1049TEST, test2) {
    //arrange
	string inputstring(R"(
10 3
20 8
40 7
60 4
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  36);
}
TEST(BOJ1049TEST, test3) {
    //arrange
	string inputstring(R"(
15 1
100 40
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  300);
}
TEST(BOJ1049TEST, test4) {
    //arrange
	string inputstring(R"(
17 1
12 3
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  36);
}
TEST(BOJ1049TEST, test5) {
    //arrange
	string inputstring(R"(
7 2
10 3
12 2
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  12);
}
TEST(BOJ1049TEST, test6) {
    //arrange
	string inputstring(R"(
9 16
21 25
77 23
23 88
95 43
96 19
59 36
80 13
51 24
15 8
25 61
21 22
3 9
68 68
67 100
83 98
96 57
	)");
    int NumOfNeed, NumOfBrend, EachPrice, SetPrice;
	std::istringstream ss(inputstring);
	ss >> NumOfNeed >> NumOfBrend;
	vector<int> Set;
	vector<int> Each;
	for (int List_i = 0; List_i < NumOfBrend; List_i++)
	{
		ss >> SetPrice >> EachPrice;

		cout << SetPrice << " " << EachPrice << endl;
		Set.push_back(SetPrice);
		Each.push_back(EachPrice);
	}
	//act
	int result = BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);

    //assert
    EXPECT_EQ (result,  6);
}