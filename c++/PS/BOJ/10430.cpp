#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C;

    cin >> A >> B >> C;

    cout << (A + B) % C << '\n';
    cout << (( A % C ) + ( B % C )) % C << '\n';
    cout << ( A * B ) % C << '\n';
    cout << ( ( A % C ) * ( B % C )) % C << '\n';
}