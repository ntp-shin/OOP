#include "Bai3.h"

int main() {
    SinhVien sv1;
    sv1.display();

    SinhVien sv2("20127588");
    sv2.display();

    SinhVien sv3("20127588", "Nguyen Van A", 8, 8.5);
    sv3.display();

    SinhVien sv4("20127588", "Tran Thi B", 8, 8.5, 10, 7, 2002);
    sv4.display();

    SinhVien sv5(sv4);
    sv5.display();

    Date now(15, 10, 2021);
    SinhVien sv6("20127588", "Lam Quang C", 8, 8.5, now);
    sv6.display();
    return 0;
}