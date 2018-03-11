#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	string file;
	cin >> file;
	ofstream fout(file);
	//fout.open(file);
	string s = "Sed haec alii; ipse Augustus nihil amplius quam equestri familia ortum se scribit vetere ac locuplete, et in qua primus senator pater suus fuerit.M.Antonius libertinum ei proavum exprobrat, restionem e pago Thurino, avum argentarium.Nec quicquam ultra de paternis Augusti maioribus repperi.";

	string::size_type lastPos = 0, pos = 0, currentPos = 0;
	while (currentPos != string::npos) {
		while (currentPos != string::npos) {
			if (currentPos - lastPos < 20)
				pos = currentPos;
			else
				break;
			currentPos = s.find(' ', currentPos + 1);

		}
		fout << s.substr(lastPos, pos - lastPos) << "\n";
		lastPos = pos + 1;
	}
    fout.close();
	system("pause");
	return 0;
}