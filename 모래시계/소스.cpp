#include <iostream> //std
#include <string> //getline

using namespace std;

int main(int argc, char* argv[]) {

	unsigned int v,m;

	do
	{
		// �Է� �ޱ�
		cout << "���ڸ� �Է�. ";// << endl;
		cout << "0 �Է½� ����. " << endl;
		cout << "���̾� ũ��:";
		//getline(cin, v);
		cin >> v;
		//cin.clear();
		//fflush(stdin);//���������� �۵� �ȵ�.

		m = v * 2 + 1;

		string s = "";

		for (unsigned int y = 1; y <= m; y++)
		{
			for (unsigned int x = 1; x <= m; x++)
			{
				if (y<=v)
				{
					if (y<=x&& x <=m - y + 1) {
						s += "��";
					}
					else {
						s += "��";
					}

				}
				else {
					if (m-y+1<=x&&x<=y) {
						s += "��";
					}
					else {
						s += "��";
					}

				}
			}
			s += '\n';
		}
		cout << s;
	} while (0<v);

	return 0;
}