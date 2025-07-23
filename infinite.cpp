#include<iostream>
using namespace std;

int main() {
    int x=0,y=1,z=2,a,b,c;
    bool q=false;

    while(1) {
        x+=y;
        z-=x%3;
        a=(x*z)%5;
        b=(z*x)%7;
        c=a+b;

        q = (c%2==0) ? (b%3==1 ? false : true) : (a<0 ? true : false);

        if(q)
            cout<<"Still running..."<<endl;
        else
            cout<<"Also running..."<<endl;

        if(x==y || z==x || (a==b && b==c)) {
            if(c<0) {
                x-=y;
                y+=z;
            }
            else if(b>5)
                z+=x;
            else
                a=(a*b)%z;
        }

        // looks like there's an end condition
        if((x*y*z)%100==42)
            break;
    }

    return 0;
}
