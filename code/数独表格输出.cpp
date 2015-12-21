#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
const int width = 4; // 可以改多阶, 但5阶后就要等很久了
const int sqwid = (int)sqrt(width); // 区域宽度

// 数独表
class Sudoku { // 创建数独表 使用 vector 保存
public:
	Sudoku(){ table.resize(width, vector<int>(width)); }
	vector< vector<int> > table;
};

Sudoku mapn;
bool visn[width][width]; // 行标记
bool vism[width][width]; // 列标记
bool visp[2][2][width]; // 区域标记

// 深度优先搜索
int dfs(vector<Sudoku> *allTable, int pos) 
{
	if (pos == width*width) // 搜完一个表
	{
		allTable->push_back(mapn); // 保存到allTable
		return 1;
	}
	int sum = 0;
	int x = pos / width; // 行
	int y = pos % width; // 列
	for (int i = 1; i <= width; ++i) // 相当于 width 个方向
	{
		if (visn[x][i] || vism[y][i] || visp[x / sqwid][y / sqwid][i]) // 访问过
		{
			continue;
		}
		visn[x][i] = vism[y][i] = visp[x / sqwid][y / sqwid][i] = true; // 标记
		mapn.table[x][y] = i; // 记录
		sum += dfs(allTable, pos + 1); // 递归
		visn[x][i] = vism[y][i] = visp[x / sqwid][y / sqwid][i] = false; // 回朔
	}
	return sum;
}

// 随机数生成[start, range]
int getRandomNum(int start, int range)
{
	srand(time(NULL));
	return rand() % range + start;
}

int main()
{
	int n, i, j, temp;
	vector<Sudoku> allTable; // 所有表
	vector<int> randomPool; // 随机池
	vector<Sudoku>::iterator it; // 迭代器
	while (cin >> n, n){
		j = 0;
		allTable.clear(); // 清空
		randomPool.clear(); // 清空
		dfs(&allTable, 0); // 开始搜索
		for (i = 0; i < allTable.size(); ++i) // 创建抽奖池
		{
			randomPool.push_back(i);
		}
		for (i = 0; i < allTable.size() && j<n; ++i) // 不放回 随机 O(n)
		{
			temp = getRandomNum(1, randomPool.size()); // 产生随机数
			cout << ++j << ": " << endl; // 第 j 个表
			it = allTable.begin() + *(randomPool.begin() + temp - 1); //随机抽取一个表
			randomPool.erase(randomPool.begin() + temp - 1); // 抽取后不放回(删除)
			for (vector< vector<int> >::iterator jt = it->table.begin(); jt != it->table.end(); ++jt) // 打印表
			{
				for (vector<int>::iterator kt = jt->begin(); kt != jt->end(); ++kt)
				{
					cout << *kt << (kt + 1 == jt->end() ? "\n" : " ");
				}
			}
			cout << endl; // 每个表空一行
		}
	}
	return 0;
}