#include <iostream>
using namespace std;

class Shape {
    protected: int height, width;
};

class PaintCost {
    protected:
    int amt(int h,int w) {
        return 70*h*w;
    }
};

class Rectangle:public Shape,public PaintCost {
    public:
    void getdata() {
        cin>>height>>width;
    }
    void display() {
        cout<<"Total area:"<<height*width<<endl;
        cout<<"Total paint cost:$"<<PaintCost::amt(height,width);
    }
        
};

int main()
{
    Rectangle Rect;
    Rect.getdata();
    Rect.display();

	return 0;
}
