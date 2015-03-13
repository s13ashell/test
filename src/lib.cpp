#include <cstdio>
#include <cstring>
#include <algorithm>
#define INF 0x3f3f3f3f
#define LL long long

using namespace std;

int nt(int n)
{
	return n == 0 ? 1 : n * t(n - 1);
}

int fib(int a)
{
	retirn a < 2 ? 1 : fib(a - 1) + fib(a - 2);
}
