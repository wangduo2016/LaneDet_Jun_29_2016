//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <sstream>
//
//using namespace std;
//
//bool row_det(int, int, int, vector<vector<int> >);
//bool col_det(int, int, int, vector<vector<int> >);
//bool grid_det(int, int, int, vector<vector<int> >);
//vector<int> for_grid_det(int, int, int, int, vector<vector<int> >);
//int main()
//{
//	// 初始化
//	vector<vector<int> > contents;
//	ifstream ifs("game.txt");
//	string line;
//	while (getline(ifs, line), !ifs.eof())
//	{
//		istringstream iss(line);
//		int word;
//		vector<int> sub_cont;
//		while (iss >> word)
//		{
//			sub_cont.push_back(word);
//		}
//		contents.push_back(sub_cont);
//	}
//
//	// test
//	for (int ii = 0; ii != 9; ++ii)
//	{
//		for (int jj = 0; jj != 9; ++jj)
//			cout << contents[ii][jj] << ends;
//		cout << endl;
//	}
//
//	// 
//	if (true)
//	{
//
//	}
//	
//
//	return 0;
//}
//
//// 
//void funct(int ii, int jj, vector<vector<int> > contents)
//{
//	bool row_judge = row_det(ii, jj, contents[ii][jj], contents);
//	bool col_judge = col_det(ii, jj, contents[ii][jj], contents);
//	bool grid_judge = grid_det(ii, jj, contents[ii][jj], contents);
//	if (contents[ii][jj] != 0)
//	{
//		if (row_judge && col_judge && grid_judge)
//		{
//			// 这里
//		}
//	}
//
//}
//
//// row detection
//bool row_det(int ii, int jj, int value, vector<vector<int> > contents)
//{
//	vector<int> row_sub_cont = contents[ii];
//	vector<int>::iterator it = row_sub_cont.begin();
//	while (it != row_sub_cont.end())
//	{
//		if (*it++ == value)
//			return 0;
//	}
//	return 1;
//}
//
//// column detection
//bool col_det(int ii, int jj, int value, vector<vector<int> > contents)
//{
//	vector<int> col_sub_cont;
//	for (int index = 0; index != 9; ++index)
//		col_sub_cont.push_back(contents[index][jj]);
//	vector<int>::iterator it = col_sub_cont.begin();
//	while (it != col_sub_cont.end())
//	{
//		if (*it++ == value)
//			return 0;
//	}
//	return 1;
//}
//
//// grid detection
//bool grid_det(int ii, int jj, int value, vector<vector<int> > contents)
//{
//	vector<int> grid_sub_cont;
//	if (ii < 3)
//	{
//		if (jj < 3)
//			grid_sub_cont = for_grid_det(0, 3, 0, 3, contents);
//		else if (jj < 6)
//			grid_sub_cont = for_grid_det(0, 3, 3, 6, contents);
//		else
//			grid_sub_cont = for_grid_det(0, 3, 6, 9, contents);
//
//	}
//	else if (ii < 6)
//	{
//		if (jj < 3)
//			grid_sub_cont = for_grid_det(3, 6, 0, 3, contents);
//		else if (jj < 6)
//			grid_sub_cont = for_grid_det(3, 6, 3, 6, contents);
//		else
//			grid_sub_cont = for_grid_det(3, 6, 6, 9, contents);
//	}
//	else
//	{
//		if (jj < 3)
//			grid_sub_cont = for_grid_det(6, 9, 0, 3, contents);
//		else if (jj < 6)
//			grid_sub_cont = for_grid_det(6, 9, 3, 6, contents);
//		else
//			grid_sub_cont = for_grid_det(6, 9, 6, 9, contents);
//	}
//	vector<int>::iterator it = grid_sub_cont.begin();
//	while (it != grid_sub_cont.end())
//	{
//		if (*it++ == value)
//			return 0;
//	}
//	return 1;
//}
//
//// for grid detection 
//vector<int> for_grid_det(int top, int bottom, int left, int right, vector<vector<int> > contents)
//{
//	vector<int> ret_grid_sub_cont;
//	for (int ii = top; ii != bottom; ++ii)
//		for (int jj = left; jj != right; ++jj)
//		{
//			ret_grid_sub_cont.push_back(contents[ii][jj]);
//		}
//	return ret_grid_sub_cont;
//}