/****************************************************************************************************************/
// 1. ���α׷� �̸� : �ζǹ�ȣ ������
// 2. �ۼ��� : �����
// 3. ���α׷� ���� : �ζ� ��ȣ 6�ڸ� �� 5�� ����ϴ� ���α׷�
// 4. ���� ��� : <cstdlib>�� rand() �Լ��� �̿��� ������ ������ �ߺ��˻縦 �� �� 6�ڸ� ���ڸ� �迭�� �����Ѵ�.
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