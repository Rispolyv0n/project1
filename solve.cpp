#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<vector>
#include"Sudoku.h"
using namespace std;
int main(){
	Sudoku ss;
	ss.readIn();
	ss.solve();
	return 0;
}
