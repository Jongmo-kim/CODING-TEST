#include "BOJ-1026.h"

using namespace std;

namespace BOJ1026 {
    bool compare(long i, long j) { return i > j; }

	long solution(int arrLength, vector<long> arrA, vector<long> arrB) {
        long result = 0L;
        sort(arrA.begin(), arrA.end());
		sort(arrB.begin(), arrB.end(), compare);
        
        for(int i = 0 ; i < arrLength ; ++i) {
            long arrAvalue = *(arrA.begin() + i);
            long arrBvalue = *(arrB.begin() + i);
            result += (arrAvalue * arrBvalue);
        }
        
        return result;

	}



	void bojMain() {
        int arrLength;
        long arrAvalue,arrBvalue;
		cin >> arrLength;

		vector<long> arrA;
		vector<long> arrB;

		for (int i = 0 ; i < arrLength ; ++i)
		{
			cin >> arrAvalue;

			arrA.push_back(arrAvalue);
		}

		for (int i = 0 ; i < arrLength ; ++i)
		{
			cin >> arrBvalue;

			arrB.push_back(arrBvalue);
		}

        cout << solution(arrLength, arrA, arrB);
	}
}
