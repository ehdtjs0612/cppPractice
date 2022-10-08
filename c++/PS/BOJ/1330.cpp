#include <iostream>
#include <string>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C;
	cin >> A >> B >> C;
 
	int min = 60 * A + B;
	min += C;
 
	int hour = (min / 60) % 24;
	int minute = min % 60;
 
	cout << hour << " " << minute;
}   