#include <iostream>
using namespace std;

class Image{
    protected:
    int width, height;
    public:
    Image(int w, int h){
        width = w;
        height = h;
    }
};

class CompressedImage : public Image{
    protected:
    float compression;
    public:
    CompressedImage(int w, int h, float c): Image(w,h){
        compression = c;
    }
};

class EncryptedImage : public CompressedImage{
    string algorithm;
    public:
    EncryptedImage(int w, int h, float c, string a) : CompressedImage(w, h, c){
        algorithm = a;
    }
    void display(){
        int pixels = width*height;
        float effective = pixels * compression/100;
        cout<<"width: "<<width<<"\nheight: "<<height<<"\noriginal pixels: "<<pixels<<"\ncompression: "<<compression<<"\neffective size: "<<effective<<"\nencryption: "<<encryption<<endl;
    }
};

int main(){
    EncryptedImage img(100, 200, 50, "ABC");
    img.display();

    return 0;
}