#include<iostream>
#include<set>
#include<algorithm>
//6 7 8 1 2 12 1 3 9 3 1 -3 3 6 14 4 3 24 5 2 18 6 1 15 6 4 -7
using namespace std;

typedef struct triple {
	int x, y, val;//�С��С���ֵ


	bool operator< (const triple &target)const//����ת�ú����еıȽϺ���
	{
		if (y == target.y)
		{
			return x < target.x;
		}
			return y < target.y;
	}

	triple(int myX, int myY, int myVal) :x(myX), y(myY), val(myVal) {};
	triple() {};
};

int main()
{
	int xspan, yspan, num;//x��ȣ�y���,����Ԫ����
	cin >> xspan>> yspan>> num;

	triple* temp = new triple();
	set<triple> transpoted;//һ��Set���ڴ洢ת�ù��ľ���
	for (int i = 1; i <= num; i++)
	{
		cin >> temp->x >> temp->y >> temp->val;

		transpoted.insert(*temp);//��y����Ԫ�����set
	}

	set<triple>::iterator iter;
	for (iter = transpoted.begin(); iter != transpoted.end(); iter++)
	{
		cout << iter->y << " " << iter->x << " " << iter->val << " ";
	}

	return 0;
}