#pragma once
class buffer
{
private:
    int* niz;
    int brElemenata;
    int trBrojElemenata;
public:
    buffer();
    buffer(int brojElemenata);
    buffer(const buffer& bafer1);
    ~buffer();
    inline int vratiTrBrEl();
    void upisiNaKraj();
    void izbaciPoslednji();
    void prikazi();
    void duplirajBuffer();
    void nezauzetaMesta();
};
int buffer::vratiTrBrEl() {
    return trBrojElemenata;
}