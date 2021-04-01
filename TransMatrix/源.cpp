#include<iostream>
#include<set>
#include<algorithm>
//6 7 8 1 2 12 1 3 9 3 1 -3 3 6 14 4 3 24 5 2 18 6 1 15 6 4 -7
using namespace std;

typedef struct triple {
	int x, y, val;//行、列、数值


	bool operator< (const triple &target)const//用于转置后排列的比较函数
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
	int xspan, yspan, num;//x跨度，y跨度,非零元个数
	cin >> xspan>> yspan>> num;

	triple* temp = new triple();
	set<triple> transpoted;//一个Set用于存储转置过的矩阵
	for (int i = 1; i <= num; i++)
	{
		cin >> temp->x >> temp->y >> temp->val;

		transpoted.insert(*temp);//按y将三元组插入set
	}

	set<triple>::iterator iter;
	for (iter = transpoted.begin(); iter != transpoted.end(); iter++)
	{
		cout << iter->y << " " << iter->x << " " << iter->val << " ";
	}

	return 0;
}