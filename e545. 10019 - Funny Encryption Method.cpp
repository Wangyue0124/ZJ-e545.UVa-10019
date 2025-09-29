#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int dec(int val);
int hex(int val);
void binary();
vector<int>d(14);
vector<int>form;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    binary();
    int n;
    cin >> n;
    while (n--) {
        int val;
        cin >> val;
        cout << dec(val) << " " << hex(val) << "\n";
    }
    return 0;
}
void binary() {
    for (int i = 0; i < 14; i++) d[i] = pow(2, i);
}
int dec(int val) {
    form.clear();
    int i = 0, tal = 0;
    bool stop = false;
    while (!stop) {
        if (d[i] > val) stop = true;
        else i++;
    }
    i--;
    while (val) {
        for (int j = i; j >= 0; j--) {
            if (val >= d[j]) {
                form.push_back(1);
                val -= d[j];
            }
            else form.push_back(0);
        }
    }
    for (int j = 0; j < form.size(); j++) {
        if (form[j] == 1) tal++;
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