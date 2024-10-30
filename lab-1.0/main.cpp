#include<iostream>
#include"buffer.h"
using namespace std;
int main() {
    int n, m;
    cout << "Unesi n" << endl;
    cin >> n;
    buffer bafer1(n);
    cout << "Unesi u niz" << endl;
    for (int i = 0; i < n; i++) {
        bafer1.upisiNaKraj();
    }
    buffer* bafer2;
    bafer2 = new buffer(bafer1);
    cout << "Unesi m" << endl;
    cin >> m;
    for (int i = 0; i < m; i++) {
        bafer1.izbaciPoslednji();
    }
    cout << "TRbroj elemenata za bafer 1 je: " << bafer1.vratiTrBrEl() << endl;
    cout << "TRbroj elemenata za bafer 2 je: " << bafer2->vratiTrBrEl() << endl;
    bafer1.prikazi();
    bafer2->prikazi();
    delete bafer2;
    return 0;
}
