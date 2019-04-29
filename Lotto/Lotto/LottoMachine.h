#pragma once
#include"pch.h"


class LottoAMchine {
	enum {
		Size = 6,
	};
public:
	void GiveNumber(int a) {
		srand(time(0));

		if (a <= 0) {
			std::cout << "잘못된 입력" << std::endl;
			return;
		}

		for (int i = 0; i < a; i++) {
			
			v.clear();
			v.resize(0);

			for (int k = 0; k < Size; k++) {

				v.push_back( (rand() % 45) + 1 );

				for (int j = 0; j < i; j++) {
					if (v[i] == v[j]) {
						i--;
						break;
					}
				}

			}
			sort(begin(v), end(v));
			cout << i + 1 << "번째 게임 : ";
			PrintNumber();
			std::cout << std::endl;
		}
	}

	void PrintNumber() {
		for ( auto game : v) {
			std::cout << game << " ";
		}
		std::cout << std::endl;
	}

private:
	std::vector<int> v;
};