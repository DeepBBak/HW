
#include "pch.h"
#include <iostream>
#include"LottoMachine.h"


int main()
{
	LottoAMchine LT;
	int n;


	cout << "몇게임 하시겠습니까?(최대 5 게임) : ";
	cin >> n;
	LT.GiveNumber(n);

}
