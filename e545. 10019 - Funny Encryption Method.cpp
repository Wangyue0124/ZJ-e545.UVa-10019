#include <iostream>
using namespace std;
int dec(int val);
int hex(int val);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int val;
        cin >> val;
        cout << dec(val) << " " << hex(val) << "\n";
    }
    return 0;
}
int dec(int val) {
    int tal = 0;
    while (val) {
        if (val % 2 == 1) tal++;
        val /= 2;
    }
    return tal;
}
int hex(int val) {
    int tal = 0;
    while (val) {
        int num = val % 10;
        tal += dec(num);
        val /= 10;
    }
    return tal;
}