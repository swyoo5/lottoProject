/****************************************************************************************************************/
// 1. 프로그램 이름 : 로또번호 생성기
// 2. 작성자 : 유상원
// 3. 프로그램 설명 : 로또 번호 6자리 총 5행 출력하는 프로그램
// 4. 사용된 기술 : <cstdlib>의 rand() 함수를 이용해 난수를 생성해 중복검사를 한 후 6자리 숫자를 배열에 저장한다.
/****************************************************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		int lottoNumber[6] = { 0 };
		int index = 0;
		while (lottoNumber[5] == 0)
		{
			int num = rand() % 45 + 1;
			bool duplicate = false;
			for (int j = 0; j <= index; j++)
			{
				if (lottoNumber[j] == num)
				{
					duplicate = true;
				}
			}

			if (!duplicate)
			{
				lottoNumber[index++] = num;
			}
		}
		sort(lottoNumber, lottoNumber + 6);
		for (int i = 0; i < 6; i++)
		{
			cout << lottoNumber[i] << ' ';
		}
		cout << '\n';
		index = 0;
	}
	return 0;
}