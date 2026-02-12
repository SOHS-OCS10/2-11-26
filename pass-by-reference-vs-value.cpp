#include <iostream>

using namespace std;

struct Image {
    int array[512 * 512];
    char metadata[256];
};

void imageProcessing(Image * imgToProcess) {
    cout << "The memory imgToProcess points to is: " << imgToProcess << endl;
    return;
}

int main() {
    Image img;
    cout << "The size of an integer is: " << sizeof(int) << endl;
    cout << "The size of an Image is: " << sizeof(Image) << endl;
    cout << "The address of img is: " << &img << endl;
    imageProcessing(&img);
    return 0;
}