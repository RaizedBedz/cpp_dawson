#include<iostream>
#include<map>

using namespace std;

void f(int n) {
    map<int,int> m;
    int p = 2;
    std::cout << n;
    while (n>1) {
        int count = 0;
        while(n%p==0) {
            count ++;
            n = n / p;
        }
        if (count)
            m[p] = count;
        p++;
    }
    for(map<int,int>::const_iterator i = m.begin(); i!= m.end(); ++i)
        std::cout << "\t" <<   i->first << "^" << i->second;
    std::cout << std::endl;
}

int main() {
    for(int i=0;i<1000;i++) {
        f(i);
    }

    int pause;
    cin >> pause;
}
