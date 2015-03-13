struct obj
{
	int to, next, w;
	obj(int _to, int _next, int _w):
		to(_to), next(_next), w(_w) {}
};

int box[maxn], lobox;

void addline(int a, int b, int w)
{
	e[lobox] = obj(b, box[a], w);
	box[a] = lobox ++;
}
