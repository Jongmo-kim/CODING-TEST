#include "BOJ-1049.h"

using namespace std;

namespace BOJ1049 {
	int solution(int NumOfNeed, int NumOfBrend, vector<int> Set, vector<int> Each) {
		int Mod;

		sort(Set.begin(), Set.end());
		sort(Each.begin(), Each.end());

		if (*Each.begin() * 6 <= *Set.begin()) //기타줄의 갯수가 세트의 가격보다 저렴하거나 같을때
		{
			return *Each.begin() * NumOfNeed;
		}
		else //통상적인경우 : 세트가 낱개로 사는것보다 저렴할때
		{

			Mod = NumOfNeed % 6; // 세트로 못사는 나머지 계산
			if (Mod * (*Each.begin()) < *Set.begin())// 나머지의 가격의 합이 세트의 가격보다 낮다면 즉 나머지는 낱개로 살때가 유리하면
			{
				return (Mod *(*Each.begin())) + (floor((NumOfNeed / 6.0))) * *Set.begin();
			}
			else {//낱개로사는것보단 세트로 사는것이 유리하다면

				return (ceil(NumOfNeed / 6.0)) * (*Set.begin());
			}
		}
	}

	void bojMain() {
		int NumOfNeed, NumOfBrend, EachPrice, SetPrice, Mod;
		cin >> NumOfNeed >> NumOfBrend;
		vector<int> Set;
		vector<int> Each;

		for (int List_i = 0; List_i < NumOfBrend; List_i++)
		{
			cin >> SetPrice >> EachPrice;

			Set.push_back(SetPrice);
			Each.push_back(EachPrice);
		}
		cout << BOJ1049::solution(NumOfNeed, NumOfBrend, Set, Each);
	}
}
