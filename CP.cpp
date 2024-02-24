#include <iostream>
#include <vector>
using namespace std;
void eras(vector<char>& vec, int start, int end) {
    
    int n = vec.size();
    int k = end - start + 1; 

    if (k <= 0 || start < 0 || end >= n)
        return;

    
    for (int i = start; i <= end; ++i) {
        vec[i] = vec[n - k];
        k--;
    }

    
    vec.resize(n - (end - start + 1));
}


void removeelements(vector<char> &stringo) {
    long long size = stringo.size();
    long long k = 1;
    long long j = size -2;
	if (stringo[j] != stringo[j+1]) {
        stringo.erase(stringo.begin()+j,stringo.begin()+j+2);
    }
	else if (stringo[j] != stringo[j-1]) {
        stringo.erase(stringo.begin()+j-1,stringo.begin()+j+1);
    }
	else{}
	for (long long j = 0; j < size; j++) {
            cout << stringo[j];
        }
		cout << endl;
    
    if (stringo[k] != stringo[k-1]) {
        stringo.erase(stringo.begin()+k-1,stringo.begin()+k+1);
    }
	else if (stringo[k] != stringo[k+1]) {
        stringo.erase(stringo.begin()+j,stringo.begin()+j+2);
    }
	else{}
	for (long long j = 0; j < size; j++) {
            cout << stringo[j];
        }
	
	size =stringo.size();
	cout << size << endl;
	

    
    
}

int main() {
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        long long size;
        cin >> size;

        vector<char> stringo(size);
        for (long long j = 0; j < size; j++) {
            cin >> stringo[j];
        }

        while (size > 1 ) {
            removeelements(stringo);
            size = stringo.size();
			if (size == 2&& stringo[0] == stringo[1]) {
                break;
            }
        }


        cout << size << endl;
    }

    return 0;}
