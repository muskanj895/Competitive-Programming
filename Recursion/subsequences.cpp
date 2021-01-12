#include <iostream>
#include<string.h>
using namespace std;

 int subseq(string q, string ans) {

		if (q.length() == 0) {
			// System.out.print(ans + " ");
			return 1;
		}

		char ch = q[0];
		string ros = q.substr(1);

		int count = 0;
		count += subseq(ros, ans);

		count += subseq(ros, ans + ch);

		return count;

	}

void printsubseq(string q, string ans) {

		if (q.length() == 0) {
			cout<<ans<<" ";
			return;
		}

		char ch = q[0];
		string ros = q.substr(1);

		printsubseq(ros, ans);

		printsubseq(ros, ans + ch);

	}


int main() {
    string a;
    cin>>a;
    printsubseq(a,"");
	cout<<endl;
    cout<<subseq(a,"")<<endl;
    
    
    return 0;
    
}
