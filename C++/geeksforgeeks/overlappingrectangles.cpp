#include<iostream>
using namespace std;
struct point{
    int x,y;
};
bool dooverlap(point x1,point x2,point y1,point y2);
int main(){
    point a1={4,5}, b1={6,9};
    point a2={7,3}, b2={2,9};
    if(dooverlap(a1,b1,a2,b2))
        printf("Rectangles overlap");
    else
        printf("They don't\n");
    return 0;    


}
bool dooverlap(point x1,point x2,point y1,point y2){
    if(x1.x>y1.x || x2.x > y2.x){
        return false;
    }
    if(x1.y>y1.y || x2.y > y2.y){
        return false;
    }
    return true;
}