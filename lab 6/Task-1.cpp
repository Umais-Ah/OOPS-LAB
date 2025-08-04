#include <iostream>
using namespace std;

class Rectangle {
	private:
		int length;
		int width;
		
	public:
		void setLength (int l) {
			length = l;
		}
		
		int getLength () {
			return length;
		}
		
		void setWidth (int w) {
			width = w;
		}
		
		int getWidth (){
			return width;
		}
};

class Block : public Rectangle{
	private:
		int height;
		
	public:
		void setHeight (int h) {
			height = h;
		}
		
		int getHeight() {
			return height;
		}
};

int main() {
	Rectangle r;
	Block b;
	
	r.setLength(5);
	r.setWidth(10);
	
	cout << "Rectangle's length is " << r.getLength() << "and width is " << r.getWidth() << endl << endl;
	
	b.setHeight(4);
	b.setLength(6);
	b.setWidth(8);
	
	cout << "Block's length is " << b.getLength() << ", width is " << b.getWidth() << "and height is " << b.getHeight() << endl;
	
	return 0;
}
