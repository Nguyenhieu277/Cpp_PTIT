#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/
class Box{
    private:
        double length, breadth, height;
    public:
        void getVolome(void){
            return length * breadth * height;
        };
        void setBreadth(double bre){
            breadth = bre;
        };
        void setLength(double len){
            length = len;
        };
        void setHeight(double hei){
            height = hei;
        };
        Box operator + (const Box& b){
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        };
};
int main(){
    Box box1, box2, box3;
    double volome = 0.0;
    
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    box2.setLength(12.0);
    box2.setBreadth(14.0);
    box2.setHeight(10.0);
    
    volume = box1.getVolome();
    cout << "Volume of Box1 : " << volume << endl;

    volume = box2.getVolome();
    cout << "Volume of Box2 : " << volume << endl;

    box3 = box1 + box2;

    volume = box3.getVolome();
    cout << "Volume of Box3 : " << volume << endl;
    return 0;
}