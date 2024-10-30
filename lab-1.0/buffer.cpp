#include "buffer.h"
#include<iostream>
using namespace std;
buffer::buffer() {
    brElemenata = 0;
    trBrojElemenata = 0;
    niz = nullptr;
}
buffer::buffer(int brojElemenata) {
    brElemenata = brojElemenata;
    trBrojElemenata = 0;
    niz = new int[brojElemenata];
}
buffer::buffer(const buffer& bafer1) {
    brElemenata = bafer1.brElemenata;
    trBrojElemenata = bafer1.trBrojElemenata;
    niz = new int[bafer1.trBrojElemenata];
    for (int i = 0; i < bafer1.trBrojElemenata; i++) {
        niz[i] = bafer1.niz[i];
    }
}
buffer::~buffer() {
    delete[] niz;
}
void buffer::upisiNaKraj() {
    cin >> niz[trBrojElemenata];
    trBrojElemenata++;
}
void buffer::izbaciPoslednji() {
    niz[trBrojElemenata - 1] = niz[trBrojElemenata];
    trBrojElemenata--;
}
void buffer::prikazi() {
    for (int i = 0; i < trBrojElemenata; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;
}
void buffer::duplirajBuffer() {
    brElemenata *= 2;
}
void buffer::nezauzetaMesta() {
    brElemenata = trBrojElemenata;
}