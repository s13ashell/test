struct obj
{
	int to, next, w;
	obj(int _to, int _next, int _w):
		to(_to), next(_next), w(_w) {}
};

int box[maxn], lobox;
