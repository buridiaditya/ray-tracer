#include <iostream>

#define PPM_HEIGHT 256
#define PPM_WIDTH 256

int main() {
    std::cout << "P3\n" << PPM_WIDTH << " " << PPM_HEIGHT << std::endl << "255\n";
    for (int j = 0; j < PPM_HEIGHT; j++) {
        for (int i = 0; i < PPM_WIDTH; i++) {
            // Using 255.0 to get floating point numerator
            int red = (i * 255.0) / (PPM_WIDTH-1);
            int green = (j * 255.0) / (PPM_HEIGHT-1);
            int blue = 0;
            std::cout << red << " " << green << " " << blue << "\n";
        }
    }
}