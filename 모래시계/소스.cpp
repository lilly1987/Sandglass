#include <iostream> //std
#include <string> //getline

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int v,m;

	do
	{
		// 입력 받기
		cout << "숫자만 입력. ";// << endl;
		cout << "0 입력시 종료. " << endl;
		cout << "다이아 크기:";
		//getline(cin, v);
		cin >> v;
		//cin.clear();
		//fflush(stdin);//리눅스에선 작동 안됨.

		m = v * 2 + 1;

		string s = "";

		for (unsigned int y = 1; y <= m; y++)
		{
			for (unsigned int x = 1; x <= m; x++)
			{
				if (y<=v)
				{
					if (y<=x&& x <=m - y + 1) {
						s += "◆";
					}
					else {
						s += "◇";
					}

				}
				else {
					if (m-y+1<=x&&x<=y) {
						s += "◆";
					}
					else {
						s += "◇";
					}

				}
			}
			s += '\n';
		}
		cout << s;
	} while (0<v);

	return 0;
}