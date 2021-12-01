#include "Bai2.h"

SoNguyen::SoNguyen(){
    v = 0;
    if(v < min) min = v;
}

SoNguyen::SoNguyen(int val){
    v = val;
    if(v < min) min = v;
}

int SoNguyen::getValue(){
    return v;
}

int SoNguyen::getMin(){
    return min;
}

bool operator>(SoNguyen so1, SoNguyen so2){
    if(so1.v > so2.v)
        return true;
    return false;
}

bool operator<(SoNguyen so1, SoNguyen so2){
    if(so1.v < so2.v)
        return true;
    return false;
}

ostream& operator<<(ostream& out, SoNguyen so){
    out << so.v;
    return out;
}

istream& operator>>(istream& in, SoNguyen& so) {
    in >> so.v;
    if(so.v < SoNguyen::min) SoNguyen::min = so.v;
    return in;
}
