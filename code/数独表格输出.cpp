#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
const int width = 4; // ���ԸĶ��, ��5�׺��Ҫ�Ⱥܾ���
const int sqwid = (int)sqrt(width); // ������

// ������
class Sudoku { // ���������� ʹ�� vector ����
public:
	Sudoku(){ table.resize(width, vector<int>(width)); }
	vector< vector<int> > table;
};

Sudoku mapn;
bool visn[width][width]; // �б��
bool vism[width][width]; // �б��
bool visp[2][2][width]; // ������

// �����������
int dfs(vector<Sudoku> *allTable, int pos) 
{
	if (pos == width*width) // ����һ����
	{
		allTable->push_back(mapn); // ���浽allTable
		return 1;
	}
	int sum = 0;
	int x = pos / width; // ��
	int y = pos % width; // ��
	for (int i = 1; i <= width; ++i) // �൱�� width ������
	{
		if (visn[x][i] || vism[y][i] || visp[x / sqwid][y / sqwid][i]) // ���ʹ�
		{
			continue;
		}
		visn[x][i] = vism[y][i] = visp[x / sqwid][y / sqwid][i] = true; // ���
		mapn.table[x][y] = i; // ��¼
		sum += dfs(allTable, pos + 1); // �ݹ�
		visn[x][i] = vism[y][i] = visp[x / sqwid][y / sqwid][i] = false; // ��˷
	}
	return sum;
}

// ���������[start, range]
int getRandomNum(int start, int range)
{
	srand(time(NULL));
	return rand() % range + start;
}

int main()
{
	int n, i, j, temp;
	vector<Sudoku> allTable; // ���б�
	vector<int> randomPool; // �����
	vector<Sudoku>::iterator it; // ������
	while (cin >> n, n){
		j = 0;
		allTable.clear(); // ���
		randomPool.clear(); // ���
		dfs(&allTable, 0); // ��ʼ����
		for (i = 0; i < allTable.size(); ++i) // �����齱��
		{
			randomPool.push_back(i);
		}
		for (i = 0; i < allTable.size() && j<n; ++i) // ���Ż� ��� O(n)
		{
			temp = getRandomNum(1, randomPool.size()); // ���������
			cout << ++j << ": " << endl; // �� j ����
			it = allTable.begin() + *(randomPool.begin() + temp - 1); //�����ȡһ����
			randomPool.erase(randomPool.begin() + temp - 1); // ��ȡ�󲻷Ż�(ɾ��)
			for (vector< vector<int> >::iterator jt = it->table.begin(); jt != it->table.end(); ++jt) // ��ӡ��
			{
				for (vector<int>::iterator kt = jt->begin(); kt != jt->end(); ++kt)
				{
					cout << *kt << (kt + 1 == jt->end() ? "\n" : " ");
				}
			}
			cout << endl; // ÿ�����һ��
		}
	}
	return 0;
}